#include <stdio.h>
int main()
{
int sp=0,n=9,m=5;
for(int i=1;i<=9;i++)
{
    for(int k=1;k<=sp;k++)
    {
        if(i==5);
        else
        printf(" ");
    }
    for(int j=1;j<=n;j++)
    {
        if(i==5)
        {
        printf("* ");
        }
      else if(j==1||j==n||j==m)
      printf("*");
      else
      printf(" ");
    }
    if(i==4)
    n=8;
    if(i==5)
    n=1;
    if(i>=5)
    {
        sp--;
        n+=2;
        m++;
    }
    else
    {
        sp++;
        n-=2;
       m--;
    }
    printf("\n");
}
    return 0;
}
