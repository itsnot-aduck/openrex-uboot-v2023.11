// SPDX-License-Identifier: GPL-2.0+
/*
 * Copyright (C) 2023 Andes Technology Corporation
 */

#ifndef _ASM_ANDES_CSR_H
#define _ASM_ANDES_CSR_H

#include <asm/asm.h>
#include <linux/const.h>

#define CSR_MCACHE_CTL 0x7ca
#define CSR_MMISC_CTL 0x7d0
#define CSR_MARCHID 0xf12
#define CSR_MCCTLCOMMAND 0x7cc

#define MCACHE_CTL_IC_EN_OFFSET 0
#define MCACHE_CTL_DC_EN_OFFSET 1
#define MCACHE_CTL_CCTL_SUEN_OFFSET 8
#define MCACHE_CTL_DC_COHEN_OFFSET 19
#define MCACHE_CTL_DC_COHSTA_OFFSET 20

#define MCACHE_CTL_IC_EN BIT(MCACHE_CTL_IC_EN_OFFSET)
#define MCACHE_CTL_DC_EN BIT(MCACHE_CTL_DC_EN_OFFSET)
#define MCACHE_CTL_CCTL_SUEN BIT(MCACHE_CTL_CCTL_SUEN_OFFSET)
#define MCACHE_CTL_DC_COHEN BIT(MCACHE_CTL_DC_COHEN_OFFSET)
#define MCACHE_CTL_DC_COHSTA BIT(MCACHE_CTL_DC_COHSTA_OFFSET)

#define CCTL_L1D_WBINVAL_ALL 6

#endif /* _ASM_ANDES_CSR_H */
