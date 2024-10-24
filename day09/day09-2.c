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
		printf("상품 정보를 입력하세요 (입력 중단은 id에 0 입력)\n");
		printf("상품 ID: ");
		scanf_s("%d", &n[i].id);
		if (n[i].id == 0) {
			break;
		}
		printf("상품명: ");
		scanf_s("%s", n[i].name,sizeof(n[i].name));
		printf("가격: ");
		scanf_s("%d", &n[i].price);
	}
	
	printf("\n<<<입력한 상품 목록>>>\n");
	for (int j = 0; j < i; j++) {
		printProduct(n[j]); 
	}
}

void printProduct(struct Product n)
{
	printf("상품 ID: %d\n",n.id);
	printf("상품명: %s\n", n.name);
	printf("가격: %d\n\n", n.price);
}
