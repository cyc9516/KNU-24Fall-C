/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* arr;
	arr = (int*)malloc(sizeof(int) * 10);  //malloc()은 기본적으로 Byte 단위로 할당. sizeof(int)*10== 4*10 == 40Byte 할당.

	int arr2[10] = { 1, 2,3};

	for (int i = 0; i < 10; i++) {
		printf("%d %d\n", arr[i], arr2[i]); //arr변수에 쓰레기값 생성, arr2변수에 정상 출력. arr변수 NULL 필요.
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
	strcpy_s(person[0].name, 100, "철수");
	person[0].score = 100;

	printf("%d %s %d", person[0].student_num, person[0].name, person[0].score);
}

	/*/scanf --> N
	printf("학생 수 입력: ");
	scanf_s("%d", &N);


	//malloc()
	student_num = (int*)malloc(N * sizeof(int));
	score = (int*)malloc(N * sizeof(int));
	name = (char*)malloc(N * 100 * sizeof(char));


	//scanf--> snum/name/score
	for (int i = 0; i < N; i++) {
		printf("학생 %d의 학번 입력: ", i + 1);
		scanf_s("%d", &student_num[i]);
		printf("학생 %d의 이름 입력: ", i + 1);
		scanf_s("%s", name + (100 * i), 100);
		printf("학생 %d의 점수 입력: ", i + 1);
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