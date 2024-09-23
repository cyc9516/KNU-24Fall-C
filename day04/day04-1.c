#include<stdio.h>
int main(void)
{
	int num = 100;
	int *ptr = &num;

	printf("%d\n", ptr);
	printf("%d\n", *ptr);


	int num1 = 100, num2 = 100;
	int *pnum;

	pnum = &num1;
	(*pnum) += 30;  //포인터에 괄호룰 사용하는 이유는 곱연산과의 혼동을 방지하기 위해 사용된다.

	pnum = &num2;
	(*pnum) -= 30;

	printf("num1: %d\n", num1);
	printf("num2: %d\n", num2);

	return 0;
}