#include <stdio.h>
int main()
{
	double U,I,t;
	scanf("%lf,%lf,%lf",&U,&I,&t);
	double P,R,E;         
	P=U*I;
	R=U/I;
	E=P*t/3600;
	printf("P=%.2f W\n,R=%.2f ohm\n,E=%.3f Wh\n",P,R,E);
}
