/*
Name: IRUNGU JAMES NDIRANGU 
Registration Number: PA106/G/28731/25
Date: 03/10/2025
Description: C Files
*/

#include <stdio.h>

int main() {
    float hours_worked, hourly_wage;
    float regular_pay, overtime_pay, gross_pay;
    float tax, net_pay;

    // Input: hours worked and hourly wage
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours_worked);
    
    printf("Enter hourly wage: ");
    scanf("%f", &hourly_wage);

    // Calculate gross pay with overtime
    if (hours_worked > 40) {
        regular_pay = 40 * hourly_wage;
        overtime_pay = (hours_worked - 40) * hourly_wage * 1.5;
        gross_pay = regular_pay + overtime_pay;
    } else {
        regular_pay = hours_worked * hourly_wage;
        overtime_pay = 0;
        gross_pay = regular_pay;
    }

    // Calculate tax: 15% on first $600, 20% on the rest
    if (gross_pay <= 600) {
        tax = gross_pay * 0.15;
    } else {
        tax = 600 * 0.15 + (gross_pay - 600) * 0.20;
    }

    // Calculate net pay
    net_pay = gross_pay - tax;

    // Output results
    printf("Gross pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", tax);
    printf("Net pay: $%.2f\n", net_pay);

    return 0;
}