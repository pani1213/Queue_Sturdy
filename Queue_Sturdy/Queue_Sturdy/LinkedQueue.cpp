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
		Queue->Front = NewNode;	
	else
		Queue->Rear->nextNode = NewNode;
	
	Queue->Rear = NewNode;
	Queue->Count++;
}

Node* LQ_DeQueue(LinkedQueue* Queue)
{
	Node* Front = Queue->Front;

	// 하나밖에 없다면
	if (Queue->Front->nextNode == nullptr)
	{
		//Front를 비워라
		Queue->Front = nullptr;
		Queue->Rear= nullptr;
	}
	else
	{
		// 하나 이상이라면 한칸 당겨라
		Queue->Front = Queue->Front->nextNode;
	}
	Queue->Count--;
	return Front;
}

bool LQ_IsEmpty(LinkedQueue* Queue)
{
	return (Queue->Front == nullptr);
}
Node* LQ_CreateNode(const char* NewData)
{
	Node* NewNode = (Node*)malloc(sizeof(Node));
	NewNode->Data = (char*)malloc(sizeof(1 + (NewData)));

	strcpy_s(NewNode->Data, sizeof(NewNode->Data), NewData);

	NewNode->nextNode = nullptr;
	return NewNode;
}
void LQ_DestroyNode(Node* Node)
{
	free(Node->Data);
	free(Node);
}
