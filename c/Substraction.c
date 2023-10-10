#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int a,b,diff;
	if(argc!=3)
	{
		printf("Invalid arguments\n");
		return -1;
	}
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	diff=a-b;
	printf("%d - %d = %d",a,b,diff);
	return 0;
}
