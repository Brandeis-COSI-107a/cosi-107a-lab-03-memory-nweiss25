#include <stdio.h>
#include <stdlib.h>

void main(int argc, char **argv){
	long long int add = 0;
	int i;
	for(i=1;i<argc;i++){
		add =strtoll(argv[i],NULL,10);
//		printf("%lld\n",add);
		printf("0x%012llX\n",add);
	}
}
