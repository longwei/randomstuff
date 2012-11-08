
#include <stdio.h>
#include "reg_callback.h"

void register_callback(callback ptr_reg_callback)
{
	printf("inside the register callback, calling back\n");
	(*ptr_reg_callback)();
}