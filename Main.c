#include <stdio.h>
#include <math.h>

int main()
{
    float decider, a_decider = 0;
    int num[2];
    char op;
    int result;
    printf("welcome to the C Calculator!\n\nChoose any one:\nEnter \'1\' for Arithmetics\nEnter \'2\' for Matrix operations\nEnter \'3\' to solve Quadractic equations\n");

    printf("Enter your choice:");
    scanf_s("%f", &decider);

    if (decider == 1) {
        printf("Enter your first number:");
        scanf_s("%d", &num[0]);
        printf("Enter your second number:");
        scanf_s("%d", &num[1]);
        printf("Enter operator:");
        scanf_s(" a%c", &op, 1);
      
        switch (op) {
        case '+': printf("The result is: %d", num[0] + num[1]);
            result = num[0] + num[1];
            break;
        case '-': printf("The result is: %d", num[0] - num[1]);
            result = num[0] - num[1];
            break;
        case '/': printf("The result is: %d", num[0] / num[1]);
            result = num[0] / num[1];
            break;
        case '*': printf("The result is: %d", num[0] * num[1]);
            result = num[0] * num[1];
            break;
        case '%': printf("The result is: %d", num[0] % num[1]);
            result = num[0] % num[1];
            break;
        default: printf("Invalid operator");
        }

        if (op == '+' || op == '-' || op == '*' || op == '/' || op == '%') {
            printf("\nOperate with result?\nEnter:\n1 for yes\n0 for no\n");
            scanf_s("%d", &a_decider);
        }
        if (a_decider == 1) {
            while (a_decider == 1) {
                printf("Enter the next Number:");
                scanf_s("%d", &num[1]);
                printf("Enter operator:");
                scanf_s(" %c", &op, 1);
                switch (op) {
                case '+': printf("The result is: %d", result + num[1]);
                    result = result + num[1];
                    break;
                case '-': printf("The result is: %d", result - num[1]);
                    result = result - num[1];
                    break;
                case '/': printf("The result is: %d", result / num[1]);
                    result = result / num[1];
                    break;
                case '*': printf("The result is: %d", result * num[1]);
                    result = result * num[1];
                    break;
                case '%': printf("The result is: %d", result % num[1]);
                    result = result % num[1];
                    break;
                default: printf("Invalid operator");
                }
                if (op == '+' || op == '-' || op == '*' || op == '/' || op == '%') {
                    printf("\nOperate with result?\nEnter:\n1 for yes\n0 for no\n");
                    scanf_s("%d", &a_decider);
                }

            }
        }
    }
    else if (decider == 2) {
        printf("Only 2x2 or 3x3 matrices are supported\n");
        printf("Matrix Dimension\n2x2 or 3x3\nfor 2x2 enter 1\nfor 3x3 enter 0\n");
        scanf_s("%d", &decider);

        if (decider == 1) {
            int matA[2][2];
            int matB[2][2];
            int p[2][2];

            printf("Enter A11\n");
            scanf_s("%d", &matA[0][0]);
            printf("Enter A12\n");
            scanf_s("%d", &matA[0][1]);
            printf("Enter A21\n");
            scanf_s("%d", &matA[1][0]);
            printf("Enter A22\n");
            scanf_s("%d", &matA[1][1]);

            printf("Enter B11\n");
            scanf_s("%d", &matB[0][0]);
            printf("Enter B12\n");
            scanf_s("%d", &matB[0][1]);
            printf("Enter B21\n");
            scanf_s("%d", &matB[1][0]);
            printf("Enter B22\n");
            scanf_s("%d", &matB[1][1]);

            printf("Enter operator:");
            scanf_s(" %c", &op, 1);

            switch (op) {
            case '+': printf("%d %d\n%d %d", matA[0][0] + matB[0][0], matA[0][1] + matB[0][1], matA[1][0] + matB[1][0], matA[1][1] + matB[1][1]);
                break;
            case '-': printf("%d %d\n%d %d", matA[0][0] - matB[0][0], matA[0][1] - matB[0][1], matA[1][0] - matB[1][0], matA[1][1] - matB[1][1]);
                break;
            case '*': p[0][0] = matA[0][0] * matB[0][0] + matA[0][1] * matB[1][0];
                      p[0][1] = matA[0][0] * matB[0][1] + matA[0][1] * matB[1][1];
                      p[1][0] = matA[1][0] * matB[0][0] + matA[1][1] * matB[1][0];
                      p[1][1] = matA[1][0] * matB[0][1] + matA[1][1] * matB[1][1];
                      printf("%d %d\n%d %d", p[0][0], p[0][1], p[1][0], p[1][1]);
                      break;
            default: printf("Invalid operator");
            }

        }
        if (decider == 0) {
            int matA[3][3];
            int matB[3][3];
            int p[3][3];

            printf("Enter A11:\n");
            scanf_s("%d", &matA[0][0]);
            printf("Enter A12:\n");
            scanf_s("%d", &matA[0][1]);
            printf("Enter A13:\n");
            scanf_s("%d", &matA[0][2]);
            printf("Enter A21:\n");
            scanf_s("%d", &matA[1][0]);
            printf("Enter A22:\n");
            scanf_s("%d", &matA[1][1]);
            printf("Enter A23:\n");
            scanf_s("%d", &matA[1][2]);
            printf("Enter A31:\n");
            scanf_s("%d", &matA[2][0]);
            printf("Enter A32:\n");
            scanf_s("%d", &matA[2][1]);
            printf("Enter A33:\n");
            scanf_s("%d", &matA[2][2]);

            printf("Enter B11:\n");
            scanf_s("%d", &matB[0][0]);
            printf("Enter B12:\n");
            scanf_s("%d", &matB[0][1]);
            printf("Enter B13:\n");
            scanf_s("%d", &matB[0][2]);
            printf("Enter B21:\n");
            scanf_s("%d", &matB[1][0]);
            printf("Enter B22:\n");
            scanf_s("%d", &matB[1][1]);
            printf("Enter B23:\n");
            scanf_s("%d", &matB[1][2]);
            printf("Enter B31:\n");
            scanf_s("%d", &matB[2][0]);
            printf("Enter B32:\n");
            scanf_s("%d", &matB[2][1]);
            printf("Enter B33:\n");
            scanf_s("%d", &matB[2][2]);

            printf("Enter operator:");
            scanf_s(" %c", &op, 1);

            switch (op) {
            case '+': printf("%d %d %d\n%d %d %d\n%d %d %d", matA[0][0] + matB[0][0], matA[0][1] + matB[0][1],matA[0][2]+matB[0][2], matA[1][0] + matB[1][0], matA[1][1] + matB[1][1], matA[1][2]+matB[1][2], matA[2][0] + matB[2][0], matA[2][1] + matB[2][1], matA[2][2] + matB[2][2]);
                break;
            case '-': printf("%d %d %d\n%d %d %d\n%d %d %d", matA[0][0] - matB[0][0], matA[0][1] - matB[0][1], matA[0][2] - matB[0][2], matA[1][0] - matB[1][0], matA[1][1] - matB[1][1], matA[1][2] - matB[1][2], matA[2][0] - matB[2][0], matA[2][1] - matB[2][1], matA[2][2] - matB[2][2]);
                break;
            case '*': p[0][0] = matA[0][0] * matB[0][0] + matA[0][1] * matB[1][0]+matA[0][2]*matB[2][0];
                p[0][1] = matA[0][0] * matB[0][1] + matA[0][1] * matB[1][1]+ matA[0][2] * matB[2][1];
                p[0][2] = matA[0][0] * matB[0][2] + matA[0][1] * matB[1][2] + matA[0][2] * matB[2][2];
                p[1][0] = matA[1][0] * matB[0][0] + matA[1][1] * matB[1][0] + matA[0][2] * matB[2][0];
                p[1][1] = matA[1][0] * matB[0][1] + matA[1][1] * matB[1][1] + matA[1][2] * matB[2][1];
                p[1][2] = matA[1][0] * matB[0][2] + matA[1][1] * matB[1][2] + matA[1][2] * matB[2][2];
                p[2][0] = matA[2][0] * matB[0][0] + matA[2][1] * matB[1][0] + matA[2][2] * matB[2][0];
                p[2][1] = matA[2][0] * matB[0][1] + matA[2][1] * matB[1][1] + matA[2][2] * matB[2][1];
                p[2][2] = matA[2][0] * matB[0][2] + matA[2][1] * matB[1][2] + matA[2][2] * matB[2][2];
                printf("%d %d %d\n%d %d %d\n%d %d %d", p[0][0], p[0][1], p[0][2], p[1][0], p[1][1], p[1][2], p[2][0], p[2][1], p[2][2]);
                break;
            default: printf("Invalid operator");
            }

        }
    }
    else if (decider == 3) {
        float a, b, c, buffer;
        printf("Consider Quadractic equation\nax^2+bx+c\n");
        printf("Enter a,b,c:\n");
        scanf_s("%f%f%f", &a, &b, &c);
        decider = b * b - 4 * a * c;

        if (decider >= 0) {
            buffer = sqrt(decider);
            num[0] = (-b + buffer) / 2 * a;
            num[1]= (-b - buffer) / 2 * a;
            printf("The two roots are %d and %d\n", num[1], num[0]);
        }
        else {
            printf("No real roots");
        }

    }
    else {
        printf("Invalid Choice");
    }

    return 0;
}
