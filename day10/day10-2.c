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


struct Costomer
{
	char customerName[NAME_MAX];
	int product;
	int point;
	enum rank rank;
	struct Costomer* prev;
	struct Costomer* next;

};

struct Costomer* head; 

struct Costomer* create_node(char* customerName, enum rank rank, int product, int point)
{
	struct Costomer* new_node = (struct Costomer*)malloc(sizeof(struct Costomer));
	strcpy_s(new_node->customerName, NAME_MAX, customerName); //���ڿ� ����
	new_node->rank = rank;
	new_node->product = product;
	new_node->point = point;
	new_node->prev = NULL;
	new_node->next = NULL;

	return new_node;
}

struct Costomer* last_node()
{
	struct Costomer* cur = head;
	while (cur->next != NULL) {
		cur = cur->next;
	}
	return cur;
}

struct Costomer* find_node_insert(enum rank rank, int product, int point)
{
	struct Costomer* prev = head;
	struct Costomer* cur = head->next;
	if (cur == NULL) {
		return head;
	}

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




void insert_node_prioritiy(struct Costomer* new_node)
{
	struct Costomer* n = find_node_insert(new_node->rank, new_node->product, new_node->point);
	new_node->next = n->next;

	if (n->next != NULL) {
		n->next->prev = new_node;
	}

	n->next = new_node;
	new_node->prev = n;
}


void insert_node_last(struct Costomer* new_node)
{
	struct Costomer* last = last_node();
	last->next = new_node;
}


void print_nodes()
{
	struct Costomer* cur = head->next;
	printf("------------------------\n");
	printf("�̸�\t���\t��ü �ֹ���\t����Ʈ\n");
	while (cur != NULL) {

		printf("%s\t%d\t%d\t\t%d\t\n", cur->customerName, cur->rank, cur->product, cur->point);
		cur = cur->next;
	}
	printf("------------------------\n");
}

void delete_node(char* customerName)
{
	struct Costomer* cur = head->next;
	struct Costomer* temp;
	
	while (cur != NULL) {
		if (strcmp(cur->customerName, customerName) == 0) {//str��
			
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
	head = (struct Costomer*)malloc(sizeof(struct Costomer));
	head->next = NULL;

	int inst;
	int iteration = 1;
	char name[NAME_MAX];
	int grade;
	int product;
	int point;


	while (iteration) {
		printf("1: �� �߰�\n");
		printf("2. �� ����\n");
		printf("3. �� ����\n");
		printf("4. ��ü ����Ʈ ���\n");
		printf("5. ���α׷� ����\n");
		printf("��� �Է�: ");
		scanf_s("%d", &inst);

		switch (inst)
		{
		case 1: //�� �߰�
			printf("�� �̸�: ");
			scanf_s("%s", name, NAME_MAX);
			printf("�� ���(FRIEND=5, BRONZE=4, SILVER=3, GOLD=2, PLATINUM=1): ");
			scanf_s("%d",&grade);
			printf("��ü �ֹ���: ");
			scanf_s("%d",&product);
			printf("�� ����Ʈ: ");
			scanf_s("%d",&point);

			//�� ��� ����
			insert_node_prioritiy(create_node(name, grade, product, point));
			break;

		case 2://�� ����
			printf("������ �л��� �̸� �Է�:");
			scanf_s("%s", name, NAME_MAX);
			delete_node(name);
			break;

		case 3://�� ����
			printf("������ ���� �̸� �Է�: ");
			scanf_s("%s", name, NAME_MAX);
			delete_node(name);

			printf("�� ���(FRIEND=1, BRONZE=2, SILVER=3, GOLD=4, PLATINUM=5): ");
			scanf_s("%d", &grade);
			printf("��ü �ֹ���: ");
			scanf_s("%d", &product);
			printf("�� ����Ʈ: ");
			scanf_s("%d", &point);
			insert_node_prioritiy(create_node(name, grade, product, point));
			break;

		case 4://��ü ����Ʈ ���
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
