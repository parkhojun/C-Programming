#include <stdio.h>
#include <stdlib.h>

struct node
{
	int item;
	struct node* next;

};

typedef struct node Node;

int main(void) {
	Node* node1 = NULL;
	Node* node2;
	Node* node3;
	node1 = (Node *)malloc(sizeof(Node));
	node1 -> item = 10;
	node1->next = NULL;
	node2 = (Node *)malloc(sizeof(Node));
	node2->item = 20;
	node2->next = NULL;
	node3 = (Node *)malloc(sizeof(Node));
	node3->item = 20;
	node3->next = NULL;
	node1->next = node3;
	node2->next = node3;
	free(node2);

	Node* index = node1;

	while (1) {

		printf("%d", index->item);
		if (index->next == NULL)
			break;
		index = index -> next;
		printf("\n");

	}


	return 0;
}