#include <stdio.h>
#include <stdlib.h>

int main() {
    int firstnumber, secondNumber;
    printf("Enter with first number (integer): ");
    scanf("%d", &firstnumber);

    printf("Enter with second number (integer): ");
    scanf("%d", &secondNumber);

    int sum = (firstnumber + secondNumber);
    int subtraction = (firstnumber - secondNumber);
    int multiplication = (firstnumber * secondNumber);
    int division = (firstnumber / secondNumber);
    int restDivision = (firstnumber % secondNumber);

    printf("\n\n* The sum between '%d' + '%d' = '%d'\n", firstnumber, secondNumber, sum);
    printf("* The subtraction between '%d' - '%d' = '%d'\n", firstnumber, secondNumber, subtraction);
    printf("* The multiplication hetween '%d' * '%d' = '%d'\n", firstnumber, secondNumber, multiplication);
    printf("* The division between '%d' / '%d' = '%d'\n", firstnumber, secondNumber, division);
    printf("* The rest of the division between '%d' %% '%d' = '%d'\n\n", firstnumber, secondNumber, restDivision);
    
    return 0;
}