#ifndef sysops_win_memory_ops_h
#define sysops_win_memory_ops_h

#include <WinBase.h>

#include <cstddef>
#include <cstdlib>

namespace sysops
{
namespace memory
{
class ops
{
   public:
    static inline void* aligned_malloc(std::size_t aSize,
                                       std::size_t aAlignment) noexcept
    {
        return ::_aligned_malloc(aSize, aAlignment);
    }

    static inline void aligned_free(void* aPtr) noexcept
    {
        return ::_aligned_free(aPtr);
    }

    static inline PVOID SecureZeroMemory(PVOID aPtr, SIZE_T aCnt) noexcept
    {
        return ::SecureZeroMemory(aPtr, aCnt);
    }
};
}  // namespace memory
}  // namespace sysops

#endif /* sysops_win_memory_ops_h */
