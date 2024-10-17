#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 10

void fillRandom(int array[SIZE][SIZE]);
void printArray(int array[SIZE][SIZE]);
void movePointer(void* array);

int main() {
	int array[SIZE][SIZE];

	fillRandom(array); //배열 랜덤 초기화
	printArray(array); //배열 출력
	movePointer(array); //포인터를 이용한 이동

	return 0;
}

void fillRandom(int array[SIZE][SIZE]) //배열 랜덤 초기화
{
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			array[i][j] = rand() % 20 + 1;
		}
	}
}

void printArray(int array[SIZE][SIZE]) //배열 출력
{
	printf("배열 출력:\n");
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			printf("%4d ", array[i][j]);
		}
		printf("\n");
	}

}

void movePointer(void* array) //포인터를 이용한 이동
{
	int x = 0, y = 0, result_x = 0, result_y = 0;
	int array_val = 0;


	while (10 * x + y <= 99) {

		if (x <= 9) {
			result_x = x;
		}
		if (y <= 9) {
			result_y = y;
		}

		array_val = *((int*)array + x * 10 + y);
		printf("현재 위치: (%d, %d), 배열의 값: %d\n", x, y, array_val);

		x += array_val / 10;
		y += array_val % 10;

		
		if (y >= 10) { //자릿수 올림
			y -= 10;
			x += 1;
		}
		

	}

	printf("더 이상 이동할 수 없습니다.\n");
	printf("종료 위치: (%d, %d), 배열의 값: %d\n", result_x, result_y, array_val);

}