#include<stdio.h>

int main()
{
	
	char (*word_pointer)[100]; 
	int count=0;
	char word[100]; 
	word_pointer = &word;


	printf("문자열 입력: ");
	scanf_s("%s", word, sizeof(word));

	

	for (int i = 0; (*word_pointer)[i]!= NULL; i++) {

		count += 1; //역출력을 위한 글자수 저장
	}

	for (int i = count-1; i >= 0; i--) {   //역출력
		printf("%c", (*word_pointer)[i]);
	}

	return 0;
}

