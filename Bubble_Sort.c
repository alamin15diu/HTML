#include<stdio.h>
int Bubble_Sort(int A[],int n)
{
    int i,j,temp,count=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(A[j] > A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;

            }
            count++;
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",A[i]);
    }
    return count;
}
int main()
{
    int array[10]= {3,5,1,4,2,6,7,8,9,10};
    int result=Bubble_Sort(array,10);
     printf("\n%d\n",result);
    return 0;
}

