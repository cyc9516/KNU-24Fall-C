#include<stdio.h>

int solution(int n)
{
    int k = n, result = 0;

    while (k >= 1) {
        if (k % 2 == 0) { //k�� ¦���� ���

            if (k / 2 >= 1) { //�����̵��� �Ҷ� ���� �������� n ���� ���϶��� �����̵�.
                k /= 2;
            }
            else {
                k -= 1;
                result += 1;
            }

        }
        else { //k�� Ȧ���� ���
            k -= 1;
            result += 1;
        }
    }
    return result;
}