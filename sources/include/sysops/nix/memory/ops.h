#ifndef sysops_nix_memory_ops_h
#define sysops_nix_memory_ops_h

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
};
}  // namespace memory
}  // namespace sysops

#endif /* sysops_nix_memory_ops_h */
