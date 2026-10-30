#include <math.h>
#include <stdio.h>

double Integral (double (*f)(double), double from, double to, double step)
{
    double sum = 0;
 
    for(double i = from; i < to; i += step)
    {
        sum +=  (f(i) + f(i + step))/ 2 * step;

        //printf("%lf\t|\t%.10lf\n", i, f(i));
    }
    return sum;
}



int main(){
    printf("This is a programm of intergral calculation\n");

    double a, b, step, res;

    const double pi = 3.14159265359;
        
    res = Integral(log10, 0, 1, 0.0001);

    printf("||RESULT: %lf\n", res);
    return 0;
}

// double Integral (int count, ..., double from, double to, double step)
// {
//     double sum = 0;

//     va_list ap;
//     va_start(ap, count);
 
//     for(double i = from; i < to; i += step)
//     {
//         sum += add(2, num * f(i) * d(i), num * f(i + step) * d(i+1) ) / 2 * step;

//         //printf("%lf\t|\t%.10lf\n", i, f(i));
//     }
//     return sum;
// }

// #define func(...) func_backend((__VA_ARG_COUNT__ > 0) ? __VA_ARGS__ : 1)

// double add(int count, ...)
// {
//     va_list ap;
//     va_start(ap, count);

//     double total = 0;

//     for (int i = 0; i < count; i++) 
//     {
//         total += va_arg(ap, double);

        
//     }

//     va_end(ap); // Освобождение ресурса
//     return total;
// }