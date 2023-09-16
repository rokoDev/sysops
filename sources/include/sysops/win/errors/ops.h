#ifndef sysops_win_errors_ops_h
#define sysops_win_errors_ops_h

#include <errno.h>

namespace sysops
{
namespace errors
{
class ops
{
   public:
    static inline errno_t get_errno(int* pValue) noexcept
    {
        return ::_get_errno(pValue);
    }
};
}  // namespace errors
}  // namespace sysops

#endif /* sysops_win_errors_ops_h */
