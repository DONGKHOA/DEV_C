#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <limits.h>

typedef struct
{
    int front, rear, size;
    int capacity;
    int *queue_arr;
} QUEUE_Type;

QUEUE_Type queue_0;

void QUEUE_Init(QUEUE_Type *queue_x, int capacity)
{
    queue_x->capacity = capacity;
    queue_x->front = 0;
    queue_x->rear = capacity - 1;
    queue_x->queue_arr = (int *)malloc(capacity * sizeof(int));
}

int QUEUE_Is_Empty(QUEUE_Type *queue_x)
{
    return (queue_x->size == 0);
}

int QUEUE_Is_Full(QUEUE_Type *queue_x)
{
    return (queue_x->size == queue_x->capacity);
}

void QUEUE_Push_Data(QUEUE_Type * queue_x, int item)
{
    if (QUEUE_Is_Full(queue_x))
    {
        return;
    }
    queue_x->rear = (queue_x->rear + 1) % (queue_x->capacity);
    queue_x->queue_arr[queue_x->rear] = item;
    queue_x->size = queue_x->size + 1;
    printf("item %d push to queue\n", item);
}

int QUEUE_Pop_Data(QUEUE_Type * queue_x)
{
    if (QUEUE_Is_Empty(queue_x))
    {
        return INT_MIN;
    }
    int item = queue_x->queue_arr[queue_x->front];
    queue_x->front = (queue_x->front + 1) % (queue_x->capacity);
    queue_x->size = queue_x->size - 1;
    return item;
}

int main()
{
    QUEUE_Init(&queue_0, 10);

    QUEUE_Push_Data(&queue_0, 1);
    QUEUE_Push_Data(&queue_0, 2);
    QUEUE_Push_Data(&queue_0, 3);
    QUEUE_Push_Data(&queue_0, 4);

    printf("%d dequeued from queue\n\n", QUEUE_Pop_Data(&queue_0));
    return 0;
}