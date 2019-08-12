/************************************************************************************
 * arch/arm/include/s32k1xx/s32k14x_irq.h
 *
 *   Copyright (C) 2019 Gregory Nutt. All rights reserved.
 *   Author: Gregory Nutt <gnutt@nuttx.org>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ************************************************************************************/

/* This file should never be included directed but, rather, only indirectly through
 * nuttx/irq.h
 */

#ifndef __ARCH_ARM_INCLUDE_S32K1XX_S32K14XX_IRQ_H
#define __ARCH_ARM_INCLUDE_S32K1XX_S32K14XX_IRQ_H

/************************************************************************************
 * Included Files
 ************************************************************************************/

#include <nuttx/config.h>
#include <nuttx/irq.h>
#include <arch/stm32/chip.h>

/************************************************************************************
 * Pre-processor Definitions
 ************************************************************************************/

/* IRQ numbers.  The IRQ number corresponds vector number and hence map directly to
 * bits in the NVIC.  This does, however, waste several words of memory in the IRQ
 * to handle mapping tables.
 */

/* Processor Exceptions (vectors 0-15) */

#define S32K_IRQ_RESERVED       (0) /* Reserved vector (only used with CONFIG_DEBUG_FEATURES) */
                                    /* Vector  0: Reset stack pointer value */
                                    /* Vector  1: Reset (not handler as an IRQ) */
#define S32K_IRQ_NMI            (2) /* Vector  2: Non-Maskable Interrupt (NMI) */
#define S32K_IRQ_HARDFAULT      (3) /* Vector  3: Hard fault */
#define S32K_IRQ_MEMFAULT       (4) /* Vector  4: Memory management (MPU) */
#define S32K_IRQ_BUSFAULT       (5) /* Vector  5: Bus fault */
#define S32K_IRQ_USAGEFAULT     (6) /* Vector  6: Usage fault */
#define S32K_IRQ_SVCALL        (11) /* Vector 11: SVC call */
#define S32K_IRQ_DBGMONITOR    (12) /* Vector 12: Debug Monitor */
                                    /* Vector 13: Reserved */
#define S32K_IRQ_PENDSV        (14) /* Vector 14: Pendable system service request */
#define S32K_IRQ_SYSTICK       (15) /* Vector 15: System tick */

/* External interrupts (vectors >= 16).  These definitions are chip-specific */

#define S32K_IRQ_FIRST         (16) /* Vector number of the first external interrupt */
#warning Missing logic

#endif /* __ARCH_ARM_INCLUDE_S32K1XX_S32K14XX_IRQ_H */

