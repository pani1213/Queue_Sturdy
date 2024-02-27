#include <iostream>
#include "LinkedQueue.h"



int main()
{
	Node* Poppend;
	LinkedQueue* Queue;

	LQ_CreateQueue(&Queue);

	LQ_EnQueue(Queue, LQ_CreateNode("asdh"));
	LQ_EnQueue(Queue, LQ_CreateNode("zsa"));
	LQ_EnQueue(Queue, LQ_CreateNode("ayd"));
	LQ_EnQueue(Queue, LQ_CreateNode("ewq"));
	LQ_EnQueue(Queue, LQ_CreateNode("awq"));

	std::cout << Queue->Count;
	Poppend = LQ_DeQueue(Queue);
	std::cout << Poppend->Data << "\n";

	return 0;
}

