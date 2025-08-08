#include "linux/susfs.h"

// ... existing code ...

// Around line 386:
status = susfs_sus_path_by_filename(fname, &error, SYSCALL_FAMILY_ALL_ENOENT);

// ... existing code ...