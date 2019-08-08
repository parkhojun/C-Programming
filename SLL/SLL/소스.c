#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int item;
	struct node* nlink;

}Node;

typedef struct stack
{
	struct node* elem;
	struct node* top;


}stack;

stack* CreateStack(void) {

	stack* newStack = (stack *)malloc(sizeof(stack));//�����Ҵ�
	newStack->elem = NULL;
	newStack->top = NULL;

	return newStack;
}//���û���

void AddStack(const int item, stack* stack) {

	Node* newNode;
	newNode = (Node *)malloc(sizeof(Node));
	newNode->item = item;
	if (stack->top == NULL) {
		stack->elem = newNode;
		stack->top = newNode;
		newNode->nlink = NULL;
		return;
	}
	else {
		newNode->nlink = stack->top;
		stack->top->nlink = newNode;
		newNode->nlink = NULL;
		stack->top = newNode;
	}

}//Ǫ��
void DeleteStack(stack* stack) {

	Node* temp;//= stack->top->nlink = NULL;
	Node* elem;
	//free(stack->top);
	//stack->top = temp;
	//stack->top->nlink = NULL;
	elem = stack->top->item;
	temp = stack->top;
	stack->top = stack->top->nlink;
	free(temp);


}//��
void DestroyStack(stack* stack) {
	free(stack);
}//�����ı�
void PrintStack(const stack* stack) {

	Node* index = stack->elem;
	for (; ;) {
		printf("%d ", index->item);
		if (index->nlink == NULL) {
			break;
		}
		index = index->nlink;
	}



}//�������

int main(void) {

	stack* newStack = CreateStack();

	AddStack(10, newStack);
	AddStack(20, newStack);
	AddStack(30, newStack);
	PrintStack(newStack);
	printf("\n");
	DeleteStack(newStack);
	PrintStack(newStack);
	printf("\n");
	//DestroyStack(newStack);
	return 0;
}





