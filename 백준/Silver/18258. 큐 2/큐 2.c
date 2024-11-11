#include <stdio.h>
#include <string.h>

#define MAX 2000000

int queue[MAX];
int front = 0, rear = 0;

void push(int x) {
    queue[rear++] = x;
}

int pop() {
    if (front == rear) {
        return -1;
    } else {
        return queue[front++];
    }
}

int size() {
    return rear - front;
}

int empty() {
    return front == rear ? 1 : 0;
}

int get_front() {
    if (front == rear) {
        return -1;
    } else {
        return queue[front];
    }
}

int get_back() {
    if (front == rear) {
        return -1;
    } else {
        return queue[rear - 1];
    }
}

int main() {
    int n;
    scanf("%d", &n);

    char command[10];
    for (int i = 0; i < n; i++) {
        scanf("%s", command);

        if (strcmp(command, "push") == 0) {
            int x;
            scanf("%d", &x);
            push(x);
        } else if (strcmp(command, "pop") == 0) {
            printf("%d\n", pop());
        } else if (strcmp(command, "size") == 0) {
            printf("%d\n", size());
        } else if (strcmp(command, "empty") == 0) {
            printf("%d\n", empty());
        } else if (strcmp(command, "front") == 0) {
            printf("%d\n", get_front());
        } else if (strcmp(command, "back") == 0) {
            printf("%d\n", get_back());
        }
    }

    return 0;
}
