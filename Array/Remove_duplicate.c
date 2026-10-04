#include<stdio.h>

int main()
{
    int arr[11]={1,1,1,2,2,3,3,4,4,4,4};
    int officer=0;
    int cm=1;
    int unique=0;

    while(cm<len(arr))
    {
        if(arr[cm]==arr[cm-1])
        {
            cm++;
            continue;
        }
        arr[officer+1]=arr[cm];
        cm++;
        unique++;
        officer++;
    }
    for(int i=0;i<unique;i++)
    {
        printf("%d ",&unique);
    }
}