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
void InitializeList(struct list *listPtr)
{
    listPtr->head = NULL;
}

void InsertAtFront(struct list *listptr, int data)
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

void DeleteFront(struct list *ListPtr)
{
    struct node *Temp = ListPtr->head;
    ListPtr->head = ListPtr->head->next;
    printf("Deleted data:%d\n", Temp->data);
    free(Temp);
}

void DeleteEnd(struct list *ListPtr)
{
    struct node *temp = ListPtr->head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    printf("Delete data:%d\n", temp->next->data);
    free(temp->next);
    temp->next = NULL;
}

void InsertAtEnd(struct list *listPtr, int data)
{
    struct node *NewNode = (struct node *)malloc(sizeof(struct node));
    if (NewNode == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    NewNode->data = data;
    NewNode->next = NULL;

    if (listPtr->head == NULL)
    {
        listPtr->head = NewNode;
        return;
    }
    // DHRUV AGRAHARI S11 01 AIDS
    struct node *temp = listPtr->head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = NewNode;
}

void InsertAtX(struct list *ListPtr, int count, int Data)
{
    struct node *NewNode = (struct node *)malloc(sizeof(struct node));
    if (NewNode == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    struct node *temp = ListPtr->head;

    if (count <= 0)
    {
        printf("Invalid Position.\n");
        free(NewNode);
        return;
    }
    else
    {

        for (int i = 0; i < count; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                printf("Invalid position.\n");
                free(NewNode);
                return;
            }
        }
    }

    NewNode->next = temp->next;
    temp->next = NewNode;
    NewNode->data = Data;
}

void DeleteAtX(struct list *ListPtr, int count)
{
    struct node *temp = ListPtr->head;

    if (count <= 0)
    {
        printf("Invalid Position.\n");
        return;
    }
    else
    {

        for (int i = 0; i < count - 1; i++)
        {
            temp = temp->next;
            if (temp == NULL || temp->next == NULL)
            {
                printf("Invalid position.\n");
                return;
            }
        }
    }

    struct node *temp2 = temp->next;
    temp->next = temp->next->next;
    free(temp2);
}

void PrintList(struct list *ListPtr)
{
    struct node *temp = ListPtr->head;

    printf("List: ");
    while (temp != NULL)
    {
        printf("%d--> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    system("cls");
    struct list myList;
    InitializeList(&myList);

    int choice, data, position;

    while (1)
    {
        printf("----MENU----\n1. Insert at Front\n2. Insert at End\n3. Insert at Position\n4. Delete at Position\n5. Print List\n6. DeleteFront\n7. DeleteEnd\n0. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            printf("Enter data to insert at front: ");
            scanf("%d", &data);
            InsertAtFront(&myList, data);
            break;
        case 2:
            printf("Enter data to insert at end: ");
            scanf("%d", &data);
            InsertAtEnd(&myList, data);
            break;
        case 3:
            printf("Enter position and data to insert: ");
            scanf("%d %d", &position, &data);
            InsertAtX(&myList, position, data);
            break;
        case 4:
            if (myList.head == NULL)
            {
                printf("Underflow!\n");
            }
            else
            {
                printf("Enter position to delete: ");
                scanf("%d", &position);
                DeleteAtX(&myList, position);
            }
            break;
        case 5:
            PrintList(&myList);
            break;
        case 6:
            if (myList.head == NULL)
            {
                printf("Underflow!\n");
            }
            else
            {
                DeleteFront(&myList);
            }
            break;
        case 7:
            if (myList.head == NULL)
            {
                printf("Underflow!\n");
            }
            else
            {
                DeleteEnd(&myList);
            }
            break;
        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
