/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2013-2015 Damien P. George
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef MICROPY_INCLUDED_STM32_MODMACHINE_H
#define MICROPY_INCLUDED_STM32_MODMACHINE_H

#include "py/obj.h"

extern const mp_obj_type_t machine_adc_type;
extern const mp_obj_type_t machine_i2c_type;
extern const mp_obj_type_t machine_spi_type;
extern const mp_obj_type_t machine_timer_type;

void machine_init(void);
void machine_deinit(void);
void machine_i2s_init0();
NORETURN mp_obj_t machine_bootloader(size_t n_args, const mp_obj_t *args);

MP_DECLARE_CONST_FUN_OBJ_VAR_BETWEEN(machine_info_obj);
MP_DECLARE_CONST_FUN_OBJ_0(machine_unique_id_obj);
MP_DECLARE_CONST_FUN_OBJ_0(machine_reset_obj);
MP_DECLARE_CONST_FUN_OBJ_VAR_BETWEEN(machine_bootloader_obj);
MP_DECLARE_CONST_FUN_OBJ_VAR_BETWEEN(machine_freq_obj);

MP_DECLARE_CONST_FUN_OBJ_0(machine_idle_obj);
MP_DECLARE_CONST_FUN_OBJ_VAR_BETWEEN(machine_lightsleep_obj);
MP_DECLARE_CONST_FUN_OBJ_VAR_BETWEEN(machine_deepsleep_obj);
MP_DECLARE_CONST_FUN_OBJ_0(machine_reset_cause_obj);

MP_DECLARE_CONST_FUN_OBJ_0(machine_disable_irq_obj);
MP_DECLARE_CONST_FUN_OBJ_VAR_BETWEEN(machine_enable_irq_obj);

MP_DECLARE_CONST_FUN_OBJ_0(pyb_irq_stats_obj);

#endif // MICROPY_INCLUDED_STM32_MODMACHINE_H
