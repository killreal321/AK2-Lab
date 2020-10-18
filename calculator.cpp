#include "calculator.h"

int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
	return Add (a, -b);
}

int Calculator::Pow (double a, double b)
{
       return Pow(a, b);
}

int Calculator::Log (double a, double b)
{
       return log(b) / log(a);
}
