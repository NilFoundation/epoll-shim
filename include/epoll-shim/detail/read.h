#ifndef SHIM_SYS_SHIM_HELPERS_READ
#define SHIM_SYS_SHIM_HELPERS_READ

#include <unistd.h> /* IWYU pragma: keep */

extern ssize_t epoll_shim_read(int, void *, size_t);
extern inline ssize_t read(int a, void *b, size_t c);

#endif
