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

void InsertAtFront(struct list *listptr, struct node *nodeptr)
{
    nodeptr->next = listptr->head;
    listptr->head = nodeptr;
}

void Traverse(struct list *listptr, struct node *nodeptr)
{
    nodeptr = listptr->head;
    do
    {
        printf("%d\n", nodeptr->data);
        nodeptr = nodeptr->next;
    } while (nodeptr != NULL);
}

void InsertAtEnd(struct node *nodeptr, int data)
{
    struct node* NewNode = (struct node*)malloc(sizeof(struct node));
    NewNode->next = NULL;
    
    // Traversing the list to find the last node
    while (nodeptr->next != NULL)
    {
        nodeptr = nodeptr->next;
    }

    // Adding the new node to the end of the list
    nodeptr->next = NewNode;
    
    // Assigning data to the new node
    NewNode->data = data;
}

void InsertAtX(struct node* Nodeptr, int count, int Data){
    struct node* NewNode = (struct node*)malloc(sizeof(struct node));
    struct node* temp = Nodeptr;
    
    for (int i = 1; i < count-1; i++)
    {
        temp = temp->next;
    }
    NewNode->next = temp->next; 
    temp->next = NewNode;
    NewNode->data = Data;
}

void DeleteAtX(struct node* Nodeptr, int count){
    struct node* temp = Nodeptr;
    for (int i = 0; i < count; i++)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
}

int main()
{
    system("cls");

    struct node *nodeptr2 = NULL;
    struct list *listptr2 = NULL;

    nodeptr2 = (struct node *)malloc(sizeof(struct node));
    listptr2 = (struct list *)malloc(sizeof(struct list));
    printf("Enter Data to be inserted at the begining:");
    scanf("%d", &(*nodeptr2).data);
    listptr2->head = NULL;
    (*nodeptr2).next = NULL;
    if (listptr2->head == NULL)
    {
        printf("List is Empty! Adding the first node.\n");
        listptr2->head = nodeptr2;
    }
    else
    {
        InsertAtFront(listptr2, nodeptr2);
    }

    int DataAtEnd;
    printf("Enter data to be inserted at End:");
    scanf("%d",&DataAtEnd);
    InsertAtEnd(nodeptr2,DataAtEnd);

    printf("Enter data to be inserted in the middle:");
    int DataAtX;
    scanf("%d",&DataAtX);
    InsertAtX(nodeptr2, 2, DataAtX);

    printf("Enter the position of the node to be deleted:");
    int count = 0;
    scanf("%d",&count);
    DeleteAtX(nodeptr2,count);

    if (listptr2->head == NULL)
    {
        printf("List is Empty\n");
    }
    else
    {
        Traverse(listptr2, nodeptr2);
    }
    return 0;
}
