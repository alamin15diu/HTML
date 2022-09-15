#include<stdio.h>
int main()
{
    int i,j,k, count=0;
    for(i=1; i<=10; i++)
    {
        for(j=1; j<=10; j++)
        {
            for(k=1; k<=10; k++)
            {
                count++;

            }

        }
    }
    printf("%d\n",count);
    return 0;
}
