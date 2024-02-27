#include "CircularQueue.h"
/*
* Circular_Queue[Array] ��Ģ
* 1. �迭�̹Ƿ� DataNode �Ӽ��� Data��
* 2. �迭�̹Ƿ� Capacity �Ҵ�
* 3. Queue�� Front(�Ӹ�), Rear(����) �� ����
* 4. 
   1.�޸� ���� ���� CreateQueue 
   2.�޸� ���� ���� DestroyQueue����
   3.������ ���� ���� (EnQueue)
   4.������ ���� ���� (DeQueue)
*/
int main()
{
	int i;
	CircularQueue* Queue;

	CQ_CreateQueue(&Queue, 10);
	CQ_Enqueue(Queue, 2);
	CQ_Enqueue(Queue, 1);
	CQ_Enqueue(Queue, 6);

	printf("%d\n", CQ_Dequeue(Queue));

	CQ_DestroyQueue(Queue);
}