#ifndef QUEUE_H_
#define QUEUE_H_


struct point {
	int x;//���x����
	int y;//���y����

};

typedef struct Queue {
	struct point  queue[MaxQueueSize];
	int front;//ͷָ��
	int rear;//βָ��
	int tag;//���ñ��λ

}SeqCQueue;

//��ʼ�����в���
void QueueInitiate(SeqCQueue *Q) {
	Q->front = 0;
	Q->rear = 0;
	Q->tag = 0;

}

//�ж϶����Ƿ�Ϊ��
int QueueNotEmpty(SeqCQueue Q) {
	if (Q.front == Q.rear&&Q.tag == 0)
		return 0;
	else
		return 1;

}

//��Ӳ���
void  QueueAppend(SeqCQueue *Q, point  x) {
	if (Q->tag == 1 && Q->front == Q->rear) {
		printf("�����������޷����룡\n");

	}
	else {
		Q->queue[Q->rear] = x;
		Q->rear = (Q->rear + 1) % MaxQueueSize;
		Q->tag = 1;

	}

}

//���Ӳ���
void QueuePop(SeqCQueue *Q, point  *d) {
	if (Q->tag == 0 && Q->front == Q->rear) {
		printf("�����ѿգ���Ԫ�ؿ��Գ����У�\n");

	}
	else {
		*d = Q->queue[Q->front];
		Q->front = (Q->front + 1) % MaxQueueSize;
		Q->tag = 0;

	}

}


#endif // !QUEUE_H_
