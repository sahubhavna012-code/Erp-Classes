#include<stdio.h>
#include<string.h>
#define MAX 5

int Front=-1;
int Rear=-1;

int main()
{
    char str[MAX],queue[MAX];
    printf("Enter string: ");
    scanf("%s", str);
    // enqueue = insert
    for(int i=0;i<strlen(str);i++)
    {
        queue[Rear]=str[i];
        if(queue[Rear]!=0)
        {
            Front++;
        }
        Rear++;
    }
    //dequeue = delete
    return 0;
}