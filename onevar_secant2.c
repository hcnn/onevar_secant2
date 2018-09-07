#include "onevar_secant2.h"

OnevarResult onevar_secant2(ONEVAR_FUNC_PTR func, const double* params, const OnevarSetting opt)
{
    return onevar_secant(func, params, 
                         opt.disp, opt.maxiter, opt.tolfun, opt.maxjump, 
                         opt.delta, opt.x0, opt.x1);
}
