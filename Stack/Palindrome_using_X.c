#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], stack[50];
    int top = -1;
    int i, flag = 1;
    printf("Enter string: ");
    scanf("%s", str);
    while(strlen(str)!='X' || 'x')
    {
        top++;
        stack[top]=str[i];
    }
    for(i=0; i<strlen(stack);i++)
    {
        if(stack[i] != stack[top])
        {
            flag=0;
            break;
        }
        top--;
    }
    
    if(flag == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}