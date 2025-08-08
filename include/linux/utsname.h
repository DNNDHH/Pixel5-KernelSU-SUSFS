#ifndef _LINUX_UTSNAME_H
#define _LINUX_UTSNAME_H

#include <linux/types.h>
#include <linux/user_namespace.h>

extern struct user_namespace init_user_ns;

struct utsname {
    char sysname[65];
    char nodename[65];
    char release[65];
    char version[65];
    char machine[65];
};

int get_utsname(struct utsname *buf);
int set_utsname(const struct utsname *buf);

#endif /* _LINUX_UTSNAME_H */