#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *NextNodePtr;
};

struct Sll
{
    struct Node *Head;
};

void AddFront(struct Sll *ListPtr)
{
    struct Node *NodePtr = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter Data:");
    scanf("%d", &(*NodePtr).data);
    NodePtr->NextNodePtr = ListPtr->Head;
    ListPtr->Head = NodePtr;
}

void Peek(struct Sll *ListPtr)
{
    struct Node *temp = ListPtr->Head;
    if (temp == NULL)
    {
        printf("The list is Empty!\n");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->NextNodePtr;
        }
    }
}

void AddEnd(struct Sll* listptr,struct Node* NodePtr){
    Peek(listptr);
    
}

int main()
{
    system("cls");
    struct Sll list1;
    list1.Head = NULL;
    struct Sll *listptr = &list1;
    int option;
    while (1)
    {
        printf("1.AddFront\t2.Peek\t3.Exit :");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            AddFront(listptr);
            break;

        case 2:
            // AddEnd(listptr);
            Peek(listptr);
            break;

        case 3:
            exit(0);

        default:
            break;
        }
    }

    return 0;
}