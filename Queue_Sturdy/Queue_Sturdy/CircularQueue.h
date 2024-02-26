#pragma once
typedef int ElementType;

typedef struct tagNode
{
	ElementType Data;
}Node;

typedef struct tagCircularQueue
{
	int Capacity;
	int Front;
	int Rear;

	Node* Nodes;
}CircularQueue;


void CQ_CreateQueue(CircularQueue** Queue, int Capacity);
void CQ_DestroyQueue(CircularQueue* Queue);