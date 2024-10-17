#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 10

void fillRandom(int array[SIZE][SIZE]);
void printArray(int array[SIZE][SIZE]);
void movePointer(void* array);

int main() {
	int array[SIZE][SIZE];

	fillRandom(array); //�迭 ���� �ʱ�ȭ
	printArray(array); //�迭 ���
	movePointer(array); //�����͸� �̿��� �̵�

	return 0;
}

void fillRandom(int array[SIZE][SIZE]) //�迭 ���� �ʱ�ȭ
{
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			array[i][j] = rand() % 20 + 1;
		}
	}
}

void printArray(int array[SIZE][SIZE]) //�迭 ���
{
	printf("�迭 ���:\n");
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			printf("%4d ", array[i][j]);
		}
		printf("\n");
	}

}

void movePointer(void* array) //�����͸� �̿��� �̵�
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
		printf("���� ��ġ: (%d, %d), �迭�� ��: %d\n", x, y, array_val);

		x += array_val / 10;
		y += array_val % 10;

		
		if (y >= 10) { //�ڸ��� �ø�
			y -= 10;
			x += 1;
		}
		

	}

	printf("�� �̻� �̵��� �� �����ϴ�.\n");
	printf("���� ��ġ: (%d, %d), �迭�� ��: %d\n", result_x, result_y, array_val);

}