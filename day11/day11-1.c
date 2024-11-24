#include<stdio.h>
#include<math.h>

int main()
{
	double x1, x2, cons, result_plus, result_minus, sqrt_result;
	printf("이차항(x^2) 입력: ");
	scanf_s("%lf", &x1,sizeof(x1));

	printf("일차항(x) 입력: ");
	scanf_s("%lf", &x2, sizeof(x2));

	printf("상수항 입력: ");
	scanf_s("%lf", &cons, sizeof(cons));


	sqrt_result = (sqrt(pow(x2, 2) - 4.0 * x1 * cons));
	if ((pow(x2, 2) - 4.0 * x1 * cons) < 0) {
		printf("허근입니다.");
		return 0;
	}


	result_plus = ((-x2 + sqrt_result) / 2.0 * x1);
	result_minus = ((-x2  + (sqrt_result * -1.0)) / 2.0 * x1);

	if (result_plus == result_minus) {
		printf("이차방정식의 근은 %.2lf 중근입니다.\n", result_plus);
	}
	else {
		printf("방정식의 근은 %.2lf 또는 %.2lf\n", result_plus, result_minus);
	}

	return 0;
}