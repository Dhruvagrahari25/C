#include <stdio.h>
#include<stdlib.h>
#define MAX 100

struct Q
{
    int Que[MAX];
    int front, rear;
};

void Enqueue(struct Q *queue)
{
    if (queue->rear == MAX - 1)
    {
        printf("Overflow!\n");
        return;
    }else if (queue->front==-1 && queue->rear==-1)
    {
        queue->front=queue->rear=0;
        printf("Enter data:");
        scanf("%d", &queue->Que[queue->front]);

    }
    
    else
    {
        printf("Enter data:");
        queue->rear++;
        scanf("%d", &queue->Que[queue->rear]);
    }
}

void dequeue(struct Q *queue)
{
    if (queue->front == -1 || queue->rear < queue->front)
    {
        printf("Underflow!\n");
        return;
    }
    else
    {
        printf("Dequeued element: %d\n", queue->Que[queue->front]);
        queue->front++;
    }

    if (queue->front > queue->rear)
    {
        queue->front = queue->rear = -1;
    }
}

void peek(struct Q *queue)
{
    if (queue->front == -1 || queue->rear < queue->front)
    {
        printf("Queue is empty!\n");
    }
    else
    {
        printf("Rear: %d  Front: %d\n", queue->Que[queue->rear], queue->Que[queue->front]);
    }
}

int isEmpty(struct Q *queue)
{
    if (queue->front == -1 || queue->rear < queue->front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Q *queue)
{
    if (queue->rear == MAX - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    struct Q* queue=(struct Q*)malloc(sizeof(struct Q));
    queue->front = -1;
    queue->rear = -1;
    int choice;

    do
    {
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Is Empty\n");
        printf("5. Is Full\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            Enqueue(queue);
            break;
        case 2:
            dequeue(queue);
            break;
        case 3:
            peek(queue);
            break;
        case 4:
            if (isEmpty(queue))
                printf("Queue is empty.\n");
            else
                printf("Queue is not empty.\n");
            break;
        case 5:
            if (isFull(queue))
                printf("Queue is full.\n");
            else
                printf("Queue is not full.\n");
            break;
        case 0:
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}