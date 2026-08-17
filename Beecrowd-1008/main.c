#include <stdio.h>

int main() {
    int number, hours;
    float salaryPerHour, salary;

    scanf("%d", &number);
    scanf("%d", &hours);
    scanf("%f", &salaryPerHour);

    salary = hours * salaryPerHour;

    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}
