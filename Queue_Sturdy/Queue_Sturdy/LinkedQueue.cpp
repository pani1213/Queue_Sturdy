#include "LinkedQueue.h"

void LQ_CreateQueue(LinkedQueue** Queue)
{
	(*Queue) = (LinkedQueue*)malloc(sizeof(LinkedQueue));
	(*Queue)->Front = nullptr;
	(*Queue)->Rear = nullptr;
	(*Queue)->Count= 0;
}
void LQ_DestroyQueue(LinkedQueue* Queue)
{
	// Queue내부에있는 노드 삭제
	while (!LQ_IsEmpty(Queue))
	{
		Node* Poppend = LQ_DeQueue(Queue);
		LQ_DestroyNode(Poppend);
	}
	// 큐 삭제
	free(Queue);
}

void LQ_EnQueue(LinkedQueue* Queue, Node* NewNode)
{
	if (Queue->Front == nullptr)
	{
		Queue->Front = NewNode;
		Queue->Rear = NewNode;
		Queue->Count++;
	}
	else
	{

	}
}

Node* LQ_DeQueue(LinkedQueue* Queue)
{
	return 0;
}

bool LQ_IsEmpty(LinkedQueue* Queue)
{
	return false;
}

Node* LQ_CreateNode(char* NewData)
{
	Node* NewNode = (Node*)malloc(sizeof(Node));
	NewNode->Data = (char*)malloc(sizeof(1 + (NewData)));

	strcpy_s(NewNode->Data, sizeof(NewNode->Data), NewData);

	
	return nullptr;
}

void LQ_DestroyNode(Node* Node)
{
}
