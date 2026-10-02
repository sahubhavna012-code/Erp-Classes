#include<stdio.h>
int main()
{
    int arr[10]={1,1,1,2,2,3,3,3,4,4};
    int high=0;
    int unique=1;
    int i=1;
    while(i<10)
    {
        if(arr[i]==arr[i-1])
        {
            i++;
            continue;
        }
        arr[high+1]=arr[i];
        high++;
        i++;
        unique++;
    }
    for(int i=0;i<unique;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}