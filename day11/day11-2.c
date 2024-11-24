#include<stdio.h>
#include<math.h>


double fx(double x)
{
	double func_result;
	func_result = -log10(1.0 / x) + sin(x); //�Լ� f(x) ����
	return func_result;
}



int main()
{
	double start, end, square, func, result;


	printf("������ ���� ���� �Է�: ");
	scanf_s("%lf", &start);

	printf("������ �� �� �Է�: ");
	scanf_s("%lf", &end);

	printf("������ �ִ� ���� �Է�(2^n): ");
	scanf_s("%lf", &square);



	for (int x = 1; x <= square; x++) { 

		double delta_x = (end - start) / pow(2,x);
		result = 0;

		for (int count = 1; count <= pow(2,x); count++) { 
			result += delta_x * fx(start + count * delta_x);
		}
		
		printf("���� \t%.0lf, ���а��: %lf\n", pow(2,x), result);
		
	}
	return 0;
}