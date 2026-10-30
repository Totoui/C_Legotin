#include <stdio.h>
#include <math.h>
#include <string.h>

#define LETT "abcdefgh"
#define king "king"
#define bishop "bishop"
#define queen "queen" 
#define rook "rook" 
#define knight "knight"
 

bool king_f(int let, int ch)
{
    if(abs(let) <= 1 && abs(ch) <= 1)
        return true;
    else return false;
}

bool rook_f(int let, int ch)
{
    if(let == 0 || ch == 0)
      return true;
    else return false;
}

bool knight_f(int let, int ch)
{
    if((abs(let) == 1 && abs(ch) == 2)||(abs(let) == 2 && abs(ch) == 1))
      return true;
    else return false;
}

bool bishop_f(int let, int ch)
{
    if(abs(let) == abs(ch))
      return true;
    else return false;
}

bool queen_f(int let, int ch)
{
    if(bishop_f(let, ch) == true || rook_f(let, ch) == true)
        return true;
}

void check(bool num)
{
    if(num == true)
        printf("YES\n");
    else
        printf("NO\n");
}



int main()
{
    char k1[3], k2[3], fig[7], a[5];
    int g[3], h[3];

    printf("=====Chess=====\n");
    printf("You can use king, bishop, queen, rook, knight.\nAnd the square from which—and to which—the chess pieces will move.\n");
    printf("Programm says chess figure might move in this place or not.\n");
    while(1)
    {
        printf("Start(Y/n):");
        scanf("%s", a);
        
        if (strcmp(a, "n") == 0 || strcmp(a, "0") == 0)
            return 0;


        printf("INPUT FIGURE:");

        scanf("%5s", fig);


        printf("INPUT K1:");
        scanf("%2s", k1);

        printf("INPUT K2:");
        scanf("%2s", k2);



        for(int i = 0; i<8; i++) //this is ours letters
        {
            if(k1[0] == LETT[i])
            {
                g[0] = i+1;
            }
            if(k2[0] == LETT[i])
            {
                g[1] = i+1;
            }
        }

        h[0] = k1[1] - '0'; // this is ours nums
        h[1] = k2[1] - '0';

  
        if(strcmp(fig, knight) == 0)
            check(knight_f(g[0]-g[1], h[0]-h[1]));
        else if(strcmp(fig, bishop) == 0)
            check(bishop_f(g[0]-g[1], h[0]-h[1]));
        else if(strcmp(fig, queen) == 0)
            check(queen_f(g[0]-g[1], h[0]-h[1]));
        else if(strcmp(fig, rook) == 0)
            check(rook_f(g[0]-g[1], h[0]-h[1]));
        else if (strcmp(fig, king) == 0)
            check(king_f(g[0]-g[1], h[0]-h[1]));
        else printf("Error\n");
    }
    
    return 0;
}