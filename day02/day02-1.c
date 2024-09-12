#include<stdio.h>
int main(void)
{
	double num1, num2;
	int function;
	printf("원하는 기호를 입력하세요.\n 1.더하기 2.빼기 3.곱하기 4.나누기\n");
	printf("기능: ");
	scanf_s("%d", &function);

	printf("숫자 1을 입력하세요: ");
	scanf_s("%Lf",&num1);
	printf("숫자 2를 입력하세요: ");
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
		printf("잘못 입력하였습니다. 프로그램을 다시 시작하세요.");
		
	}
	return 0;
}