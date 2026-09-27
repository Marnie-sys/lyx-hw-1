#include <stdio.h>
int main()
{
	int time;
	scanf("%d\n",&time);
	int h,r,min,s;
	h=time/3600;
	r=time%3600;
	min=r/60;
	s=r%60;
	printf("%d h,%d min,%d s",h,min,s);
}
