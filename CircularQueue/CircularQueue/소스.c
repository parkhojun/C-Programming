#include <stdio.h>
#include <stdlib.h>

typedef struct CircularQueue {

	int *arr;
	int *head;
	int *tail;
	int size;

}CircularQueue;

CircularQueue* CreateQueue(const int size) {

	CircularQueue* newQueue = (CircularQueue*)malloc(sizeof(CircularQueue));
	newQueue ->arr= (int*)malloc(sizeof(int)*size);
	newQueue -> head = NULL;
	newQueue -> tail = NULL;
	newQueue->size = size;
	return newQueue;
}

int IsFullQueue(const CircularQueue* queue) {
	
	if (queue->head == queue->arr) {
		if (queue->tail == queue->arr + queue->size - 1) {//tail이 마지막
			return 1;
		}
		else
			return 0;
	}
	else{
		if (queue->tail == queue->head - 1) {
			return 1;
		}
		else
			return 0;
	}

}
int IsEmptyQueue(const CircularQueue* queue) {
	
	if (queue->tail == NULL) {
		return 1;
	}
	return 0;
}

void AddCircularQueue(CircularQueue* queue, const int item) {

	if (IsEmptyQueue(queue)) {

		queue->head = queue->arr;
		queue->tail = queue->arr;
		*(queue->tail) = item;
		return;
	}
	if (IsFullQueue(queue)) {
		return;
	}
	if (queue->tail == queue->arr + queue->size - 1) {
		queue->tail = queue->arr;
		*(queue->tail) = item;
		return;
	}
	(queue->tail)++;
	*(queue->tail) = item;
}
void DeleteCircularQueue(CircularQueue* queue) {

	if(IsEmptyQueue(queue)){
		return;
	}
	if (queue == queue->tail) {
		queue->head = NULL;
		queue->tail = NULL;
		return;
	}
	if (queue->head == queue->arr + queue->size - 1) {//1이 마지막
		queue->head = queue->arr;
		return;
	}
	(queue->head)++;
}
void DestroyCircularQueue(CircularQueue*queue) {
	
	free(queue->arr);
	free(queue);
}
void PrintCircularQueue(const CircularQueue* queue) {

	int* index = NULL;
	if (IsEmptyQueue(queue)) {
		printf("없어");
		return;
	}
	index = queue->head;

	while (1) {

		printf("%d ", *index);
		if (index == queue->tail) break;
		if (index + 1 > queue->arr + queue->size - 1) {
			index = queue->arr;
		}
		else {
			index = index++;
		}
		printf("\n");
	}
}


int main(void) {


	CircularQueue* queue = CreateQueue(4);
	AddCircularQueue(queue, 10);
	AddCircularQueue(queue, 20);
	AddCircularQueue(queue, 30);
	AddCircularQueue(queue, 40);
	PrintCircularQueue(queue);
	printf("\n");
	DeleteCircularQueue(queue);
	PrintCircularQueue(queue);
	DestroyCircularQueue(queue);



	return 0;
}