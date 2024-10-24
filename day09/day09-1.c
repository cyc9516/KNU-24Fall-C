#include<stdio.h>

struct Vector {
	int x, y, z;
};


void sum_vector(struct Vector v1,struct Vector v2);
void cha_vector(struct Vector v1, struct Vector v2);
void naejeok_vector(struct Vector v1, struct Vector v2);
void wejeok_vector(struct Vector v1, struct Vector v2);


int main()
{
	struct Vector v1;
	struct Vector v2;
	int ans;

	printf("ù ��° ���� �Է�(x, y, z): ");
	scanf_s("%d, %d, %d", &v1.x, &v1.y, &v1.z);
	printf("�� ��° ���� �Է�(x, y, z): ");
	scanf_s("%d, %d, %d,", &v2.x, &v2.y, &v2.z);

	printf("�Էµ� ù��° ����: %d, %d, %d\n", v1.x, v1.y , v1.z);
	printf("�Էµ� �ι�° ����: %d, %d, %d\n\n", v2.x, v2.y, v2.z);


	while (1) {
		printf("-----------------------\n");
		printf("1. ������ ��\n2. ������ ��\n3.������ ����\n4.������ ����\n5.����\n");
		printf("-----------------------\n");
		printf("��� �Է�: ");
		scanf_s("%d", &ans);


		if (ans == 1) {
			sum_vector(v1,v2);
		}
		else if (ans == 2) {
			cha_vector(v1,v2);
		}
		else if (ans == 3) {
			wejeok_vector(v1,v2);
		}
		else if (ans == 4) {
			naejeok_vector(v1,v2);
		}
		else{
			return 0;
		}
	}
	
}

void sum_vector(struct Vector v1, struct Vector v2)
{
	printf("������ ���� v1 + v2 = (%d, %d, %d)\n", v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
	printf("-----------------------\n");
}

void cha_vector(struct Vector v1, struct Vector v2)
{
	printf("������ ���� v1 - v2 = (%d, %d, %d)\n", v1.x - v2.x, v1.y - v2.y, v1.z - v2.z);
	printf("-----------------------\n");
}

void wejeok_vector(struct Vector v1, struct Vector v2)
{
	printf("������ ������ x:%d y:%d z:%d \n", (v1.y*v2.z)-(v1.z*v2.y), (v1.z * v2.x) - (v1.x * v2.z), (v1.x * v2.y) - (v1.y * v2.x));
	printf("-----------------------\n");
}

void naejeok_vector(struct Vector v1, struct Vector v2)
{
	printf("������ ������ vec1 . vec2=%d \n",v1.x*v2.x+v1.y*v2.y+v1.z*v2.z);
	printf("-----------------------\n");
}
