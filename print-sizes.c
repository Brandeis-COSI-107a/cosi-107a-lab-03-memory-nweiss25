#include <stdio.h>
#include <stdlib.h>

void main(int argc, char **argv){
	int x = 978;
	int *i;
	char arr[200];
	char *p;
	printf("size of char is %d\n",sizeof(char));
	printf("size of short is %d\n",sizeof(short));
	printf("size of int is %d\n",sizeof(int));
	printf("size of long is %d\n",sizeof(long));
	printf("size of long long is %d\n",sizeof(long long));
	printf("size of float is %d\n",sizeof(float));
	printf("size of double is %d\n",sizeof(double));
	printf("size of char * is %d\n",sizeof(char *));
	printf("size of int * is %d\n",sizeof(int *));
	printf("size of long * is %d\n",sizeof(long *));
	printf("The size of my character array is %d\n",sizeof(arr));
	p = arr;
	i = &x;
	printf("The size of my character pointer is %d\n",sizeof(p));
	printf("The size of my int pointer is %d\n",sizeof(i));
	printf("The size of what my integer pointer points at is %d\n",sizeof(*i));
}
