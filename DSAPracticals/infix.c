// #include <stdio.h>
// #include <ctype.h> // for isalnum()

// #define SIZE 100

// char stack[SIZE];
// int top = -1;

// void push(char item) {
//     if(top >= SIZE-1) {
//         printf("\nStack Overflow.");
//     } else {
//         stack[++top] = item;
//     }
// }

// char pop() {
//     char item ;

//     if(top <0) {
//         printf("stack under flow: invalid infix expression");
//         getchar();
//         exit(1);
//     } else {
//         item = stack[top--];
//         return(item);
//     }
// }

// int is_operator(char symbol) {
//     if(symbol == '^' || symbol == '*' || symbol == '/' || symbol == '+' || symbol =='-') {
//         return 1;
//     } else {
//         return 0;
//     }
// }

// int precedence(char symbol) {
//     if(symbol == '^') {
//         return(3);
//     } else if(symbol == '*' || symbol == '/') {
//         return(2);
//     } else if(symbol == '+' || symbol == '-') {
//         return(1);
//     } else {
//         return(0);
//     }
// }

// void InfixToPostfix(char infix_exp[], char postfix_exp[]) {
//     int i, j;
//     char item;
//     char x;

//     push('(');                               
//     strcat(infix_exp,")");                  

//     i=0;
//     j=0;
//     item=infix_exp[i];         

//     while(item != '\0') { 
//         if(item == '(') {
//             push(item);
//         } else if( isalnum(item)) {
//             postfix_exp[j] = item;             
//             j++;
//         } else if(is_operator(item) == 1) { 
//             x=pop();
//             while(is_operator(x) == 1 && precedence(x)>= precedence(item)) {
//                 postfix_exp[j] = x;                  
//                 j++;
//                 x = pop();                       
//             }
//             push(x);
//             push(item);                 
//         } else if(item == ')') {
//             x = pop();                   
//             while(x != '(') {
//                 postfix_exp[j] = x;
//                 j++;
//                 x = pop();
//             }
//         } else { 
//             printf("\nInvalid infix Expression.\n");        
//             getchar();
//             exit(1);
//         }
//         i++;


//         item = infix_exp[i]; 
//     } 
//     if(top>0) {
//         printf("\nInvalid infix Expression.\n");        
//         getchar();
//         exit(1);
//     }
//     // if(top>0) {
//     //     printf("\nInvalid infix Expression.\n");        
//     //     getchar();
//     //     exit(1);
//     // }

//     postfix_exp[j] = '\0'; 
// }

// int main() {
//     char infix[SIZE], postfix[SIZE];        

//     printf("\nEnter Infix expression : ");
//     gets(infix);

//     InfixToPostfix(infix,postfix);                   

//     printf("Postfix Expression: ");
//     puts(postfix);                     

//     return 0;
// }
#include <stdio.h>
#include<ctype.h>

char stack[100];
int top=-1;
void push(char x){
    stack[++top] = x;
}

char pop(){
    if (top==-1)
    {
        return -1;
    }
    else
    {
        return stack[top--];
    }
}

int isOperator(char x){
    if (x=='+' || x=='-' || x=='*' || x=='/' || x=='%' || x=='^')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int priority(char x){
    if (x=='+' || x=='-')
    {
        return 1;
    }
    else if (x=='*' || x=='/')
    {
        return 2;
    }
    else if (x=='^' || x=='%')
    {
        return 3;
    }
    else
    {
        return 0;
    }
}

void main(){
    char *e,x;
    char exp[100];

    printf("Enter infix Expression:\n");
    scanf("%s",exp);

    e=exp;

    while (*e!='\0')
    {
        if (isalnum(*e)==1 || *e>='a' && *e<='z' || *e>='0' && *e <='9')
        {
            printf("%c",*e);
        }
        else if (*e=='(')
        {
            push(*e);
        }
        else if (*e==')')
        {
            while ((x=pop())!='(')
            {
                printf("%c",x);
            }
        }
        else if (isOperator(*e)==1)
        {
            while (priority(stack[top])>priority(*e))
            {
                printf("%c",pop());
            }
            push(*e);
        }
        e++;
    }
    while (top!=-1)
    {
        printf("%c",pop());
    }
    
    
}