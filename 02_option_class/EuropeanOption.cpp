
#include EuropeanOption.hpp
#include <math.h>

// Kernel functions
double EuropeanOption::CallPrice() const
{
	double tmp = sig * sqrt(T);

	double d1 = (log(U/K) + (b+ (sig*sig)*0.5 ) * T )/ tmp;
	double d2 = d1 - tmp;

	return (U * exp((b-r)*T) * N(d1)) - (K * exp(-r * T) * N(d2));
}

double EuropeanOption::PutPrice() const 
{
	double tmp = sig * sqrt(T);

	double d1 = (log(U/K) + (b+ (sig*sig)*0.5 ) * T )/ tmp;
	double d2 = d1 - tmp;

	return (K * exp(-r * T) * N(-d2)) - (U * exp((b-r)*T) * N(-d1));
}


double EuropeanOption::CallDelta() const
{
	
}