#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main()
{
	double x = 0;//x좌표
	double y = 0;//y좌표
	double z = 0;
	double pi;
	int count = 0, circle = 0;
	int gage=0;

	srand(time(NULL));

	while (count < 1000000000) {
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		z = (double)sqrt(pow(x, 2)+pow(y,2));
		pi =4 * ((double)circle / (double)count); 
		count++;

		if (z < 1) {
			circle++;
		}
		
		if (count%10000000 == 0) {
			printf("%d%% 진행.. pi=%lf ",count/10000000 , pi);
			gage = count / 10000000;

			for (int com = 0; com < gage/5; com++) {
				printf("■");	
			}
			for (int incom = 0; incom < 20 - gage/5; incom++) {
				printf("□");
			}
			printf("\n");
		}
		
	}
	return 0;
}
