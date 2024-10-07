#include<stdio.h>
#include<stdlib.h>
//노트에 그림을 그려보며 코드를 이해하자.

struct NODE{ 
	int data;
	struct NODE* link; 
};

struct NODE* head = NULL;

struct NODE* create_noad(int data)
{
	struct NODE* new_node;
}

struct NODE* last_node()
{
	struct NODE* cur = head;
	while (cur->link != NULL) {
		cur = cur->link;
	}
	return cur;
}

void insert_node_last(struct NODE* new_node)
{
	struct NODE* last = last_node();
	last->link = new_node;
}


	int main()
{
		head = (struct NODE*)malloc(sizeof(struct NODE));
		head->link = NULL; //head 변수가 포인터이므로 포인터 변수는 ->사용


		insert_node_last(create_node(1));
		insert_node_last(create_node(2));
		insert_node_last(create_node(3));

		return 0;
}


