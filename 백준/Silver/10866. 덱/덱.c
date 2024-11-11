#include <stdio.h>
#include <string.h>

#define MAX 10000

int deque[MAX];
int front = 0, rear = 0;

void push_front(int x) {
    front = (front - 1 + MAX) % MAX;
    deque[front] = x;
}

void push_back(int x) {
    deque[rear] = x;
    rear = (rear + 1) % MAX;
}

int pop_front() {
    if (front == rear) {
        return -1;
    } else {
        int value = deque[front];
        front = (front + 1) % MAX;
        return value;
    }
}

int pop_back() {
    if (front == rear) {
        return -1;
    } else {
        rear = (rear - 1 + MAX) % MAX;
        return deque[rear];
    }
}

int size() {
    return (rear - front + MAX) % MAX;
}

int empty() {
    return front == rear ? 1 : 0;
}

int get_front() {
    if (front == rear) {
        return -1;
    } else {
        return deque[front];
    }
}

int get_back() {
    if (front == rear) {
        return -1;
    } else {
        return deque[(rear - 1 + MAX) % MAX];
    }
}

int main() {
    int n;
    scanf("%d", &n);

    char command[20];
    for (int i = 0; i < n; i++) {
        scanf("%s", command);

        if (strcmp(command, "push_front") == 0) {
            int x;
            scanf("%d", &x);
            push_front(x);
        } else if (strcmp(command, "push_back") == 0) {
            int x;
            scanf("%d", &x);
            push_back(x);
        } else if (strcmp(command, "pop_front") == 0) {
            printf("%d\n", pop_front());
        } else if (strcmp(command, "pop_back") == 0) {
            printf("%d\n", pop_back());
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
