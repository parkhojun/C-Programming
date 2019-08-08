#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int item;
	struct node* rlink;
	struct node* llink;

}Node;

typedef struct stack
{
	struct node* elem;
	struct node* top;


}stack;

stack* CreateStack(void) {

	stack* newStack = NULL;
	newStack = (stack *)malloc(sizeof(stack));
	newStack->elem = NULL;
	newStack->top = NULL;

	return newStack;
}//스택생성

void AddStack(const int item, stack* stack) {

	Node* newNode;
	newNode = (Node *)malloc(sizeof(Node));
	newNode->item = item;
	if (stack->top == NULL) {
		stack->elem = newNode;
		stack->top = newNode;
		newNode->rlink = NULL;
		newNode->llink = NULL;
		return;
	}
	else {

		newNode->llink = stack->top;
		stack->top->rlink = newNode;
		newNode->rlink = NULL;
		stack-> top = newNode;

	}

}//푸쉬
void DeleteStack(stack* stack) {

	Node* temp = stack->top->llink;
	free(stack->top);
	stack->top = temp;
	stack->top->rlink = NULL;
}//팝
void DestroyStack(stack* stack) {

	Node* temp = stack->top->llink;
	while (1) {
			free(stack->top);
			stack->top = temp;
			temp = stack->top->llink;
			if (stack->top->llink == NULL) {
				free(stack->top);
				break;
			}
		}
		free(stack);
}//스택파괴
void PrintStack(const stack* stack){

	Node* index = stack->elem;
	for ( ; ;) {
		printf("%d", index->item);
		if (index->rlink == NULL) break;
		index = index->rlink;
	}



}//스택출력

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
	DestroyStack(newStack);
	return 0;
}