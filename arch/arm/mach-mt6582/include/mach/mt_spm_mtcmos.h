/*
* Copyright (C) 2011-2014 MediaTek Inc.
* 
* This program is free software: you can redistribute it and/or modify it under the terms of the 
* GNU General Public License version 2 as published by the Free Software Foundation.
* 
* This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; 
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
* See the GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License along with this program.
* If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _MT_SPM_MTCMOS_
#define _MT_SPM_MTCMOS_

#include <linux/kernel.h>

#define STA_POWER_DOWN  0
#define STA_POWER_ON    1

/*
 * 1. for CPU MTCMOS: CPU0, CPU1, CPU2, CPU3, DBG, CPUSYS
 * 2. call spm_mtcmos_cpu_lock/unlock() before/after any operations
 */
extern void spm_mtcmos_cpu_lock(unsigned long *flags);
extern void spm_mtcmos_cpu_unlock(unsigned long *flags);

extern int spm_mtcmos_ctrl_cpu0(int state, int chkWfiBeforePdn);
extern int spm_mtcmos_ctrl_cpu1(int state, int chkWfiBeforePdn);
extern int spm_mtcmos_ctrl_cpu2(int state, int chkWfiBeforePdn);
extern int spm_mtcmos_ctrl_cpu3(int state, int chkWfiBeforePdn);

extern int spm_mtcmos_ctrl_dbg(int state);
extern int spm_mtcmos_ctrl_cpusys(int state);

extern bool spm_cpusys_can_power_down(void);


/*
 * 1. for non-CPU MTCMOS: VDEC, VENC, ISP, DISP, MFG, INFRA, DDRPHY, MDSYS1, MDSYS2
 * 2. call spm_mtcmos_noncpu_lock/unlock() before/after any operations
 */
//extern void spm_mtcmos_noncpu_lock(unsigned long *flags);
//extern void spm_mtcmos_noncpu_unlock(unsigned long *flags);

extern int spm_mtcmos_ctrl_vdec(int state);
//extern int spm_mtcmos_ctrl_venc(int state);
extern int spm_mtcmos_ctrl_isp(int state);
extern int spm_mtcmos_ctrl_disp(int state);
extern int spm_mtcmos_ctrl_mfg(int state);

extern int spm_mtcmos_ctrl_infra(int state);
extern int spm_mtcmos_ctrl_ddrphy(int state);

extern int spm_mtcmos_ctrl_mdsys1(int state);
//extern int spm_mtcmos_ctrl_mdsys2(int state);
extern int spm_mtcmos_ctrl_connsys(int state);

extern int test_spm_gpu_power_on(void);

#endif
