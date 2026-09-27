#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int n;
    printf("Enter the target value: ");
    scanf("%d",&n);

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i]+arr[j]==n)
            {
                printf("arr[%d]+",j);
                printf("arr[%d]",i);
                printf("\n");
            }
        }
    }
    return 0;
}