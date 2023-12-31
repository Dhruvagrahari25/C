#include <stdio.h>
#include <stdlib.h>

#define max_size 100

struct stack
{
    int top;
    int data[max_size];
};

struct stack* initializeStack(struct stack *stackptr)
{
    stackptr = (struct stack*)malloc(sizeof(struct stack));
    stackptr->top = -1;
    return stackptr;
}

int isEmpty(struct stack *stack)
{
    if (stack->top == -1)
        return 1;
    else
        return 0;
}

int isFull(struct stack *stack)
{
    if ((*stack).top == max_size - 1)
        return 1;
    else
        return 0;
}

void push(struct stack *stack, int data)
{
    if (isFull(stack))
    {
        printf("Stack Overflow!\n");
    }
    else
    {
        stack->data[++stack->top] = data;
    }
}

int pop(struct stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack Underflow!\n");
        return -1;
    }
    else
    {
        printf("Popped Data:%d\n",stack->data[stack->top]);
        stack->top--;
        // return 0;
    }
}

int peek(struct stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty!\n");
        return -1;
    }
    else
    {
        return stack->data[stack->top];
    }
}
// Dhruv Agrahari S11 01 AIDS
void printStack(struct stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is Empty!\n");
    }
    else
    {
        printf("Stack:\n");
        for (int i = stack->top; i >= 0; i--)
        {
            printf("%d\n",stack->data[i]);
        }
    }
}

int main()
{
    system("cls");
    struct stack *stack1 = NULL;
    stack1 = initializeStack(stack1);

    int option = 0;

    // char i[][] = {{"Enter your Choice:\n"}, {"1.Push 2.Pop 3.Peek 4.Print Stack\n"}};

    while (option >= 0)
    {
        printf("Enter your choice:\n");
        printf("---MENU---\n0.Exit\n1.Push\n2.Pop\n3.Peek\n4.Print Stack\n5.Is Empty\n6.Is Full\n\n");
        scanf("%d", &option);

        switch (option)
        {

            case 0:
            exit(0);
        case 1:
            printf("Enter data to be pushed:");
            int data;
            scanf("%d", &data);
            push(stack1, data);
            break;


        case 2:
            pop(stack1);
            break;

        case 3:
            peek(stack1);
            break;

        case 4:
            printStack(stack1);
            break;

        case 5:
            if (isEmpty(stack1))
            {
                printf("Stack is Empty!\n");
            }
            else
            {
                printf("Stack is NOT Empty.\n");
            }
            
            break;

        case 6:
            if (isFull(stack1))
            {
                printf("Stack is Full!\n");
            }
            else
            {
                printf("Stack is NOT Full.\n");
            }
            
            break;

        default:
            printf("Invalid!\n");
        }
    }
    free(stack1);
    return 0;
}
