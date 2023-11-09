#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Student
{
    int data;
};
struct Queue
{
    int max, front, rear;
    struct Student *studarray;
};
int isFull(struct Queue *q)
{
    if (q->front == q->max - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(struct Queue *q)
{
    if (q->rear > q->front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enQ(struct Queue *q, struct Student *Student)
{
    q->front++;
    q->studarray[q->front] = *Student;
}
struct Student deQ(struct Queue *q)
{
    struct Student *temp = &q->studarray[q->rear];
    q->rear++;
    return *temp;
}
struct Student peek(struct Queue *q, int choice)
{
    if (q->rear > q->front)
    {
        printf("Queue is Empty!...\n");
        return q->studarray[q->rear];
        
    }
    else
    {
        switch (choice)
        {
        case 1:
            return q->studarray[q->front];
            break;
        case 2:
            return q->studarray[q->rear];
            break;

        default:
            printf("Invalid choice!\n");
            return q->studarray[q->rear];
            break;
        }
    }
}
int main()
{
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->front = -1;
    q->rear = 0;
    int choice, Peekchoice;
    struct Student *student = (struct Student *)malloc(sizeof(struct Student));
    printf("Enter max size of the Queue:");
    scanf("%d", &q->max);
    q->studarray = (struct Student *)malloc(q->max * sizeof(struct Student));

    while (1)
    {
        printf("*****MENU*****\n1.Enqueue\n2.Dequeue\n3.Peek\n4.IsEmpty\n5.IsFull\n0.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (isFull(q))
            {
                printf("Que is full!\n");
            }
            else
            {
                printf("Enter data:");
                scanf("%d", &student->data);
                enQ(q, student);
            }
            break;

        case 2:
            if (isEmpty(q) == 1)
            {
                printf("Queue is empty!\n");
            }
            else
            {
                printf("Dequeued data: %d", deQ(q).data);
            }
            break;

        case 3:
            printf("Enter peek choice:");
            scanf("%d", &Peekchoice);
            peek(q, Peekchoice);
            break;

        case 4:
            if (isFull(q) == 1)
            {
                printf("Queue is full\n");
            }
            else
            {
                printf("Queue is not full\n");
            }
            break;
        case 5:
            if (isEmpty(q) == 1)
            {
                printf("Queue is Empty\n");
            }
            else
            {
                printf("Queue is not Empty\n");
            }
            break;

        case 0:
            return 0;

        default:
            printf("Invalid choice!\n");
            break;
        }
    }
    return 0;
}