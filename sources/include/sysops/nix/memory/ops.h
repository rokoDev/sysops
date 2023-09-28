#ifndef sysops_nix_memory_ops_h
#define sysops_nix_memory_ops_h
#define __STDC_WANT_LIB_EXT1__ 1
#include <string.h>

#include <cstddef>
#include <cstdlib>

namespace sysops
{
namespace memory
{
class ops
{
   public:
    static inline int posix_memalign(void **aMemptr, std::size_t aAlignment,
                                     std::size_t aSize) noexcept
    {
        return ::posix_memalign(aMemptr, aAlignment, aSize);
    }

    static inline void free(void *aPtr) noexcept { ::free(aPtr); }

    static inline int memset_s([[maybe_unused]] void *aDest,
                               [[maybe_unused]] std::size_t aDestsz,
                               [[maybe_unused]] int aCh,
                               [[maybe_unused]] std::size_t aCount) noexcept
    {
#ifdef __STDC_LIB_EXT1__
        return ::memset_s(aDest, aDestsz, aCh, aCount);
#else
        return -1;
#endif
    }
};
}  // namespace memory
}  // namespace sysops

#endif /* sysops_nix_memory_ops_h */
