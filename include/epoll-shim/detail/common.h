#ifndef SHIM_SYS_SHIM_HELPERS
#define SHIM_SYS_SHIM_HELPERS

#include <fcntl.h>  /* IWYU pragma: keep */
#include <unistd.h> /* IWYU pragma: keep */

extern int epoll_shim_close(int);

extern int epoll_shim_fcntl(int, int, ...);

#endif
