/**
 * This is a C program that implements a queue data structure using an array.
 * 
 * @param queue_x A pointer to a QUEUE_Type struct, which represents a queue data structure.
 * @param size The size parameter in the QUEUE_Init function is the maximum number of elements that the
 * queue can hold. It is used to allocate memory for the queue array. In the example code, it is set to
 * 10.
 */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <limits.h>

typedef struct
{
    int front, rear, size;

    int *queue_arr;
} QUEUE_Type;

QUEUE_Type queue_0;

void QUEUE_Init(QUEUE_Type *queue_x, int size)
{
    queue_x->front = -1;
    queue_x->rear = - 1;
    queue_x->size = size;
    queue_x->queue_arr = (int *)malloc(size * sizeof(int));
}

int QUEUE_Is_Empty(QUEUE_Type *queue_x)
{
    return (queue_x->front == -1);
}

int QUEUE_Is_Full(QUEUE_Type *queue_x)
{
    return (queue_x->rear == (queue_x->size - 1));
}

void QUEUE_Push_Data(QUEUE_Type * queue_x, int element)
{
    if (QUEUE_Is_Full(queue_x))
    {
        return;
    }
    if (queue_x->front == -1)
    {
        queue_x->front = 0;
    }
    
    queue_x->rear = queue_x->rear + 1;
    queue_x->queue_arr[queue_x->rear] = element;
    printf("element %d push to queue\n", element);
}

int QUEUE_Pull_Data(QUEUE_Type * queue_x)
{
    if (QUEUE_Is_Empty(queue_x))
    {
        return INT_MIN;
    }
    int item = queue_x->queue_arr[queue_x->front];
    queue_x->front = queue_x->front + 1;
    if (queue_x->front > queue_x->rear)
    {
        queue_x->front = -1;
        queue_x->rear = -1;
    }
    
    return item;
}

int main()
{
    QUEUE_Init(&queue_0, 10);

    QUEUE_Push_Data(&queue_0, 1);
    QUEUE_Push_Data(&queue_0, 2);
    QUEUE_Push_Data(&queue_0, 3);
    QUEUE_Push_Data(&queue_0, 4);

    printf("%d dequeued from queue\n\n", QUEUE_Pull_Data(&queue_0));
    return 0;
}