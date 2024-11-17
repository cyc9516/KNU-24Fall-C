#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define NAME_MAX 100


enum rank { 
	Platinum = 1,
	Gold, 
	Silver, 
	Bronze, 
	Friend 
};


struct Customer
{
	char customerName[NAME_MAX];
	int product;
	int point;
	enum rank rank;
	struct Customer* prev;
	struct Customer* next;

};

struct Customer* head; 

struct Customer* create_node(char* customerName, enum rank rank, int product, int point)
{
	struct Customer* new_node = (struct Customer*)malloc(sizeof(struct Customer));
	strcpy_s(new_node->customerName, NAME_MAX, customerName);
	new_node->rank = rank;
	new_node->product = product;
	new_node->point = point;
	new_node->prev = NULL;
	new_node->next = NULL;

	return new_node;
}

struct Customer* last_node()
{
	struct Customer* cur = head;
	while (cur->next != NULL) {
		cur = cur->next;
	}
	return cur;
}

struct Customer* find_node_insert(enum rank rank, int product, int point)
{
	struct Customer* prev = head;
	struct Customer* cur = head->next;
	if (cur == NULL) return head;
	

	while (cur != NULL) {

		if (cur->rank > rank) {
			return prev;
		}

		else if (cur->rank == rank) {
			if (cur->rank < rank) {
				return prev;
			}

			else if (cur->rank == rank) {
				if (cur->point < point) {
					return prev;
				}
			}
		}
		prev = cur;
		cur = cur->next;
	}

	return prev;
}




void insert_node_prioritiy(struct Customer* new_node)
{
	struct Customer* n = find_node_insert(new_node->rank, new_node->product, new_node->point);
	new_node->next = n->next;

	if (n->next != NULL) {
		n->next->prev = new_node;
	}

	n->next = new_node;
	new_node->prev = n;
}


void insert_node_last(struct Customer* new_node)
{
	struct Customer* last = last_node();
	last->next = new_node;
}


void print_nodes()
{
	struct Customer* cur = head->next;
	printf("------------------------\n");
	printf("이름\t등급\t전체 주문량\t포인트\n");
	while (cur != NULL) {

		printf("%s\t%d\t%d\t\t%d\t\n", cur->customerName, cur->rank, cur->product, cur->point);
		cur = cur->next;
	}
	printf("------------------------\n");
}

void delete_node(char* customerName)
{
	struct Customer* cur = head->next;
	struct Customer* temp;
	
	while (cur != NULL) {
		if (strcmp(cur->customerName, customerName) == 0) {
			
			if (cur->prev != NULL) {
				cur->prev->next = cur->next;
			}
			if (cur->next != NULL) {
				cur->next->prev = cur->prev;
			}
			
			temp = cur;
			cur = cur->next;
			free(temp);
			return 1;
		}
		cur = cur->next;
		
	}
	return 0;
}

int main()
{
	head = (struct Customer*)malloc(sizeof(struct Customer));
	head->next = NULL;

	int inst;
	int iteration = 1;
	char name[NAME_MAX];
	int grade;
	int product;
	int point;


	while (iteration) {
		printf("1: 고객 추가\n");
		printf("2. 고객 삭제\n");
		printf("3. 고객 수정\n");
		printf("4. 전체 리스트 출력\n");
		printf("5. 프로그램 종료\n");
		printf("명령 입력: ");
		scanf_s("%d", &inst);

		switch (inst)
		{
		case 1: //고객 추가
			printf("고객 이름: ");
			scanf_s("%s", name, NAME_MAX);
			printf("고객 등급(FRIEND=5, BRONZE=4, SILVER=3, GOLD=2, PLATINUM=1): ");
			scanf_s("%d",&grade);
			printf("전체 주문량: ");
			scanf_s("%d",&product);
			printf("고객 포인트: ");
			scanf_s("%d",&point);

			//새 노드 생성
			insert_node_prioritiy(create_node(name, grade, product, point));
			break;

		case 2://고객 삭제
			printf("삭제할 고객의 이름 입력:");
			scanf_s("%s", name, NAME_MAX);
			delete_node(name);
			break;

		case 3://고객 수정
			printf("수정할 고객의 이름 입력: ");
			scanf_s("%s", name, NAME_MAX);
			delete_node(name);

			printf("고객 등급(FRIEND=1, BRONZE=2, SILVER=3, GOLD=4, PLATINUM=5): ");
			scanf_s("%d", &grade);
			printf("전체 주문량: ");
			scanf_s("%d", &product);
			printf("고객 포인트: ");
			scanf_s("%d", &point);
			insert_node_prioritiy(create_node(name, grade, product, point));
			break;

		case 4://전체 리스트 출력
			print_nodes();
			break;

		case 5:
		default:
			iteration = 0;
			break;
		}
		
	}
	return 0;
}
