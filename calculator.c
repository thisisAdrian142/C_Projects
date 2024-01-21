#include <stdio.h>
#include <stdlib.h>

int main(){
    char ch;
    double a,b;
    while(1) {
        printf("Enter an operator (+, -, *, /), "
                "if want to exist press x: ");
        scanf(" %c", &ch);

        if (ch == 'x') {
            exit(0);
        } else {
            printf("Enter two first and second operand: ");
            scanf("%lf %lf", &a, &b);
        }
        switch(ch) {
            case '+':
            printf("%.2lf + %.2lf = %.2lf\n", a, b, a+b);
            break;

            case '-':
            printf("%.2lf - %.2lf = %.2lf\n", a, b, a-b);
            break;

            case '*':
            printf("%.2lf * %.2lf = %.2lf\n", a, b, a*b);
            break;

            case '/':
            printf("%.2lf / %.2lf = %.2lf\n", a, b, a/b);
            break;

            default:
            printf("Error! Please write a valid operator\n");
        }
        printf("\n");
    }
}