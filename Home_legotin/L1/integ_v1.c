#include <math.h>
#include <stdio.h>

double Integral (double (*f)(double), double from, double to, double step)
{
    double sum = 0;
 
    if (to < from)
    {
	for(double i = to; i < from; i += step)
        {
            sum +=  -(f(i) + f(i + step))/ 2;

        //printf("%lf\t|\t%.10lf\n", i, f(i));
        }
    }

    else
    {
    	for(double i = from; i < to; i += step)
    	{
       		sum +=  (f(i) + f(i + step))/ 2;

        //printf("%lf\t|\t%.10lf\n", i, f(i));
    	}
    }
    return sum * step;
}



int main()
{
    printf("This is a programm of intergral calculation\n");

    double a, b, step, res;

    const double PI = 3.14159265359;
    const double EXP = 3.14159265359;
    
    res = Integral(exp, -1, EXP, 0.0001);

    printf("||RESULT: %lf\n", res);
    return 0;
}