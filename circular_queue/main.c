/**
 * This is a circular queue implementation in C language.
 * 
 * @param circular_queue_x A pointer to a CIRCULAR_QUEUE_HandleTypeDef struct, which contains
 * information about the circular queue.
 * @param size The size parameter is the maximum number of elements that can be stored in the circular
 * queue.
 */
#include <stdio.h>
#include <stdlib.h>

#define TRUE    1
#define FALSE   0

typedef struct 
{
    //Initialize front, rear
    int front, rear;

    //Circular Queue
    int size;
    int *queue_arr;
} CIRCULAR_QUEUE_HandleTypeDef;

CIRCULAR_QUEUE_HandleTypeDef data_0;

void CIRCULAR_QUEUE_Init(CIRCULAR_QUEUE_HandleTypeDef *circular_queue_x, int size)
{
    circular_queue_x->size = size;
    circular_queue_x->front = -1;
    circular_queue_x->rear = -1;
    circular_queue_x->queue_arr = (int *)malloc(size * sizeof(int));
}

int CIRCULAR_QUEUE_Is_Full(CIRCULAR_QUEUE_HandleTypeDef *circular_queue_x)
{
    if ((circular_queue_x->front == circular_queue_x->rear + 1) || 
            ((circular_queue_x->front == 0) && (circular_queue_x->rear == circular_queue_x->size - 1)))
    {
        return TRUE;
    }
    return FALSE;
}

int CIRCULAR_QUEUE_Is_Empty(CIRCULAR_QUEUE_HandleTypeDef *circular_queue_x)
{
    return (circular_queue_x->front == -1);
}

void CIRCULAR_QUEUE_Push_Data(CIRCULAR_QUEUE_HandleTypeDef *circular_queue_x, int element)
{
    if (CIRCULAR_QUEUE_Is_Full(circular_queue_x))
    {
        printf("Queue is FULL!!!\n\n");
    }
    else
    {
        if (circular_queue_x->front == -1)
        {
            circular_queue_x->front = 0;
        }
        circular_queue_x->rear = (circular_queue_x->rear + 1) % circular_queue_x->size;
        circular_queue_x->queue_arr[circular_queue_x->rear] = element;
    }
    
}

int CIRCULAR_QUEUE_Pull_Data(CIRCULAR_QUEUE_HandleTypeDef *circular_queue_x)
{
    int element;
    if (CIRCULAR_QUEUE_Is_Empty(circular_queue_x))
    {
        printf("Queue is EMPTY!!!\n\n");
        return -1;
    }
    else
    {
        element = circular_queue_x->queue_arr[circular_queue_x->front];
        if (circular_queue_x->front == circular_queue_x->rear)
        {
            circular_queue_x->front = -1;
            circular_queue_x->rear = -1;
        }
        else
        {
            circular_queue_x->front = (circular_queue_x->front + 1) %circular_queue_x->size;
        }
        return element;
    }
    
}

int main()
{
    CIRCULAR_QUEUE_Init(&data_0, 5);
    CIRCULAR_QUEUE_Push_Data(&data_0, 1);
    CIRCULAR_QUEUE_Push_Data(&data_0, 2);
    CIRCULAR_QUEUE_Push_Data(&data_0, 3);
    CIRCULAR_QUEUE_Push_Data(&data_0, 4);
    CIRCULAR_QUEUE_Push_Data(&data_0, 5);
    
    printf("Element is pull from queue: %d\n", CIRCULAR_QUEUE_Pull_Data(&data_0));
    printf("Element is pull from queue: %d\n", CIRCULAR_QUEUE_Pull_Data(&data_0));

    return 0;
}