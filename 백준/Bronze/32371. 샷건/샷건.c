#include <stdio.h>
#include <string.h>

#define ROWS 4
#define COLS 10

int main() {
    char keyboard[ROWS][COLS + 1]; 
    char input[10]; 
    
    for (int i = 0; i < ROWS; i++) {
        scanf("%s", keyboard[i]);
    }
    scanf("%s", input);
    int foundRow = -1, foundCol = -1;

    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            int matchCount = 0;
            for (int dr = -1; dr <= 1; dr++) {
                for (int dc = -1; dc <= 1; dc++) {
                    int nr = r + dr; 
                    int nc = c + dc; 
                    if (nr >= 0 && nr < ROWS && nc >= 0 && nc < COLS) {
                        for (int i = 0; i < strlen(input); i++) {
                            if (keyboard[nr][nc] == input[i]) {
                                matchCount++;
                                break; 
                            }
                        }
                    }
                }
            }
            if (matchCount == 9) {
                foundRow = r;
                foundCol = c;
                break; 
            }
        }
        if (foundRow != -1) break; 
    }

    if (foundRow != -1 && foundCol != -1) {
        printf("%c\n", keyboard[foundRow][foundCol]);
    }

    return 0;
}
