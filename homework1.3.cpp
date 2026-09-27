#include <stdio.h>
#define PAI 3.1415926
int main()
{
	double d,nL,nR;
	scanf("%lf,%lf,%lf",&d,&nL,&nR);
	double vL,vR,v;
	vL=PAI*d*nL/60;
	vR=PAI*d*nR/60;
	v=(vL+vR)/2;
	printf("vL=%.3f m/s\n,vR=%.3f m/s\n,v=%.3f m/s\n",vL,vR,v);
	
}
