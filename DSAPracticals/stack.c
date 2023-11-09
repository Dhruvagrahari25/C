#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct student
{
    unsigned int rollNo;
    unsigned int marks;
};

struct stack
{
    unsigned int max;
    unsigned int top;
    struct student* stdarray;
};

int isEmpty(struct stack *s){
    if (s->top==0)
    {
        return 1;
    }
    return 0;
}

int isFull(struct stack *s){
    if (s->top==s->max)
    {
        return 1;
    }
    return 0;
}

void push(struct stack *stack, struct student *stud){
    stack->stdarray[stack->top]=*stud;
    stack->top++;
}

struct student pop(struct stack *stack){
    stack->top--;
    struct student temp = stack->stdarray[stack->top];
    return temp;
}

struct student peek(struct stack *stack){
    return stack->stdarray[stack->top-1];
}

int main(){
    struct student student;
    struct stack stack;
    int choice;
    stack.top=0;
    printf("Enter the size of stack:");
    scanf("%d",&stack.max);
    stack.stdarray = (struct student *)malloc(stack.max*sizeof(struct student));
    while (1)
    {
        printf("*****MENU*****\n1.Push\n2.Pop\n3.Peek\n4.IsEmpty\n5.IsFull\n6.Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            if (isFull(&stack))
            {
                printf("Overflow!\n");
            }
            else
            {
                printf("Enter Student Roll No. & Marks:");
                scanf("%u%u",&student.rollNo,&student.marks);
                push(&stack,&student);
            }
            
            break;

        case 2:
            if (isEmpty(&stack))
            {
                printf("Underflow!\n");
            }
            else
            {
                student = pop(&stack);
                printf("Roll No.:%u Marks:%u\n",student.rollNo,student.marks);
            }
            
            break;

        case 3:
            if (isEmpty(&stack))
            {
                printf("Stack is Empty!...\n");
            }
            else
            {
                student = peek(&stack);
                printf("Roll No.:%u Marks:%u\n",student.rollNo,student.marks);
            }
            break;

        case 4:
            if (isEmpty(&stack))
            {
                printf("Stack is Empty\n");
            }
            else
            {
                printf("Stack is not Empty\n");
            }
            break;
        case 5:
            if (isFull(&stack))
            {
                printf("Stack is Full\n");
            }
            else
            {
                printf("Stack is not Full\n");
            }
            break;
            
        
        default:
            free(stack.stdarray);
            exit(1);
        }
    }
    
}