# include <stdio.h>

int main() {

    // we get two number and operator from user
    float num1, num2;
    char operator;

    printf("Enter the 1st number : ");
    scanf("%f", &num1);
    printf("Enter the 2st number : ");
    scanf("%f", &num2);
    printf("Which performance do you want : ");
    scanf(" %c", &operator);

    // we calculate the performance
    switch (operator){
    case '+':
        printf("Your addition is : %.2f.\n", num1+num2);
        break;

    case '-':
        printf("Your subtraction is : %.2f.\n", num1-num2);
        break;

    case '*': 
        printf("Your multiplication is : %.2f.\n", num1*num2);
        break;

    case '/':
        if (num2 != 0) {
            printf("Your division is : %.2f.\n", num1/num2);
        } else {
            printf("The division is not difine.\n");
        }
        break;

    default:
        printf("Operator is not valid.");
        break;

    }

    return 0;

}