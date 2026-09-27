#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter values: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("After entering values: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
        {
            count++;
        }
    }
    printf("The number of peaks in the array is: %d",count);
    
    return 0;
}