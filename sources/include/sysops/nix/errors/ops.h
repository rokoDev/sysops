#ifndef sysops_nix_errors_ops_h
#define sysops_nix_errors_ops_h

#include <cerrno>

namespace sysops
{
namespace errors
{
class ops
{
   public:
    static inline int get_errno() noexcept { return errno; }
};
}  // namespace errors
}  // namespace sysops

#endif /* sysops_nix_errors_ops_h */
