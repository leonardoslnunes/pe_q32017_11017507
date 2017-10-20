#include <stdio.h>
#include <math.h>

int entrada()
{
    int x = 0;
    scanf("%d",&x);
    return x;
}

double gauss_legendre(int n)
{
	int x = 1;
	double a1 = 0;
	double b1 = 0;
	double pi = 0;
	double a = 1;
	double b = 1/(sqrt(2));
	double t = 0.25;
	double p = 1;
	double t0 = 0;
	double t1 = 0;

	while(x<=(int)n)
	{
		a1 = (a+b)/2;
		b1 = sqrt(a*b);
		t0 = a-a1;
		t1 = p*t0*t0;
		t = t - t1;
		p = 2*p;
		a = a1;
		b = b1;
		pi=pow((a+b),2)/(4*t);
		++x;
	}
	printf("%.20lf\n",pi);
}

int main()
{
	int n = 0;
	n = entrada();
	gauss_legendre(n);
	return 0;
}
