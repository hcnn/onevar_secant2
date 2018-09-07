#ifndef ONEVAR_SECANT2_H
#define ONEVAR_SECANT2_H

#include "onevar_func_ptr/onevar_func_ptr.h" 
#include "onevar_result/onevar_result.h" 
#include "onevar_setting/onevar_setting.h" 
#include "onevar_secant/onevar_secant.h"

OnevarResult onevar_secant2(ONEVAR_FUNC_PTR func, const double* params, const OnevarSetting opt);

#endif /* ONEVAR_SECANT2_H */
