#include <stdio.h>
void main()
{
    int d=3,c=0;
    for(int i=1;i<=7;i++)
    {
        for(int j=1;j<=d;j++)
        {
            if(j==d||i==4)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
        if(d>5)
        c=1;
        if(c==1)
        d--;
        else
        d++;
        
    }
}
