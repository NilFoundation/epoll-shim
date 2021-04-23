#ifndef SHIM_SYS_SHIM_HELPERS_WRITE
#define SHIM_SYS_SHIM_HELPERS_WRITE

#include <unistd.h> /* IWYU pragma: keep */

extern ssize_t epoll_shim_write(int, void const *, size_t);
extern ssize_t write(int a, void const *b, size_t c);

#endif
