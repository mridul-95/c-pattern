#include <stdio.h>
void main()
{
    int m=3,g=16,p=2,z=6;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=g;j++)
        {
            if(j==1&&i!=5)
            {
            printf(" ");
            continue;
            }
            if(j==m)
            {
                for(int k=1;k<=p;k++)
                {
                    if(k==1||k==p)
                printf("0 ");
                else
                printf(" ");
                }
                m+=z;
            }
           else
           printf(" ");
          
        }
        printf("\n");
        if(i!=5)
        m=2;
        p+=2;
        g-=6;
        z-=3;
    }
}
