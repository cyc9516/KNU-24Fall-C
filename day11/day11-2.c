#include<stdio.h>
#include<math.h>


double fx(double x)
{
	double func_result;
	func_result = -log10(1.0 / x) + sin(x); //함수 f(x) 선언
	return func_result;
}



int main()
{
	double start, end, square, func, result;


	printf("적분할 시작 값을 입력: ");
	scanf_s("%lf", &start);

	printf("적분할 끝 값 입력: ");
	scanf_s("%lf", &end);

	printf("시행할 최대 구간 입력(2^n): ");
	scanf_s("%lf", &square);



	for (int x = 1; x <= square; x++) { 

		double delta_x = (end - start) / pow(2,x);
		result = 0;

		for (int count = 1; count <= pow(2,x); count++) { 
			result += delta_x * fx(start + count * delta_x);
		}
		
		printf("구간 \t%.0lf, 적분결과: %lf\n", pow(2,x), result);
		
	}
	return 0;
}