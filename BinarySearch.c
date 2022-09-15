#include<stdio.h>

int Binary_Search(int A[],int n,int x)
{
    int left,right,mid;
    left=0;
    right=n-1;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(A[mid]==x)
        {
            return mid;
        }
        if(A[mid]<x)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }

    return -1;
}
int main()
{
    int array[20]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int index=Binary_Search(array,20,41);
    if(index==-1)
    {
        printf("Not Found");
    }
    else
    {
        printf("Found");

    }
    return 0;
}
