#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef int element;

typedef struct {
    element* data;   
    int top;         
    int capacity;    
} StackType;

// 스택 초기화 함수
void init_stack(StackType* s) {
    s->capacity = 2; 
    s->data = (element*)malloc(sizeof(element) * s->capacity);
    if (s->data == NULL) {
        fprintf(stderr, "메모리 할당 에러\n");
        exit(1);
    }
    s->top = -1;
}

// 공백 상태 검출 함수
int is_empty(StackType* s) {
    return (s->top == -1);
}

// 포화 상태 검출 함수
int is_full(StackType* s) {
    return (s->top == (s->capacity - 1));
}

// 스택 용량 증가 함수
void resize(StackType* s) {
    s->capacity *= 2; // 용량 두 배로 증가
    s->data = (element*)realloc(s->data, sizeof(element) * s->capacity);
    if (s->data == NULL) {
        fprintf(stderr, "메모리 재할당 에러\n");
        exit(1);
    }
}

// 삽입 함수
void push(StackType* s, element item) {
    if (is_full(s)) {
        resize(s); 
    }
    s->data[++(s->top)] = item;
}

// 삭제 함수
element pop(StackType* s) {
    if (is_empty(s)) {
        return -1; 
    }
    return s->data[(s->top)--];
}

// Peek 함수
element peek(StackType* s) {
    if (is_empty(s)) {
        return -1; 
    }
    return s->data[s->top];
}

// 스택에 있는 정수의 개수를 반환하는 함수
int count(StackType* s) {
    return s->top + 1; 
}

// 스택 해제 함수
void free_stack(StackType* s) {
    free(s->data);
}

int main(void) {
    StackType s;
    init_stack(&s);
    int N, cmd, X;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &cmd);
        switch (cmd) {
            case 1:
                scanf("%d", &X);
                push(&s, X);
                break;
            case 2:
                printf("%d\n", pop(&s)); 
                break;
            case 3:
                printf("%d\n", count(&s)); 
                break;
            case 4:
                printf("%d\n", is_empty(&s) ? 1 : 0); 
                break;
            case 5:
                printf("%d\n", peek(&s));
                break;
        }
    }
    
    free_stack(&s); 
    return 0;
}
