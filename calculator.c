#include <stdio.h>



int main() {
    char math;
    int num1, num2;
    printf("Masukkan Operasi (+, -, *,): ");
    scanf("%c", &math);
    scanf("%d %d", &num1, &num2);

    switch (math) {
    case '+':
        printf("%d + %d = %d", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%d - %d = %d", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%d * %d = %d", num1, num2, num1 * num2);
        break;
    case '/':
        printf("%d / %d = %d", num1, num2, num1 / num2);
        break;
        
    default:
        printf("Masukan salah");
    }

    return 0;
}
