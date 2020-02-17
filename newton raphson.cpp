#include <iostream>
#include <iomanip>
#include <math.h>
#define prec 10
#define max_it 50
#define inter 10
#define e 2.718281828
using namespace std;

void tab(double a, double b, int in);
double f(double x);
double f_der(double x);

int main()
{
	double a,b,t,x0,x1,er;	
	int it;
	bool con = true;
	cout<<setprecision(prec);
	cout<<"\nCalculo de las raices de una funcion aplicando el metodo de Newton-Raphson\n";
	cout<<"\nIngrese el intervalo inicial [a,b]:" << endl;
	cout<<"\na = ";
	cin>>a;
	cout<<"b = ";
	cin>>b;
	tab(a,b,inter);
	cout<<"\nEscoja el punto inicial adecuado:   x0 = ";
	cin>>x0;
	cout<<"Tolerancia = ";
	cin>>t;
	cout<<"\nAproximacion inicial:\n";
	cout<<"x0="<<x0<<"\n"
		<<"f(x0)="<<f(x0)<<"\n"
		<<"f'(x0)="<<f_der(x0)<<endl;
	it=1;
	do {
	
		if (it> max_it) 
		{
			con=false;
			break;
		
		} 
		else 
		{
			x1 = x0 - f(x0) / f_der(x0); 
			er= fabs(x1 - x0);
			cout << "\nIteracion #" << it << endl;
			cout << "x" << it << " = " << x1 << "\n"
			  << "f(x" << it << ") = " << f(x1) << "\n"
			  << "f'(x" << it << ") = " << f_der(x1) << "\n"
			  << "error = " << er << endl;
			if (er<=t) 
			{ 
				con = true;
				break;
			} else {
				x0 = x1;
				it++;
			}
		}
	
	} while (1);
	if (con) 
	{
		cout << "\n\nPara una tolerancia de " << t << " la raiz de f es: " << x1 << endl;
	
	} 
	else 
	{
		cout << "\n\nSe sobrepasó la máxima cantidad de iteraciones permitidas" << endl;
	}
	cin.get();
	cin.get();
	return 0;
}

void tab(double a, double b, int in)
{
	int p= in+1;
	double an= (b - a) /in;
	cout << "\n\tx\t\tf(x) " << endl;
	for (int i = 0; i < p; i++)
	{
		cout << "\t" << a << "\t\t" << f(a) << endl;
		a = a + an;
	}
}

double f(double x)
{
	return exp(-x)-x;
}

double f_der(double x)
{
	return -exp(-x)-1;
}
