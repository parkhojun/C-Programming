#include <stdio.h>
#include <stdlib.h>
#define PRNFORMAT "%4d"
#define TRUE 1
#define FALSE !TRUE

typedef int EType;
typedef int Bool;

typedef struct node {

	struct node* llink;
	struct node* rlink;
	EType item;

}Node;

typedef struct queue {

	Node* head;
	Node* tail;

}Queue;


Queue* CreateQueue(void) {

	Queue* newQueue = NULL;
	newQueue = (Queue*)malloc(sizeof(Queue));
	newQueue->tail = NULL;
	newQueue->head = NULL;

	return newQueue;

}//ť ����

void AddQueue(Queue* queue, const EType item) {

	Node* newNode;
	newNode = (Node *)malloc(sizeof(Node));
	newNode->item = item;
	if (queue->tail == NULL) {
		queue->head = newNode;
		queue->tail = newNode;
		newNode->rlink = NULL;
		newNode->llink = NULL;
		return;
	}
	else {

		newNode->llink = queue->head;
		queue->tail->rlink = newNode;
		newNode->rlink = NULL;
		queue->tail = newNode;
	}

}//ť �߰�
void DeleteQueue(Queue* queue) {
	
	if (IsEmptyQueue(queue)) {
		return;
	}
	else if (queue->head==queue->tail) {

		free(queue->head);
		queue->head = NULL;
		queue->tail = NULL;
	}

	else {
		Node* temp = queue->head->rlink;
		free(queue->head);
		queue->head = temp;
		queue->head->llink = NULL;
	}

}//ť ����
void DestroyQueue(Queue* queue) {
	
	Node* temp = queue->head->rlink;
	while (!IsEmptyQueue(queue)) {

		DeleteQueue(queue);
	
	}


}//ť ��� ����
void PrintQueue(const Queue* queue) {
	
	Node* index = queue->head;

	if (IsEmptyQueue(queue)) {
		printf("Empty");
		return;
	}
	else {
		for (; ;) {
			printf("%d ", index->item);
			if (index->rlink == NULL) break;
			index = index->rlink;
		}
	}
}//ť ����Ʈ ���
Bool IsEmptyQueue(const Queue *queue) {

	if (queue->tail == NULL) {
		return 1;
	}
	return 0;

}//ť ������� Ȯ��

int main(void) {


	Queue* queue = CreateQueue();

	AddQueue(queue, 10);
	AddQueue(queue, 20);
	AddQueue(queue, 30);
	AddQueue(queue, 40);
	PrintQueue(queue);
	printf("\n");
	DeleteQueue(queue);
	PrintQueue(queue);
	printf("\n");
	DestroyQueue(queue);


	return 0;
}