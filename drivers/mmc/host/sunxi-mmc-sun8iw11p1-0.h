/*
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#ifdef CONFIG_ARCH_SUN8IW11P1

#ifndef __SUNXI_MMC_SUN8IW11P1_0_H__
#define __SUNXI_MMC_SUN8IW11P1_0_H__

#define SUNXI_SDMMC0

//dma triger level setting
#define SUNXI_DMA_TL_SDMMC0 	((0x2<<28)|(7<<16)|248)
//one dma des can transfer data size = 1<<SUNXI_DES_SIZE_SDMMC0
#define SUNXI_DES_SIZE_SDMMC0	(15)

extern int sunxi_mmc_clk_set_rate_for_sdmmc0(struct sunxi_mmc_host *host,
				  struct mmc_ios *ios);
extern void sunxi_mmc_thld_ctl_for_sdmmc0(struct sunxi_mmc_host *host,
			  struct mmc_ios *ios, struct mmc_data *data);

void sunxi_mmc_save_spec_reg0(struct sunxi_mmc_host *host);
void sunxi_mmc_restore_spec_reg0(struct sunxi_mmc_host *host);
#endif

#endif
