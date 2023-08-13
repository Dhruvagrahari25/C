#include<stdio.h>
#include<stdlib.h>

struct stackNode
{
    int data;
    struct stackNode* Next;
};

struct stack
{
    struct stackNode* headTop;
};

void AddFront_Push(struct stack* HeadPtr){
    struct stackNode* StackPtr = (struct stackNode*)malloc(sizeof(struct stackNode));
    StackPtr->Next=NULL;
    printf("Enter Data:");
    scanf("%d",&StackPtr->data);
    StackPtr->Next = HeadPtr->headTop;
    HeadPtr->headTop = StackPtr;
}

void DeleteFront_Pop(struct stackNode* stackPtr, struct stack* headPtr){
    struct stackNode* tempPtr = headPtr->headTop;
    headPtr->headTop=stackPtr->Next;
    free(tempPtr);
}

void traverse_Peek(struct stack* headPtr){
    struct stackNode* stackPtr;
    printf("Inside peek");
    if (headPtr->headTop==NULL)
    {
        printf("List is Empty!");
    }
    printf("out of if\n");
    do
    {
        printf("%d\n",stackPtr->data);
        stackPtr=stackPtr->Next;
    } while (stackPtr!=NULL);
    printf("out of do while loop\n");
}

int main(){
    system("cls");
    //struct stackNode* firstNode= malloc(sizeof(struct stackNode));
    struct stack* headptr = NULL;
    AddFront_Push(headptr);
    printf("addfront done!\n");
    traverse_Peek(headptr);
    return 0;
}