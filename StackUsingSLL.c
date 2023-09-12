#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct list
{
    struct node *head;
};

// Function to initialize an empty list
void InitializeStack(struct list *listPtr)
{
    listPtr->head = NULL;
}

void Push(struct list *listptr, int data)
{
    struct node *NewNode = (struct node *)malloc(sizeof(struct node));
    if (NewNode == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    NewNode->data = data;
    NewNode->next = listptr->head;
    listptr->head = NewNode;
}

void Pop(struct list *ListPtr)
{
    if (ListPtr->head == NULL)
    {
        printf("Underflow!\n");
    }
    else
    {
        struct node *Temp = ListPtr->head;
        ListPtr->head = ListPtr->head->next;
        printf("Popped data:%d\n", Temp->data);
        free(Temp);
    }
}

// void DeleteEnd(struct list *ListPtr)
// {
//     struct node *temp = ListPtr->head;
//     while (temp->next->next != NULL)
//     {
//         temp = temp->next;
//     }
//     printf("Delete data:%d\n", temp->next->data);
//     free(temp->next);
//     temp->next = NULL;
// }

// void InsertAtEnd(struct list *listPtr, int data)
// {
//     struct node *NewNode = (struct node *)malloc(sizeof(struct node));
//     if (NewNode == NULL)
//     {
//         printf("Memory allocation failed.\n");
//         exit(1);
//     }
//     NewNode->data = data;
//     NewNode->next = NULL;

//     if (listPtr->head == NULL)
//     {
//         listPtr->head = NewNode;
//         return;
//     }
//     // DHRUV AGRAHARI S11 01 AIDS
//     struct node *temp = listPtr->head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = NewNode;
// }

// void InsertAtX(struct list *ListPtr, int count, int Data)
// {
//     struct node *NewNode = (struct node *)malloc(sizeof(struct node));
//     if (NewNode == NULL)
//     {
//         printf("Memory allocation failed.\n");
//         exit(1);
//     }

//     struct node *temp = ListPtr->head;

//     if (count <= 0)
//     {
//         printf("Invalid Position.\n");
//         free(NewNode);
//         return;
//     }
//     else
//     {

//         for (int i = 0; i < count; i++)
//         {
//             temp = temp->next;
//             if (temp == NULL)
//             {
//                 printf("Invalid position.\n");
//                 free(NewNode);
//                 return;
//             }
//         }
//     }

//     NewNode->next = temp->next;
//     temp->next = NewNode;
//     NewNode->data = Data;
// }

// void DeleteAtX(struct list *ListPtr, int count)
// {
//     struct node *temp = ListPtr->head;

//     if (count <= 0)
//     {
//         printf("Invalid Position.\n");
//         return;
//     }
//     else
//     {

//         for (int i = 0; i < count - 1; i++)
//         {
//             temp = temp->next;
//             if (temp == NULL || temp->next == NULL)
//             {
//                 printf("Invalid position.\n");
//                 return;
//             }
//         }
//     }

//     struct node *temp2 = temp->next;
//     temp->next = temp->next->next;
//     free(temp2);
// }

void PrintStack(struct list *ListPtr)
{
    if (ListPtr->head == NULL)
    {
        printf("Stack is Empty!\n");
    }
    else
    {
        struct node *temp = ListPtr->head;

        printf("Stack:\n");
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
    // printf(" NULL\n");
}

int main()
{
    system("cls");
    struct list Stack;
    InitializeStack(&Stack);

    int choice, data;
    // int position;

    while (1)
    {
        printf("----MENU----\n1. Push\n2. Pop\n3. Peek\n4. Print Stack\n0. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            printf("Enter data to Push: ");
            scanf("%d", &data);
            Push(&Stack, data);
            break;
        case 2:
            if (Stack.head == NULL)
            {
                printf("Underflow!\n");
            }
            else
            {
                Pop(&Stack);
            }
            break;

        case 3:
            if (Stack.head == NULL)
            {
                printf("Stack is Empty!\n");
            }
            else
            {
                printf("Top = %d\n", Stack.head->data);
            }
            break;
        case 4:
            PrintStack(&Stack);
            break;

        case 5:
            if (Stack.head == NULL)
            {
                printf("Stack is Empty!\n");
            }
            else
            {
                printf("Stack is not Empty!\n");
            }

        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
