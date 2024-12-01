#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// topping_len�� �迭 topping�� �����Դϴ�.
int solution(int topping[], size_t topping_len) {
    int answer = 0;
    int left_topping[10000 + 1] = { 0, }, right_topping[10000 + 1] = { 0, };
    int left_num = 0, right_num = 0;


    for (int i = 0; i < topping_len; i++) { //������ ��� ������ �������� ���
        if (right_topping[topping[i]] == 0) { //������ ����=i��° ����
            right_num++; //���ο� ������ ���� ��� ������ �Դ� ���� ������ ����
        }
        right_topping[topping[i]]++;
    }


    for (int i = 0; i < topping_len; i++) { 
        right_topping[topping[i]]--; 
        if (right_topping[topping[i]] == 0) {
            right_num--; //���ο� ������ ���� ��� ������ �Դ� ���� ������ ����
        }
        if (left_topping[topping[i]] == 0) {
            left_num++;
        }
        left_topping[topping[i]]++;
        if (left_num == right_num) { //������ ������ ���� ��ġ�� ���
            answer++;
        }
    }

    return answer;
}


