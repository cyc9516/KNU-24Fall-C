#include<stdio.h>
int main(void)
{
	double num1, num2;
	int function;
	printf("���ϴ� ��ȣ�� �Է��ϼ���.\n 1.���ϱ� 2.���� 3.���ϱ� 4.������\n");
	printf("���: ");
	scanf_s("%d", &function);

	printf("���� 1�� �Է��ϼ���: ");
	scanf_s("%Lf",&num1);
	printf("���� 2�� �Է��ϼ���: ");
	scanf_s("%Lf", &num2);

	if (function == 1) {
		printf("%Lf + %Lf = %Lf", num1, num2, num1 + num2);
	}
	else if (function == 2) {
		printf("%Lf - %Lf = %Lf", num1, num2, num1 - num2);
	}
	else if (function == 3) {
		printf("%Lf * %Lf = %Lf", num1, num2, num1 * num2);
	}
	else if (function == 4) {
		printf("%Lf / %Lf = %Lf", num1, num2, num1 / num2);
	}
	else {
		printf("�߸� �Է��Ͽ����ϴ�. ���α׷��� �ٽ� �����ϼ���.");
		
	}
	return 0;
}