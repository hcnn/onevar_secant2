#include <stdio.h>  //printf
#include <stdbool.h> //bool
#include "onevar_secant2.h"

double myparabel(double x, const double* params){
    return params[0] * x * x;
}

int main()
{
    double params[] = {2.0};
    
    OnevarSetting opt = onevar_setting_init(SECANT);
    opt.disp = true;
    opt.tolfun = 1e-15;
    opt.maxiter = 1000;

    OnevarResult res = onevar_secant2( &myparabel, params, opt);
    print_onevar_result(res);
    return 0;
}
