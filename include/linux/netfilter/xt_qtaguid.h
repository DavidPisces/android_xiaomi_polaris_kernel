/*
 * Copyright (c) 2016-2017, The Linux Foundation. All rights reserved.
 * Copyright (C) 2019 XiaoMi, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _XT_QTAGUID_MATCH_H
#define _XT_QTAGUID_MATCH_H

/* For now we just replace the xt_owner.
 * FIXME: make iptables aware of qtaguid. */
#include <linux/netfilter/xt_owner.h>

#define XT_QTAGUID_UID    XT_OWNER_UID
#define XT_QTAGUID_GID    XT_OWNER_GID
#define XT_QTAGUID_SOCKET XT_OWNER_SOCKET
#define xt_qtaguid_match_info xt_owner_match_info

int qtaguid_untag(struct socket *sock, bool kernel);
#endif /* _XT_QTAGUID_MATCH_H */
