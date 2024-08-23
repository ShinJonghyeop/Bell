#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 20000
#define MAX_LENGTH 51

typedef struct {
    char word[MAX_LENGTH];
} Word;

int compare(const void* a, const void* b) {
    Word* wordA = (Word*)a;
    Word* wordB = (Word*)b;

    if (strlen(wordA->word) != strlen(wordB->word)) {
        return strlen(wordA->word) - strlen(wordB->word);
    }
    return strcmp(wordA->word, wordB->word);
}

int main() {
    int N;
    scanf("%d", &N);

    Word words[MAX_WORDS];
    int count = 0;

    for (int i = 0; i < N; i++) {
        char temp[MAX_LENGTH];
        scanf("%s", temp);

        int isDuplicate = 0;
        for (int j = 0; j < count; j++) {
            if (strcmp(words[j].word, temp) == 0) {
                isDuplicate = 1;
                break;
            }
        }

        if (!isDuplicate) {
            strcpy(words[count].word, temp);
            count++;
        }
    }

    qsort(words, count, sizeof(Word), compare);

    for (int i = 0; i < count; i++) {
        printf("%s\n", words[i].word);
    }

    return 0;
}
