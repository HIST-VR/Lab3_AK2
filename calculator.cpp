#include "calculator.h"

int Calculator::Add (double a, double b)
{
<<<<<<< HEAD
    return a + b;
=======
	return a + b + 0.5;
>>>>>>> 4ad40a3... fix truncation error
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}
