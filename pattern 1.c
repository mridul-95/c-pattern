#include <stdio.h>
void main()
{
    int f=2,c=1;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%2==0)
            {
            printf("%d ",f);
            f+=2;
            }
            else
            {
                printf("%d ",c);
                c+=2;
            }
        }
        printf("\n");
        f=2;
        c=1;
    }
}
