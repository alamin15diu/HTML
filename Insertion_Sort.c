#include<stdio.h>
int Insertion_Sort(int A[],int n)
{
    int i,j,count=0,item;
    for(i=1; i<n; i++)
    {
        item=A[i];
        j=i-1;
        while(j>=0 && A[j]>item)
        {
            A[j+1]=A[j];
            j=j-1;
            count++;
        }
        A[j+1]=item;
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",A[i]);
    }
    return count;

}
int main()
{
    int array[10]={10,9,8,7,6,5,4,3,2,1};
    int result=Insertion_Sort(array,10);
    printf("\n%d\n",result);
    return 0;
}

