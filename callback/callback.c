/*callback.c*/

#include <stdio.h>
#include "reg_callback.h"

void my_callback(){
	printf("inside my_callback\n");
}

int main(){
	callback ptr_my_callback =  my_callback;
	printf("callback example\n");
	register_callback(ptr_my_callback);
	printf("back in here\n");
	return 0;
}
