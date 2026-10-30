#include <stdio.h>
#include <math.h>


int main(void)
{

    printf("Example of integral calculation for sqrt(x)\n");

    double a, b, d; // верхний и нижние пределы, шаг
    printf("Input a: ");
    scanf(" %f", &a);

    printf("Input b: ");
    scanf(" %f", &b);

    printf("Parts d: ");
    scanf(" %1f", &d);

    double step = (double)(b-a)/(double)d; 
    double integral = 0.0;

    printf("%f\n",step);

    printf("integral\tsqrt\n");
    for(double i = a; i < d; i = i + step)
    { 
        if (i < b)
        {
            integral += ((sqrt(i) + sqrt(i+step))/2)* step;
            printf("%f\t%f\n", integral, sqrt(i));
        // else if (poi >= b)
        // {
        //     integral += ((sqrt(poi + step) + sqrt(b))/2) * step;
        //     break;
        }
    
    
    }
    
    
    printf("Our intergral is: %.2f\n", integral);
    


    return 0;
}