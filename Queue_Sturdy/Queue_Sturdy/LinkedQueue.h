#pragma once
#include <iostream>

#include<cstdio>
#include<cstring>
#include<cstdlib>
typedef struct tagNode
{
	char* Data;
	struct tagNode* nextNode;
}Node;
typedef struct tagLinkedQueue
{
	Node* Front;
	Node* Rear;
	int Count;
}LinkedQueue;

void LQ_CreateQueue(LinkedQueue** Queue);
void LQ_DestroyQueue(LinkedQueue* Queue);

void LQ_EnQueue(LinkedQueue* Queue, Node* NewNode);
Node* LQ_DeQueue(LinkedQueue* Queue);

Node* LQ_CreateNode(char* NewNode);
void LQ_DestroyNode(Node* Node);
bool LQ_IsEmpty(LinkedQueue* Queue);