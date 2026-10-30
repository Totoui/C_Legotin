#include <math.h>
#include <stdio.h>
#include <string.h>




double Integral (double (*f)(double), double from, double to, double step)
{
    double sum = 0;

    for(double i = from; i < to; i += step)
    {
        sum += ((f(i) + f(i + step)) / 2) * step;

        //printf("%lf\t|\t%.10lf\n", i, f(i));
    }
    return sum;
}


int choice1(char*str)
{
    if (strcmp(str, "y") == 0 || strcmp(str, "1") == 0 || strcmp(str, "\n") == 0)
        return 1;
    else if (strcmp(str, "n") == 0 || strcmp(str, "0") == 0)
        return 0;
}


int main(){
    printf("==================================\n==================================\n");
    printf("This is a programm of intergral calculation\n");
    printf("\n**PI = 3.14159;\n**EXP = 2.718281828;\n");
    
    while(1)
    {
        printf("==================================\n==================================\n");
        printf("You want enter function or exit? (y/n): ");

        char c[10];
        scanf("%s", c);

        if (choice1(c) == 0)
            break;

        double a, b, step, res;

        printf("|Enter lower limit a : ");
        scanf("%lf", &a);

        printf("===============================\n");

        printf("|Enter upper limit b : ");
        scanf("%lf", &b);

        printf("===============================\n");

        printf("|Enter step (<1): ");
        scanf("%lf", &step);

        printf("===============================\n");
        printf("You can enter the function:\n");
        printf("  - sinx\n");
        printf("  - cosx\n");
        printf("  - tanx\n");
        printf("  - expx\n");
        printf("  - lnx\n");
        printf("  - sqrtx\n");
        printf("  - lgx\n");
        printf("  - arccosx\n");
        printf("  - arcsinx\n");
        printf("  - arctanx\n");
        printf("  - x\n");

        printf("You want the integral of f(x) = ");

        char fu[10];
        scanf("%s", fu);

        if (strcmp(fu, "sinx") == 0)
            res = Integral(sin, a, b, step);
        else if (strcmp(fu, "cosx") == 0)
            res = Integral(cos, a, b, step);
        else if (strcmp(fu, "tanx") == 0)
            res = Integral(tan, a, b, step);
        else if (strcmp(fu, "expx") == 0)
            res = Integral(exp, a, b, step);
        else if (strcmp(fu, "lnx") == 0)
        {
            if (a = 0 && b > 0)
                res = -b;
            else if (a < 0 || b < 0)
                printf("Error");
            else
                res = Integral(log, a, b, step);
        }
        else if (strcmp(fu, "sqrtx") == 0)
            res = Integral(sqrt, a, b, step);
        else if (strcmp(fu, "lgx") == 0)
        {
            if (a = 0 && b > 0)
                res = (b * log(b) - b) / log(10);
            else if (a < 0 || b < 0)
                printf("Error");
            else
                res = Integral(log, a, b, step);
        }
        else if (strcmp(fu, "arccosx") == 0)
            res = Integral(acos, a, b, step);
        else if (strcmp(fu, "arcsinx") == 0)
            res = Integral(asin, a, b, step);
        else if (strcmp(fu, "arctanx") == 0)
            res = Integral(atan, a, b, step);
        else if (strcmp(fu, "x") == 0)
            res = (b-a)*b / 2;
        else
        {
            printf("ERROR: Unknown function\n");
            continue;
        }


        printf("||RESULT: %lf\n", res);
    }
    return 0;
}