#include <stdio.h>
#include <string.h>

int main() {
    printf("*************************************************************\n");
    printf("*******Welcome to a Simple Calculator*******\n");
    printf("*************************************************************\n\n");

    char name[50] = "";
    char operation = '\0';
    int num_one = 0;
    int num_two = 0;
    float total = 0.0f;


    printf("Enter your fullname: ");
    fgets(name, sizeof(name), stdin);
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    printf("Enter the first number: ");
    scanf("%d", &num_one);

    printf("Enter the second number: ");
    scanf("%d", &num_two);

    printf("Choose your operation (+ - * /): ");
    scanf(" %c", &operation);

    switch (operation)
    {
    case '+':
        total = num_one + num_two;
        printf("The total is %f\n", total);
        break;
    case '-':
        total = num_one - num_two;
        printf("The total is %f\n", total);
        break;
    case '*':
        total = (float)num_one * (float)num_two;
        printf("The total is %f\n", total);
        break;
    case '/':
        if (num_two == 0) {
            printf("Error: division by zero\n");
        } else {
            total = (float)num_one / (float)num_two;
            printf("The total is %f\n", total);
        }
        break;

    case '%':
        if (num_two == 0) {
            printf("Error: division by zero\n");
        } else {
            total = num_one % num_two;
            printf("The total is %f\n", total);
        }
        break;
    default:
        printf("Unknown operation: %c\n", operation);
        break;
    }

    return 0;
}