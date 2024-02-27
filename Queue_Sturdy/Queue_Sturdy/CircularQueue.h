#pragma once
#include <iostream>

#include"cstdio"
#include"cstdlib"

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
void CQ_Enqueue(CircularQueue* Queue, ElementType Data);
ElementType CQ_Dequeue(CircularQueue* Queue);
int CQ_ISEmpty(CircularQueue* Queue);
int CQ_IsFull(CircularQueue* Queue);
