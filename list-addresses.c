#include <stdio.h>
#include <stdlib.h>

void other(){
	
}

void main(int argc, char **argv){
	char *buffer[20];
	const char *str = "Hello";
	int *i;
	printf("stack variable: %p\n",buffer);
	printf("initialized data: %p\n",str);
	printf("uninitialized data: %p\n",i);
	printf("main: %p\n",main);
	printf("function: %p\n",other);
}

