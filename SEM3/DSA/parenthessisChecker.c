#include <stdio.h>
#include <string.h>
#define MAX 30

struct Stack
{
    char arr[MAX];
    int top;
} stack;

int main()
{
    char expression[MAX];
    stack.top = -1;
    printf("\nEnter Expression: ");
    scanf("%s", &expression);
    for (int i = 0; i < strlen(expression); i++)
    {
        if (expression[i] == '(' || expression[i] == '{' || expression[i] == '[')
        {
            stack.arr[++stack.top] = expression[i];
            continue;
        }
        else if (expression[i] == ')' || expression[i] == '}' || expression[i] == ']')
        {

            if(stack.top==-1){
                stack.top++;
            }
            if (expression[i] == ')')
            {
                if (stack.arr[stack.top] == '(')
                {
                    stack.top--;
                }
                else
                {
                    printf("\nUNBALANCED EXPRESSION\n");
                    break;
                }
            }
            
            if (expression[i] == '}')
            {
                if (stack.arr[stack.top] == '{')
                {
                    stack.top--;
                }
                else
                {
                    printf("\nUNBALANCED EXPRESSION\n");
                    break;
                }
            }
            if (expression[i] == ']')
            {
                if (stack.arr[stack.top] == '[')
                {
                    stack.top--;
                }
                else
                {
                    printf("\nUNBALANCED EXPRESSION\n");
                    break;
                }
            }
        }
    }
    if (stack.top == -1)
    {
        printf("\nBALANCED EXPRESSION\n");
    }
  
    return 0;
}