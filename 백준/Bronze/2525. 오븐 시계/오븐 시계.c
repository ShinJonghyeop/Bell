#include <stdio.h>

int main() {
    int A, B, C;
    int endHour, endMinute;

    // 현재 시각 입력 받기
    scanf("%d %d", &A, &B);

    // 요리 시간 입력 받기
    scanf("%d", &C);

    // 종료 시각 계산하기
    endMinute = B + C;
    endHour = A + (endMinute / 60);
    endMinute = endMinute % 60;

    // 시간이 24시를 넘어가는 경우 처리하기
    if (endHour >= 24) {
        endHour -= 24;
    }

    // 결과 출력하기
    printf("%d %d", endHour, endMinute);

    return 0;
}
