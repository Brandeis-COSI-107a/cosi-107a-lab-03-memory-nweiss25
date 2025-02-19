#include <stdio.h>
#include <stdlib.h>

void main(int argc, char **argv){
	long int num;
	int i;
	for(i = 1; i < argc; i++){
		num = strtol(argv[i], NULL, 0);
		num = num >> 8;
		printf("0x%02X %3d\n",num&255,num&255);
	}
}
