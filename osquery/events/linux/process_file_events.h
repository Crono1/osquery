/**
 *  Copyright (c) 2014-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under both the Apache 2.0 license (found in the
 *  LICENSE file in the root directory of this source tree) and the GPLv2 (found
 *  in the COPYING file in the root directory of this source tree).
 *  You may select, at your option, one of the above-listed licenses.
 */

#pragma once

#include <asm/unistd_64.h>

#include <set>

const std::set<int> kProcessFileEventsSyscalls = {
  __NR_linkat,
  __NR_symlink,
  __NR_symlinkat,
  __NR_unlink,
  __NR_unlinkat,
  __NR_rename,
  __NR_renameat,
  __NR_renameat2,
  __NR_creat,
  __NR_mknod,
  __NR_mknodat,
  __NR_open,
  __NR_openat,
  __NR_open_by_handle_at,
  __NR_name_to_handle_at,
  __NR_close,
  __NR_dup,
  __NR_dup2,
  __NR_dup3,
  __NR_pread64,
  __NR_preadv,
  __NR_read,
  __NR_readv,
  __NR_mmap,
  __NR_write,
  __NR_writev,
  __NR_pwrite64,
  __NR_pwritev,
  __NR_truncate,
  __NR_ftruncate,
  __NR_clone,
  __NR_fork,
  __NR_vfork};
