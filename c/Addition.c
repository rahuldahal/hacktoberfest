#include <stdio.h>

int main(int argc, char *argv[])
{
	int a,b,sum;
	if(argc!=3)
	{
		printf("please use \"prg_name value1 value2 \"\n");
		return -1;
	}
	
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	sum = a+b;
	
	printf("Sum of %d, %d is: %d\n",a,b,sum);
	
	return 0;
}
