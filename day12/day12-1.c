#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// topping_len은 배열 topping의 길이입니다.
int solution(int topping[], size_t topping_len) {
    int answer = 0;
    int left_topping[10000 + 1] = { 0, }, right_topping[10000 + 1] = { 0, };
    int left_num = 0, right_num = 0;


    for (int i = 0; i < topping_len; i++) { //동생이 모두 토핑을 가져가는 경우
        if (right_topping[topping[i]] == 0) { //토핑의 개수=i번째 토핑
            right_num++; //새로운 토핑을 먹을 경우 동생이 먹는 토핑 가지수 증가
        }
        right_topping[topping[i]]++;
    }


    for (int i = 0; i < topping_len; i++) { 
        right_topping[topping[i]]--; 
        if (right_topping[topping[i]] == 0) {
            right_num--; //새로운 토핑을 먹을 경우 동생이 먹는 토핑 가지수 감소
        }
        if (left_topping[topping[i]] == 0) {
            left_num++;
        }
        left_topping[topping[i]]++;
        if (left_num == right_num) { //토핑의 종류가 서로 일치한 경우
            answer++;
        }
    }

    return answer;
}


