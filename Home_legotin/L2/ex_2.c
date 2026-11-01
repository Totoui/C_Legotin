#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char k[10000] = ""; // <- Здесь входная строка

    printf("Input string(under 10000 characters) is:");
    scanf("%9999[^\n]s", k);
    unsigned num =0, stri =0, i1 =0 , i2 =0, len;
    char concl;

    len = sizeof(k)/sizeof(k[0]);
    
    // printf("This is last simbol_%c_<-\n", k[(sizeof(k)/sizeof(k[0]))-2]);
    for(int i = 0; i < len; i++)
    {
        concl = 0;
  
        if((k[i] == ' ' || k[i] == '\0' || k[i] == '\t') && i1 < i2+1)
        {
            i1 = i2;
            i2 = i+1;

            // printf("%d\t%d\n", i1, i2);
            for(int n = i1+1; n <i2-1; n++)
            {
                if(isalpha(k[n]) == 0)
                {
                 concl = 1;
                 break;
                }
            }
            if(concl != 1 && i1+1 != i2)
                stri +=1;

            for(int n = i1+1; n <i2-1; n++)
            {
                if(isdigit(k[n]) == 0)
                {
                 concl = 0;
                 break;
                }
            }
            if(concl != 0 && i1+1 != i2)
                num +=1;

        }
    }
    
    printf("Our number of string is %u\nOur number of numbers is %u", stri, num);
    return 0;
}