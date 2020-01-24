#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double f(double x)
{
	return pow(x,3)+4*pow(x,2)-10;
}
void biseccion(float aa, float bb, float err, int it)
{
	int itm,iter=0;
	double a,b,e,er,test,xa=0,xao;
	if(f(aa)*f(bb)>0)
	printf("No hay raiz en el intervalo\n");
	else
	{
		do
		{
			iter++;
			xao=xa;
			xa=(aa+bb)/2;
			e=fabs((xa-xao)/xa)*100;
			test=f(aa)*f(xa);
			if(test<0)
			bb=xa;
			else if(test>0)
			aa=xa;
			else 
			e=0;
			printf("\nIteraciones: %d\n",iter);
			printf("Raiz: %lf\n",xa);
			printf("Error: %lf\n",e);
		}	
		while(e>err&&iter<itm);
	}
}
void datos()
{
	int it;
	double a,b,er;
	printf("\t\t\t\t\t\tMetodo de Biseccion\n");
	printf("Indica a\n");
	scanf("%lf",&a);
	printf("Indica b\n");
	scanf("%lf",&b);
	printf("Indica el numero de iteraciones maximas\n");
	scanf("%lf",&it);
	printf("Introduce el margen de error\n");
	scanf("%lf",&er);
	biseccion(a,b,er,it);
}
int main (void)
{
	datos();
	system("pause");
	return 0;
}
