#include<stdio.h>
int main()
{
	int n, i, j;

	printf("����: ");
	scanf_s("%d", &n);
	printf("%d�� �Ƕ�̵�:\n",n);

	for (i = 0; i < n; i++) { //����
		for (int blank1 = i+1; blank1 < n; blank1++) {
			printf(" "); //���� ���
		}
		for (j = 0; j < 2*i+1; j++) { //�� ���
			printf("*");
		}

		
		printf("\n");
	}
}