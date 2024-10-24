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

	printf("첫 번째 벡터 입력(x, y, z): ");
	scanf_s("%d, %d, %d", &v1.x, &v1.y, &v1.z);
	printf("두 번째 벡터 입력(x, y, z): ");
	scanf_s("%d, %d, %d,", &v2.x, &v2.y, &v2.z);

	printf("입력된 첫번째 벡터: %d, %d, %d\n", v1.x, v1.y , v1.z);
	printf("입력된 두번째 벡터: %d, %d, %d\n\n", v2.x, v2.y, v2.z);


	while (1) {
		printf("-----------------------\n");
		printf("1. 벡터의 합\n2. 벡터의 차\n3.벡터의 외적\n4.벡터의 내적\n5.종료\n");
		printf("-----------------------\n");
		printf("명령 입력: ");
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
	printf("벡터의 합은 v1 + v2 = (%d, %d, %d)\n", v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
	printf("-----------------------\n");
}

void cha_vector(struct Vector v1, struct Vector v2)
{
	printf("벡터의 차는 v1 - v2 = (%d, %d, %d)\n", v1.x - v2.x, v1.y - v2.y, v1.z - v2.z);
	printf("-----------------------\n");
}

void wejeok_vector(struct Vector v1, struct Vector v2)
{
	printf("벡터의 외적은 x:%d y:%d z:%d \n", (v1.y*v2.z)-(v1.z*v2.y), (v1.z * v2.x) - (v1.x * v2.z), (v1.x * v2.y) - (v1.y * v2.x));
	printf("-----------------------\n");
}

void naejeok_vector(struct Vector v1, struct Vector v2)
{
	printf("벡터의 내적은 vec1 . vec2=%d \n",v1.x*v2.x+v1.y*v2.y+v1.z*v2.z);
	printf("-----------------------\n");
}
