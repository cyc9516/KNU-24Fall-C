#include<stdio.h>

int prime_number(int p_num);

int main(void)
{
	int num;
	printf("소수인지 확인할 수를 입력하세요 : ");
	scanf_s("%d", &num);
	if (num <= 1){
		printf("1보다 큰 수를 입력하세요.");
		return 0;
	}
	prime_number(num);

	return 0;
}

int prime_number(int p_num)
{
	int att,p_num_result=0,result;

	for (att = 2; att <= p_num; att++) {
		p_num_result = p_num % att;
		if (p_num_result == 0) {
			printf("해당 수는 소수가 아닙니다.\n");
			result = 0;
			return result;
		}
		
		printf("해당 수는 소수입니다.\n");
		result = 1;
		return result;
	}

}
