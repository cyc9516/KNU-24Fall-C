#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int N;
	int* student_num;
	char* name; //문자열 이중포인터 (문자열 자체가 포인터이니까 )
	int* score;

	//scanf --> N
	printf("학생 수 입력: ");
	scanf_s("%d", &N);


	//malloc()
	student_num = (int*)malloc(N * sizeof(int));
	score = (int*)malloc(N * sizeof(int));
	name = (char*)malloc(N * 100 * sizeof(char)); 
	

	//scanf--> snum/name/score
	for (int i = 0; i < N; i++) {
		printf("학생 %d의 학번 입력: ", i+1);
		scanf_s("%d", &student_num[i]);

		printf("학생 %d의 이름 입력: ", i+1);
		scanf_s("%s", name+(100*i), 100);

		printf("학생 %d의 점수 입력: ", i+1);
		scanf_s("%d", &score[i]);
	}

	//printf()
	for (int i = 0; i < N; i++) {
		printf("%d %s %d\n", student_num[i], name+(100*i), score[i]);
	}

	free(student_num);
	free(score);
	free(name);
	

	return 0;
}