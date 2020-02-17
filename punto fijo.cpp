#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define e 2.718281828
double ec (double x)
{
	double a;
	a=(exp(-x)-x);
	return a;
}
double raiz (double, double, double)
{
	double a,b,c,d;
	int i=1,x=1,y;
	printf("Aproximacion:");
	scanf("%lf",a);
	printf("Tolerancia:");
	scanf("%lf",b);
	printf("Max. Iteraciones:");
	scanf("%lf",x);
	while(i<=x && y==1)
	{
		d=ec(a);
		printf("%d\t%12.8f\n",i,c);
		b=fabs(c-a);
		if (d<b)
		{
			printf("Solucion Aproximada: %12.8f\n",c);
			printf("Iteraciones: %d\n",i);
			printf("Tolerancia: %5.11f\n",b);
			y=0;
		}
		else
		{
			i++;
			a-c;
		}
	}
	
	if (y==1)
	{
		printf("El metodo ha fallado\n");
		printf("Iteraciones: %d\n",i);
	}
}
int main (void)
{
	printf("\t\t\t\t\t\t    Metodo de Biseccion\n");
	printf("\t\t\t\t\t\t Ignacio Marin Irving--2SV2\n\n");
	double a,b,c,d;
	int x;
	printf("Aproximacion:");
	scanf("%lf",a);
	printf("Tolerancia:");
	scanf("%lf",b);
	printf("Max. Iteraciones:");
	scanf("%lf",x);
	raiz (a,b,x);
	system("pause");
	return 0;
}
