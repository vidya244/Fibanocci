#include <stdio.h>
double fib(n){
		if(n==0)
			return 1;
		
		if(n==1)
			return  0.5;
		
		else
			return fib(n-1)+fib(n-2);
		
		
	}

	double fib2(i){
		if(i==0)
			return 1;
		if(i==1)
			return 0.5;
		else
			return fib(i-1)/2+fib(i-1);
	}

int main(int argc, char const *argv[])
{
	double x = fib(2);
	double y = fib2(2);

	printf("%f\n %f\n",x,y );
	return 0;
}