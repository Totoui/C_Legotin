#include <stdio.h>
#include <math.h>

int main()
{
    //printf("=========================================================================\n");
    printf("Example of integral calculation for sqrt(x). We use only Natural numbers\n");

    int a, b; // верхний и нижние пределы
    printf("Input a: ");
    scanf(" %d", &a);

    printf("Input b: ");
    scanf(" %d", &b);

    double integral = 0.0;
    float n, m;
    n = sqrt(a);
    m = sqrt(b);

    printf("n=%f\nm=%f\n", n, m);

    for (int i=a; i < b; i++)
    {
        // if (sqrt(i) <= sqrt(i+1))
            integral += (sqrt(i) + sqrt(i+1)) / 2;
        // else
        //     integral += sqrt(i);
            
        printf("%lf\t%lf\n", integral, sqrt(i+1));
    }
   
    printf("Our intergral is: %lf\n", integral);


    return 0; 
}