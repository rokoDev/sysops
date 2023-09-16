#ifndef sysops_ops_h
#define sysops_ops_h

namespace sysops
{
template <typename... Ops>
class ops : public Ops...
{
};
}  // namespace sysops

#endif /* sysops_sys_ops_h */
