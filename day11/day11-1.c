#include<stdio.h>
#include<math.h>

int main()
{
	double x1, x2, cons, result_plus, result_minus, sqrt_result;
	printf("������(x^2) �Է�: ");
	scanf_s("%lf", &x1,sizeof(x1));

	printf("������(x) �Է�: ");
	scanf_s("%lf", &x2, sizeof(x2));

	printf("����� �Է�: ");
	scanf_s("%lf", &cons, sizeof(cons));


	sqrt_result = (sqrt(pow(x2, 2) - 4.0 * x1 * cons));
	if ((pow(x2, 2) - 4.0 * x1 * cons) < 0) {
		printf("����Դϴ�.");
		return 0;
	}


	result_plus = ((-x2 + sqrt_result) / 2.0 * x1);
	result_minus = ((-x2  + (sqrt_result * -1.0)) / 2.0 * x1);

	if (result_plus == result_minus) {
		printf("������������ ���� %.2lf �߱��Դϴ�.\n", result_plus);
	}
	else {
		printf("�������� ���� %.2lf �Ǵ� %.2lf\n", result_plus, result_minus);
	}

	return 0;
}