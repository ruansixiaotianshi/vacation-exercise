#ifndef QUEUE_H_
#define QUEUE_H_


struct point {
	int x;//马的x方向
	int y;//马的y方向

};

typedef struct Queue {
	struct point  queue[MaxQueueSize];
	int front;//头指针
	int rear;//尾指针
	int tag;//设置标记位

}SeqCQueue;

//初始化队列操作
void QueueInitiate(SeqCQueue *Q) {
	Q->front = 0;
	Q->rear = 0;
	Q->tag = 0;

}

//判断队列是否为空
int QueueNotEmpty(SeqCQueue Q) {
	if (Q.front == Q.rear&&Q.tag == 0)
		return 0;
	else
		return 1;

}

//入队操作
void  QueueAppend(SeqCQueue *Q, point  x) {
	if (Q->tag == 1 && Q->front == Q->rear) {
		printf("队列已满，无法插入！\n");

	}
	else {
		Q->queue[Q->rear] = x;
		Q->rear = (Q->rear + 1) % MaxQueueSize;
		Q->tag = 1;

	}

}

//出队操作
void QueuePop(SeqCQueue *Q, point  *d) {
	if (Q->tag == 0 && Q->front == Q->rear) {
		printf("队列已空，无元素可以出队列！\n");

	}
	else {
		*d = Q->queue[Q->front];
		Q->front = (Q->front + 1) % MaxQueueSize;
		Q->tag = 0;

	}

}


#endif // !QUEUE_H_
