#ifndef SHIM_SYS_SHIM_HELPERS_POLL
#define SHIM_SYS_SHIM_HELPERS_POLL

#include <poll.h>   /* IWYU pragma: keep */
#include <signal.h> /* IWYU pragma: keep */

extern int epoll_shim_poll(struct pollfd *, nfds_t, int);
extern int epoll_shim_ppoll(struct pollfd *, nfds_t, struct timespec const *,
    sigset_t const *);

extern int poll(struct pollfd *a, nfds_t b, int c);
extern int ppoll(struct pollfd *a, nfds_t b, struct timespec const *c, sigset_t const *d);

#endif
