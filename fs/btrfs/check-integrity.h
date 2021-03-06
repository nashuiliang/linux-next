/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) STRATO AG 2011.  All rights reserved.
 */

#ifndef BTRFS_CHECK_INTEGRITY_H
#define BTRFS_CHECK_INTEGRITY_H

#ifdef CONFIG_BTRFS_FS_CHECK_INTEGRITY
void btrfsic_check_bio(struct bio *bio);
#else
static inline void btrfsic_check_bio(struct bio *bio) { }
#endif

int btrfsic_mount(struct btrfs_fs_info *fs_info,
		  struct btrfs_fs_devices *fs_devices,
		  int including_extent_data, u32 print_mask);
void btrfsic_unmount(struct btrfs_fs_devices *fs_devices);

#endif
