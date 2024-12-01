#include<stdio.h>

int solution(int n)
{
    int k = n, result = 0;

    while (k >= 1) {
        if (k % 2 == 0) { //k가 짝수인 경우

            if (k / 2 >= 1) { //순간이동을 할때 남은 범위값이 n 범위 내일때만 순간이동.
                k /= 2;
            }
            else {
                k -= 1;
                result += 1;
            }

        }
        else { //k가 홀수인 경우
            k -= 1;
            result += 1;
        }
    }
    return result;
}