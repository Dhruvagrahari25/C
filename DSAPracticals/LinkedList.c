#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct LinkedList
{
    struct Node *Head;
};

void addFront(struct LinkedList *List, struct Node *NewNode)
{
    NewNode->next = List->Head;
    List->Head = NewNode;
}
void deleteFront(struct LinkedList *List)
{
    struct Node *temp = List->Head;
    List->Head = List->Head->next;
    free(temp);
}
void printList(struct LinkedList *List)
{
    struct Node *temp = List->Head;
    while (temp != NULL)
    {
        printf("%d-->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
void addEnd(struct LinkedList *List, struct Node *NewNode)
{
    struct Node *temp = List->Head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    NewNode->next = NULL;
    temp->next = NewNode;
}
void deleteEnd(struct LinkedList *List)
{
    struct Node *temp = List->Head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    struct Node *temp2 = temp->next;
    temp->next = NULL;
    free(temp2);
}
void addAt(struct LinkedList *List, struct Node *NewNode, int position)
{
    struct Node *temp = List->Head;
    while (temp->next != NULL && position != 1)
    {
        position--;
        temp = temp->next;
    }
    if (position > 1)
    {
        printf("Invalid position!\n");
        free(NewNode);
    }
    else
    {
        NewNode->next = temp->next;
        temp->next = NewNode;
    }
}
void deleteAt(struct LinkedList *List, int position)
{
    struct Node *temp = List->Head;
    while (temp->next != NULL && position != 1)
    {
        position--;
        temp = temp->next;
    }
    if (position > 1)
    {
        printf("Invalid position!\n");
    }
    else
    {
        struct Node *temp2 = temp->next;
        temp->next = temp->next->next;
        free(temp2);
    }
}
int main()
{
    struct LinkedList *List = (struct LinkedList*)malloc(sizeof(struct LinkedList));
    List->Head = NULL;
    struct Node* NewNode = NULL; 
    int choice,position;
    while (1)
    {
        printf("******MENU*****\n1.Add Front\n2.Delete Front\n3.Add End\n4.Delete End\n5.Add at position\n6.Delete at position\n7.Print List\n0.Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            NewNode = (struct Node *)malloc(sizeof(struct Node));
            NewNode->next = NULL;
            printf("Enter data in New Node:");
            scanf("%d", &NewNode->data);
            if (List->Head == NULL)
            {
                List->Head = NewNode;
            }
            else
            {
                addFront(List, NewNode);
            }
            break;

        case 2:
            if (List->Head == NULL)
            {
                printf("List is Empty!\n");
            }
            else
            {
                deleteFront(List);
            }
            break;

        case 3:
            NewNode = (struct Node*)malloc(sizeof(struct Node));
            NewNode->next = NULL;
            printf("Enter data in the new node:");
            scanf("%d", &NewNode->data);
            if (List->Head == NULL)
            {
                List->Head = NewNode;
            }
            else
            {
                addEnd(List, NewNode);
            }
            break;

        case 4:
            if (List->Head == NULL)
            {
                printf("List is Empty!\n");
            }
            else
            {
                if (List->Head->next == NULL)
                {
                    free(List->Head);
                    List->Head = NULL;
                }
                else
                {
                    deleteEnd(List);
                }
            }
            break;

        case 5:
            NewNode = (struct Node *)malloc(sizeof(struct Node));
            NewNode->next = NULL;
            printf("Enter position:");
            scanf("%d", &position);
            position--;
            printf("Enter data:");
            scanf("%d",&NewNode->data);
            addAt(List, NewNode, position);
            break;

        case 6:
            printf("Enter position:");
            scanf("%d", &position);
            position--;
            deleteAt(List, position);
            break;

        case 7:
            printList(List);
            break;

        case 0:
            exit(1);

        default:
            printf("Invalid Choice!\n");
            break;
        }
    }
    return 0;
    
}