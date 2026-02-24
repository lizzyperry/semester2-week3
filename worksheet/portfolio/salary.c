
#include <stdio.h>

/*
 * Potrfolio submission
 * Name:Elizabeth Perry
 * ID: 201952237
 */

 int main( void ) {

    // define and initialise variables for the problem data salary=£24000, NI=8%, tax=20% 
    double salary = 36250.0;
    double ni_rate = 8.0;
    double tax_rate = 15.0;
    double ni_contribution;
    double tax_contribution;
    double take_home_salary;
    double salary_after_ni;
    double taxable_amount;

    // calculate the deductions and final take-home salary
    ni_contribution = salary * (ni_rate / 100.0);
    salary_after_ni = salary - ni_contribution;
    if (salary_after_ni > 12500.0) {
        taxable_amount = salary_after_ni - 12500.0;
        tax_contribution = taxable_amount * (tax_rate / 100.0);
    } else {
        tax_contribution = 0.0;
    }
    take_home_salary = salary_after_ni - tax_contribution;

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f\n", salary);
    printf("NI contribution £%.2f\n", ni_contribution);
    printf("Tax contribution £%.2f\n", tax_contribution);
    printf("Take home salary £%.2f\n", take_home_salary);

    return 0;
 }