#include <stdio.h>

int main()
{
	int i,n;
	scanf ("%d",&i);
	printf ("%d is ok ",i);
	scanf ("%d" &n);
	printf ("%d",i);
	for (n=0; n<5; n++)
		i++;
	printf ("%d",i);
	return 0;
}
