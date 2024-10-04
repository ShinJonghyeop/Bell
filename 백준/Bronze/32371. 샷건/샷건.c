#include <stdio.h>
#include <string.h>

#define ROWS 4
#define COLS 10

int main() {
    char keyboard[ROWS][COLS + 1]; // 4x10 키보드 배열 (널 종료 포함)
    char input[10]; // 입력된 문자열 (최대 9개 문자)
    
    // 키보드 입력
    for (int i = 0; i < ROWS; i++) {
        scanf("%s", keyboard[i]);
    }

    // 메모장에 입력된 문자열
    scanf("%s", input);

    // 9개의 문자가 포함된 키의 위치를 찾기 위한 변수
    int foundRow = -1, foundCol = -1;

    // 키보드 배열을 탐색하여 9개의 문자가 포함된 3x3 영역 찾기
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            // 현재 키를 중심으로 3x3 영역에서 문자를 확인
            int matchCount = 0;
            for (int dr = -1; dr <= 1; dr++) {
                for (int dc = -1; dc <= 1; dc++) {
                    int nr = r + dr; // 새로운 행
                    int nc = c + dc; // 새로운 열
                    // 경계 내에 있는지 확인
                    if (nr >= 0 && nr < ROWS && nc >= 0 && nc < COLS) {
                        // 3x3 영역의 키가 입력된 문자열에 있는지 체크
                        for (int i = 0; i < strlen(input); i++) {
                            if (keyboard[nr][nc] == input[i]) {
                                matchCount++;
                                break; // 이미 매치된 경우 더 이상 체크하지 않음
                            }
                        }
                    }
                }
            }

            // 9개의 문자가 모두 매치되면 중심 키의 위치 저장
            if (matchCount == 9) {
                foundRow = r;
                foundCol = c;
                break; // 찾으면 루프 탈출
            }
        }
        if (foundRow != -1) break; // 키가 발견되면 루프 탈출
    }

    // 관우가 내리친 키 출력
    if (foundRow != -1 && foundCol != -1) {
        printf("%c\n", keyboard[foundRow][foundCol]); // 중심 키 출력
    }

    return 0;
}
