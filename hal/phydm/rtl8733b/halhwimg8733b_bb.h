/******************************************************************************
 *
 * Copyright(c) 2007 - 2017 Realtek Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * The full GNU General Public License is included in this distribution in the
 * file called LICENSE.
 *
 * Contact Information:
 * wlanfae <wlanfae@realtek.com>
 * Realtek Corporation, No. 2, Innovation Road II, Hsinchu Science Park,
 * Hsinchu 300, Taiwan.
 *
 * Larry Finger <Larry.Finger@lwfinger.net>
 *
 *****************************************************************************/

/*Image2HeaderVersion: R3 1.5.11*/
#if (RTL8733B_SUPPORT == 1)
#ifndef __INC_MP_BB_HW_IMG_8733B_H
#define __INC_MP_BB_HW_IMG_8733B_H

/******************************************************************************
 *                           agc_tab.TXT
 ******************************************************************************/

/* tc: Test Chip, mp: mp Chip*/
void
odm_read_and_config_mp_8733b_agc_tab(struct dm_struct *dm);
u32 odm_get_version_mp_8733b_agc_tab(void);

/******************************************************************************
 *                           phy_reg.TXT
 ******************************************************************************/

/* tc: Test Chip, mp: mp Chip*/
void
odm_read_and_config_mp_8733b_phy_reg(struct dm_struct *dm);
u32 odm_get_version_mp_8733b_phy_reg(void);

/******************************************************************************
 *                           phy_reg_pg.TXT
 ******************************************************************************/

/* tc: Test Chip, mp: mp Chip*/
void
odm_read_and_config_mp_8733b_phy_reg_pg(struct dm_struct *dm);
u32 odm_get_version_mp_8733b_phy_reg_pg(void);

/******************************************************************************
 *                           phy_reg_pg_type12.TXT
 ******************************************************************************/

/* tc: Test Chip, mp: mp Chip*/
void
odm_read_and_config_mp_8733b_phy_reg_pg_type12(struct dm_struct *dm);
u32 odm_get_version_mp_8733b_phy_reg_pg_type12(void);

#endif
#endif /* end of HWIMG_SUPPORT*/

