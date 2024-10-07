//파일 포인터 변수는 왜 &를 사용할까?????
#include<stdio.h>
int main()
{
	FILE* fp = NULL;
	fopen_s(&fp, "data.txt", "wt"); //wt=파일 쓰기, rt=파일 읽기

	fprintf(fp, "%d %d %d \n", 100, 200, 300);
	fprintf(fp, "%d %d %d \n", 400, 500, 600);

	fclose(fp);
	return 0;
}