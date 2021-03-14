#include <stdio.h>
void main()
{
    int sp=3,b=3;
    for(int i=1;i<=7;i++)
    {
        for(int j=1;j<=sp;j++)
        {
            printf(" ");
        }
        for(int m=b;m<=3;m++)
        {
            printf("%d",m);
        }
        printf("\n");
        if(i>=4)
        {
        sp++;
        b++;
        }
        else
        {
        sp--;
        b--;
        }
    }
}
