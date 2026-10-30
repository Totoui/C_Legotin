#include <stdio.h>
#include <math.h>


int main(void)
{
    printf("Example of integral calculation for x^2\n");

    int a, b, d; // верхний и нижние пределы, шаг
    printf("Input a: ");
    scanf(" %d", &a);

    printf("Input b: ");
    scanf(" %d", &b);

    printf("Step d: ");
    scanf(" %d", &d);

    double integral = 0.0;

    for(int i=a; i < b+d; i = i + d)
    {
        if(a+i < b)
            integral += (pow(i, 2) + pow((i+1), 2))/2 * d;
        else if (i>=b)
        {
            integral += (pow(i-d, 2) + pow(b, 2))/2 * d;
            printf("%.1f\t%.2f\n", integral, integral);
            break;
        }

        printf("%.1f\t%f\t%.1f\t%f\n", integral, integral, pow(i, 2), pow(i, 2));
    }


    printf("Our intergral is: %.2f\n", integral);


    return 0; 
}