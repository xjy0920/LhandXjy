#include <stdio.h>
#include <string.h>
int calculate(int a, int b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case 'x': return a * b;
        case '/': return b ? a / b : 0;
        default: return 0;
    }}
int main() {
    char input[100];

    gets(input);

    int a, b, result;
    char op;

    if (sscanf(input, "%d %c %d", &a, &op, &b) != 3)
        return 1;

    result = calculate(a, b, op);
    printf("Result: %d\n", result);

    return 0;}