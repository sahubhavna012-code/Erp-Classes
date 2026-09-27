#include<stdio.h>
int main()
{
    int n;
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
    int freq[n];
    for(int i=0;i<n;i++)
    {
        freq[i]=-1;
    }
    for(int i=0;i<n;i++)
    {
        int count=1;
        if(freq[i]!=0)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    freq[j]=0;
                }
            }
            freq[i]=count;
        }
    }
    printf("Frequency of each element:\n");
    for(int i=0;i<n;i++)
    {
        if(freq[i]!=0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }
}