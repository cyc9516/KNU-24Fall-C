#include<stdio.h>

int prime_number(int p_num);

int main(void)
{
	int num;
	printf("�Ҽ����� Ȯ���� ���� �Է��ϼ��� : ");
	scanf_s("%d", &num);
	if (num <= 1){
		printf("1���� ū ���� �Է��ϼ���.");
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
			printf("�ش� ���� �Ҽ��� �ƴմϴ�.\n");
			result = 0;
			return result;
		}
		
		printf("�ش� ���� �Ҽ��Դϴ�.\n");
		result = 1;
		return result;
	}

}
