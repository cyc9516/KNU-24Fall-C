#include<stdio.h>
int main()
{
	int n, i, j;

	printf("층수: ");
	scanf_s("%d", &n);
	printf("%d층 피라미드:\n",n);

	for (i = 0; i < n; i++) { //층수
		for (int blank1 = i+1; blank1 < n; blank1++) {
			printf(" "); //공백 출력
		}
		for (j = 0; j < 2*i+1; j++) { //별 출력
			printf("*");
		}

		
		printf("\n");
	}
}