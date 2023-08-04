#include <stdio.h>
#include<stdlib.h>

#define max_size 100

struct stack{
    int top;
    int data[max_size];
};

void initializeStack(struct stack* stack){
    (*stack).top=-1;
}

int isEmpty(struct stack* stack){
    if((*stack).top==-1)
    return 1;
    else
    return 0;
}

int isFull(struct stack* stack){
    if((*stack).top == max_size - 1)
    return 1;
    else
    return 0;
}

void push(struct stack* stack, int data){
    if (isFull(stack)){
        printf("Cannot puch data! Stack overflow.");
    }
    else{
        (*stack).top++;
        (*stack).data[stack->top]=data;
    }
}

int pop(struct stack* stack){
    if (isEmpty(stack)){
        printf("Cannot pop! Stack underflow.");
        return -1;
    }
    else{
        int poppedData = (*stack).data[(*stack).top];
        stack->top--;
        return poppedData;
    }
}

int peek(struct stack* stack){
    if (isEmpty(stack)){
        printf("Cannot peek! Stack is empty.");
        return -1;
    }
    else{
        return (*stack).data[(*stack).top];
    }
}

void printStack(struct stack* stack){
    if (isEmpty(stack)){
        printf("Stack is Empty!");
    }
    else{
        printf("Stack:\n");
        for (int i = stack->top; i >=0; i--)
        {
            printf("%d", stack->data[i]);
        }
        
    }
    
}

// int main(){
//     struct stack stack;
//     initializeStack(&stack);

//     push(&stack, 10);
//     push(&stack,20);
//     push(&stack,30);

//     printStack(&stack);
    
//     printf("Popped Data:%d\n",pop(&stack));

//     printf("Top Data:%d\n",peek(&stack));

//     return 0;
// }
