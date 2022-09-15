#include<stdio.h>
int Linear_Search(int arr[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return i;
        }
    }
    i=-1;
    return i;
}
int main()
{
    int array[10]={10,12,37,42,50,62,71,18,9,101};
    int index=Linear_Search(array,10,71);
    printf("%d\n",array[index]);
    return 0;
}
