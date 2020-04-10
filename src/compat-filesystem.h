#ifndef __COMPAT_FILESYSTEM__
#define __COMPAT_FILESYSTEM__

#if defined(__cplusplus) && __cplusplus >= 201703L && \
    defined(__has_include) && __has_include(<filesystem>)
#include <filesystem>
namespace compat {
namespace filesystem = ::std::filesystem;
}
#else
#include <experimental/filesystem>
namespace compat {
namespace filesystem = ::std::experimental::filesystem;
}
#endif

#endif  // __COMPAT_FILESYSTEM__
