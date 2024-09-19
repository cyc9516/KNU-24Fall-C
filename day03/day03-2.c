#include<stdio.h>

int fac(int pec_num);

int main(void)
{
	int num;
	printf("계산할 팩토리얼 값 입력: ");
	scanf_s("%d", &num);
	fac(num);
	return 0;
}

int fac(int pec_num)
{
	int result = 0;
	if (pec_num == 0||pec_num==1) {
		pec_num=1;
		
	}
	result = pec_num * fac(pec_num-1);
	

	printf("%d", result);
}