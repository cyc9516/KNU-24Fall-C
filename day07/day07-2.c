#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main()
{
	double x = 0;//x��ǥ
	double y = 0;//y��ǥ
	double z = 0;
	double pi;
	int count = 0, circle = 0;
	int gage=0;

	srand(time(NULL));

	while (count < 1000000000) {
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		z = (double)sqrt(pow(x, 2)+pow(y,2));
		pi =4 * ((double)circle / (double)count); //ĳ���� ���� 0���� �������� �����߻�����
		count++;

		if (z < 1) {
			circle++;
		}
		
		if (count%10000000 == 0) {
			printf("%d%% ����.. pi=%lf ",count/10000000 , pi);
			gage = count / 10000000;

			for (int incom = 0; incom < gage/5; incom++) {
				printf("��");	
			}
			for (int com = 0; com < 20 - gage/5; com++) {
				printf("��");
			}
			printf("\n");
		}
		
	}

}
