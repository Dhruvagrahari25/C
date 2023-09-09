#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    struct node *next;
    struct node *prev;
    int data;
};

struct LinkedList
{
    struct node *head;
};

struct node *traverse(struct LinkedList *LinkedList, int n)
{
    struct node *Temp = LinkedList->head;
    if (n == 0)
    {
        Temp = LinkedList->head->prev;
    }
    else
    {

        for (int i = 0; i < n - 1; i++)
        {
            // printf("%d\n", Temp->data);
            Temp = Temp->next;
        }
    }
    return Temp;
}

void addFront(struct LinkedList *LinkedList)
{
    struct node *NewNode = (struct node *)malloc(sizeof(struct node));
    NewNode->next = LinkedList->head;
    NewNode->prev = LinkedList->head->prev;
    LinkedList->head->prev->next = NewNode;
    LinkedList->head->prev = NewNode;
    LinkedList->head = NewNode;
    printf("Enter Data:");
    scanf("%d", &NewNode->data);
}
void deleteFront(struct LinkedList *LinkedList)
{
    LinkedList->head->next->prev = LinkedList->head->prev;
    LinkedList->head->prev->next = LinkedList->head->next;
    struct node *Temp = LinkedList->head;
    LinkedList->head = LinkedList->head->next;
    free(Temp);
}

void addEnd(struct LinkedList *LinkedList)
{
    addFront(LinkedList);
    LinkedList->head = LinkedList->head->next;
}

void deleteEnd(struct LinkedList *LinkedList)
{
    LinkedList->head = LinkedList->head->prev;
    deleteFront(LinkedList);
}

int isEmpty(struct LinkedList *LinkedList)
{
    if (LinkedList->head == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// void addAfter(struct LinkedList *LinkedList)
// {
//     struct LinkedList* Temp = traverse(LinkedList)->next;
//     struct node* original = LinkedList->head;
//     LinkedList->head=Temp;
//     addFront(LinkedList);
//     LinkedList->head=original;
// }
// Dhruv Agrahari S11 01 AIDS
// void deleteAfter(struct LinkedList *LinkedList)
// {
//     struct LinkedList* Temp = traverse(LinkedList)->next;
//     struct node* original = LinkedList->head;
//     LinkedList->head=Temp;
//     deleteFront(LinkedList);
//     LinkedList->head=original;
// }

void AddAfter(struct LinkedList *LinkedList)
{
    int n;
    printf("Enter the no. of Nodes after which the new node is to be added:");
    scanf("%d", &n);
    if (n<=0)
    {
        printf("Invalid!\n");
    }
    else
    {

        struct node *temp = traverse(LinkedList, n)->next;
        struct node *NewNode = (struct node *)malloc(sizeof(struct node));
        NewNode->next = temp;
        NewNode->prev = temp->prev;
        temp->prev->next = NewNode;
        temp->prev = NewNode;
        printf("Enter Data:");
        scanf("%d", &NewNode->data);
    }
}

void deleteAfter(struct LinkedList *LinkedList)
{
    int n;
    printf("Enter the no. of Nodes after which the new node is to be deleted:");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Invalid!\n");
        }
    else
    {
        struct node *temp = traverse(LinkedList, n)->next;
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }
}
void print(struct LinkedList *LinkedList)
{
    int n;
    printf("Enter the no. of nodes to be traversed:");
    scanf("%d", &n);
    printf("%d\n", traverse(LinkedList, n)->data);
}

void display(struct LinkedList *LinkedList)
{
    struct node *Temp = LinkedList->head;
    do
    {
        printf("%d\t", Temp->data);
        Temp = Temp->next;
    } while (Temp != LinkedList->head);
    printf("\n");
}

void swap(struct LinkedList *LinkedList)
{
    if (LinkedList->head == NULL)
    {
        printf("The List is Empty!\n");
    }
    else
    {
        int n, m, temp;
        printf("Enter the No. of nodes to be shifted:");
        scanf("%d%d", &n, &m);

        struct node *ptr1 = LinkedList->head;
        for (int i = 0; i < n - 1; i++)
        {
            ptr1 = ptr1->next;
        }

        struct node *ptr2 = LinkedList->head;
        for (int i = 0; i < m - 1; i++)
        {
            ptr2 = ptr2->next;
        }
        temp = ptr1->data;
        ptr1->data = ptr2->data;
        ptr2->data = temp;
    }
}

int main()
{
    system("cls");
    int option;
    struct LinkedList *List1 = (struct LinkedList *)malloc(sizeof(struct LinkedList));
    List1->head = NULL;
    while (1)
    {
        printf("-----MENU------\n");
        printf("0.Exit\n1.AddFront\n2.AddEnd\n3.DeleteFront\n4.DeleteEnd\n5.AddAfter\n6.DeleteAfter\n7.Display\n8.IsEmpty\n\n");
        scanf("%d", &option);
        switch (option)
        {
        case 0:
            exit(0);
        case 1:
            if (List1->head == NULL)
            {
                List1->head = (struct node *)malloc(sizeof(struct node));
                List1->head->next = List1->head->prev = List1->head;
                printf("Enter data:");
                scanf("%d", &List1->head->data);
            }
            else
            {
                addFront(List1);
            }
            break;

        case 2:
            if (List1->head == NULL)
            {
                List1->head = (struct node *)malloc(sizeof(struct node));
                List1->head->next = List1->head->prev = List1->head;
                printf("Enter data:");
                scanf("%d", &List1->head->data);
            }
            else
            {
                addEnd(List1);
            }
            break;

        case 3:
            if (List1->head == NULL)
            {
                printf("UNDERFLOW!\n");
            }
            else
            {
                deleteFront(List1);
            }

            break;

        case 4:
            if (List1->head == NULL)
            {
                printf("UNDERFLOW!\n");
            }
            else
            {
                deleteEnd(List1);
            }
            break;

        case 5:
            if (List1->head == NULL)
            {
                List1->head = List1->head->next = List1->head->prev = (struct node *)malloc(sizeof(struct node));
            }
            else
            {
                AddAfter(List1);
            }
            break;

        case 6:
            if (List1->head == NULL)
            {
                printf("UNDERFLOW!\n");
            }
            else
            {
                deleteAfter(List1);
            }
            break;

        case 7:
            if (List1->head == NULL)
            {
                printf("List is Empty!\n");
            }
            else
            {
                display(List1);
            }
            break;

        case 8:
            if (List1->head == NULL)
            {
                printf("The list is Empty!\n");
            }else
            {
                printf("The List is NOT Empty.\n");
            }
            
            break;

            // case 9:
            //     swap(List1);
            //     break;

            // case 10:
            //     print(List1);
            //     break;

        default:
            printf("Invalid Choice!\n");
            break;
        }
    }
    return 0;
}
