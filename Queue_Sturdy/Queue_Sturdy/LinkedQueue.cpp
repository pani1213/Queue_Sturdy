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
	// Queue���ο��ִ� ��� ����
	while (!LQ_IsEmpty(Queue))
	{
		Node* Poppend = LQ_DeQueue(Queue);
		LQ_DestroyNode(Poppend);
	}
	// ť ����
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

	// �ϳ��ۿ� ���ٸ�
	if (Queue->Front->nextNode == nullptr)
	{
		//Front�� �����
		Queue->Front = nullptr;
		Queue->Rear= nullptr;
	}
	else
	{
		// �ϳ� �̻��̶�� ��ĭ ��ܶ�
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
