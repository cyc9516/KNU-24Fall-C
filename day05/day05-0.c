/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* arr;
	arr = (int*)malloc(sizeof(int) * 10);  //malloc()�� �⺻������ Byte ������ �Ҵ�. sizeof(int)*10== 4*10 == 40Byte �Ҵ�.

	int arr2[10] = { 1, 2,3};

	for (int i = 0; i < 10; i++) {
		printf("%d %d\n", arr[i], arr2[i]); //arr������ �����Ⱚ ����, arr2������ ���� ���. arr���� NULL �ʿ�.
	}

	return 0;
}
*/















#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student {
	int student_num;
	char name[100];
	int score;
};

int main(void)
{
	int N;
	struct Student person[2];

	person[0].student_num = 1111;
	strcpy_s(person[0].name, 100, "ö��");
	person[0].score = 100;

	printf("%d %s %d", person[0].student_num, person[0].name, person[0].score);
}

	/*/scanf --> N
	printf("�л� �� �Է�: ");
	scanf_s("%d", &N);


	//malloc()
	student_num = (int*)malloc(N * sizeof(int));
	score = (int*)malloc(N * sizeof(int));
	name = (char*)malloc(N * 100 * sizeof(char));


	//scanf--> snum/name/score
	for (int i = 0; i < N; i++) {
		printf("�л� %d�� �й� �Է�: ", i + 1);
		scanf_s("%d", &student_num[i]);
		printf("�л� %d�� �̸� �Է�: ", i + 1);
		scanf_s("%s", name + (100 * i), 100);
		printf("�л� %d�� ���� �Է�: ", i + 1);
		scanf_s("%d", &score[i]);
	}

	//printf()
	for (int i = 0; i < N; i++) {
		printf("%d %s %d\n", student_num[i], name[i], score[i]);
	}

	free(student_num);
	free(score);


	return 0;
}
*/