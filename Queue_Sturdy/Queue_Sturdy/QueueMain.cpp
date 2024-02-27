#include "CircularQueue.h"
/*
* Circular_Queue[Array] 원칙
* 1. 배열이므로 DataNode 속성은 Data뿐
* 2. 배열이므로 Capacity 할당
* 3. Queue는 Front(머리), Rear(꼬리) 로 나뉨
* 4. 
   1.메모리 생성 구현 CreateQueue 
   2.메모리 삭제 구현 DestroyQueue생성
   3.데이터 삽입 구현 (EnQueue)
   4.데이터 삭제 구현 (DeQueue)
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