#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char data[MAX];
    int top;
} Stack;

void push(Stack *s, char c) {
    if (s->top < MAX - 1) s->data[++(s->top)] = c;
}

char pop(Stack *s) {
    if (s->top >= 0) return s->data[(s->top)--];
    return '\0';
}

int isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}

int isBalanced(char *expr) {
    Stack s;
    s.top = -1;
    for (int i = 0; i < strlen(expr); i++) {
        char c = expr[i];
        if (c == '(' || c == '[' || c == '{')
            push(&s, c);
        else if (c == ')' || c == ']' || c == '}') {
            char open = pop(&s);
            if (!isMatching(open, c)) return 0;
        }
    }
    return s.top == -1;
}

int main() {
    char *expressions[] = {
        "a + (b - c) * (d",
        "m + [a - b * (c + d * {m})]",
        "a + (b - c)"
    };

    for (int i = 0; i < 3; i++) {
        printf("Expression: %s\n", expressions[i]);
        printf("Balanced: %s\n\n", isBalanced(expressions[i]) ? "Yes" : "No");
    }
    return 0;
}
