#include<stdio.h>

struct Product {
	int id;
	char name[20];
	int price;
};

void printProduct(struct Product n);

int main()
{
	int i = 0;
	struct Product n[5];
	for ( i = 0; i < 5; i++) {
		printf("��ǰ ������ �Է��ϼ��� (�Է� �ߴ��� id�� 0 �Է�)\n");
		printf("��ǰ ID: ");
		scanf_s("%d", &n[i].id);
		if (n[i].id == 0) {
			break;
		}
		printf("��ǰ��: ");
		scanf_s("%s", n[i].name,sizeof(n[i].name));
		printf("����: ");
		scanf_s("%d", &n[i].price);
	}
	
	printf("\n<<<�Է��� ��ǰ ���>>>\n");
	for (int j = 0; j < i; j++) {
		printProduct(n[j]); 
	}
}

void printProduct(struct Product n)
{
	printf("��ǰ ID: %d\n",n.id);
	printf("��ǰ��: %s\n", n.name);
	printf("����: %d\n\n", n.price);
}
