#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
double power(double base, double exponent)
{
    long long result = 1;
    while (exponent != 0)
    	{
        	result *= base;
       	 	--exponent;
   		}
	return result;
}

double fac(double number)
{
	int i;
	int product=1 ;
	for(i=1;i<=number;i++)
	{
		product=product*i;
	}
	return product;
}

double pof(double x, double n)
{
double result=0;
result= power(x,n)/fac(n);
return result;

}

double sin(double x)
{
	int result=0;
	result= x- pof(x,3)+pof(x,5)-pof(x,7)+pof(x,9);
	return result;
}



int main()
{
	double a;
	double sonuc=0;
printf("Please enter integer for sin.");
scanf("%lf", &a);
sonuc=sin(a);
printf("Sin(%lf) = %lf", a, sonuc);

}
