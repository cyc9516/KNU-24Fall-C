#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int N;
	int* student_num;
	char* name; //���ڿ� ���������� (���ڿ� ��ü�� �������̴ϱ� )
	int* score;

	//scanf --> N
	printf("�л� �� �Է�: ");
	scanf_s("%d", &N);


	//malloc()
	student_num = (int*)malloc(N * sizeof(int));
	score = (int*)malloc(N * sizeof(int));
	name = (char*)malloc(N * 100 * sizeof(char)); 
	

	//scanf--> snum/name/score
	for (int i = 0; i < N; i++) {
		printf("�л� %d�� �й� �Է�: ", i+1);
		scanf_s("%d", &student_num[i]);

		printf("�л� %d�� �̸� �Է�: ", i+1);
		scanf_s("%s", name+(100*i), 100);

		printf("�л� %d�� ���� �Է�: ", i+1);
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