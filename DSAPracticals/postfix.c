#include<stdio.h>

int stack[100];
int top=-1;

void push(int x){
    stack[++top]=x;
}
int pop(){
    return stack[top--];
}

void main(){
    char exp[100];
    char *e;
    int n1,n2,n3,num;

    printf("Enter postfix expression:\n");
    scanf("%s",exp);

    e=exp;

    while (*e!='\0')
    {
        if (isdigit(*e)==1)
        {
            num = *e-48;
            push(num);
        }
        else
        {
            n1 = pop();
            n2 = pop();
            switch (*e)
            {
            case '+':
                n3 = n2+n1;
                break;
            case '-':
                n3 = n2-n1;
                break;
            case '*':
                n3 = n2*n1;
                break;
            
            case '/':
                n3 = n2/n1;
                break;
            case '%':
                n3 = n2%n1;
                break;
            case '^':
                n3 =pow(n2,n1);
                break;
            default:
                break;
            }
            push(n3);
        }
        e++;
    }
    printf("Result:%d\n",pop());
    
}