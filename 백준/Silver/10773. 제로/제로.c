#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int* data;    
    int top;      
    int capacity; 
} StackType;

void init_stack(StackType* s) {
    s->capacity = 10; 
    s->data = (int*)malloc(sizeof(int) * s->capacity);
    s->top = -1;
}

void resize(StackType* s) {
    s->capacity *= 2; 
    s->data = (int*)realloc(s->data, sizeof(int) * s->capacity);
}

void push(StackType* s, int item) {
    if (s->top + 1 >= s->capacity) {
        resize(s); 
    }
    s->data[++(s->top)] = item;
}

void pop(StackType* s) {
    if (s->top >= 0) {
        s->top--; 
    }
}

void free_stack(StackType* s) {
    free(s->data); 
}

int main(void) {
    StackType s;
    init_stack(&s);
    
    int K;
    scanf("%d", &K);
    
    for (int i = 0; i < K; i++) {
        int num;
        scanf("%d", &num);
        
        if (num == 0) {
            pop(&s); 
        } else {
            push(&s, num); 
        }
    }
 
    int sum = 0;
    for (int i = 0; i <= s.top; i++) {
        sum += s.data[i];
    }
    printf("%d\n", sum); 
    free_stack(&s); 
    return 0;
}
