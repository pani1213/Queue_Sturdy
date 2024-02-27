#include "CircularQueue.h"

void CQ_CreateQueue(CircularQueue** Queue, int Capacity)
{
	(*Queue) = (CircularQueue*)malloc(sizeof(CircularQueue));
	(*Queue)->Nodes = (Node*)malloc(sizeof(Node) * (Capacity + 1));
	(*Queue)->Capacity = Capacity;
	(*Queue)->Front = 0;
	(*Queue)->Rear = 0;
}
void CQ_DestroyQueue(CircularQueue* Queue)
{
	free(Queue->Nodes);
	free(Queue);

}
void CQ_Enqueue(CircularQueue* Queue, ElementType Data)
{
	int position = 0;
	if (Queue->Rear == Queue->Capacity)
	{
		position = Queue->Rear;
		Queue->Rear = 0;
	}
	else
	{
		position = Queue->Rear++;
	}
	Queue->Nodes[position].Data = Data;
}
ElementType CQ_Dequeue(CircularQueue* Queue)
{
	int Postion = Queue->Front;
	if (Queue->Front == Queue->Capacity)
		Queue->Front = 0;
	else
		Queue->Front++;

	return Queue->Nodes[Postion].Data;
}
int CQ_ISEmpty(CircularQueue* Queue)
{
	return (Queue->Front == Queue->Rear);
}
int CQ_IsFull(CircularQueue* Queue)
{
	if (Queue->Front < Queue->Rear)
		return(Queue->Rear - Queue->Front) == Queue->Capacity;
	else
		return(Queue->Rear + 1) == Queue->Front;
}
