#include<stdio.h>
int Selection_Sort(int A[],int n)
{
    int i,j,index_min,temp,count=0;
    for(i=0; i<1; i++)
    {
        index_min=i;
        for(j=i+1; j<n; j++)
        {
            if(A[j]<A[index_min])
            {
                //printf("%d\n",A[index_min]);
                index_min=j;
            }
            count++;
        }
        if(index_min!=i)
        {
            temp=A[i];
            A[i]=A[index_min];
            A[index_min]=temp;
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
    int array[10]= {10,5,2,8,7};
    int result=Selection_Sort(array,5);
    printf("\n%d\n",result);
    return 0;
}
