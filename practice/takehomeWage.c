#include <stdio.h>

double convertPercentToDecimal(int, double);

double convertPercentToDecimal(int percentValue, double total)
{
    double result;

    /** 
     * The reason 100 has a (double) typecast or decimal point behind it is because C will return an integer if two intergers divide each other
     * so we need to convert the denomimator to a float or double so that we can get our expected result. 
     * It can be done by typecasting it or adding .0 to the number
     * integer/integer = integer, (double or float)/integer = (double or float) and integer/(double or float) = (double or float)
    */

    result = (percentValue / (double)100) * total;
    
    return result;
}

int main()
{
    /**
     * Input data =
     * Employee number
     * Employee name
     * Basic salary
     * Housing allowance
     * Transport allowance
    */

    char employeeNumber[20];
    char employeeName[20];
    double allowanceForHousing;
    double allowanceForTransport;
    double totalAllowance;
    double basicSalary;
    double basicSalaryAfterTax;
    double grossPay;
    double grossPayAfterPension;
    double netPay;

    const int taxBracket = 5000;
    double tax = 0;

    double pension = 0;

     printf("Enter employee's name: ");
    // scanf("%s", employeeName);
    fgets(employeeName, 20, stdin);

    
    printf("Enter employee's number: ");
    scanf("%s", employeeNumber);

    printf("Enter housing allowance: ");
    scanf("%lf", &allowanceForHousing);

    printf("Enter transfort allowance: ");
    scanf("%lf", &allowanceForTransport);

    printf("Enter basic salary: ");
    scanf("%lf", &basicSalary);

    totalAllowance = allowanceForHousing + allowanceForTransport;

    if (basicSalary <= taxBracket){
        /**
         * We need to substract 5% of the basic salary by converting the 5% to its decimal value 
         * then substracting the decimal value from basic salary to get the tax value.
        */
        tax = convertPercentToDecimal(5, basicSalary);
        basicSalaryAfterTax = basicSalary - tax;

        // printf("Basic Salary After Tax: %lf \n", basicSalaryAfterTax);
    } else {

        tax = convertPercentToDecimal(8, basicSalary);
        basicSalaryAfterTax = basicSalary - tax;

        // printf("Basic Salary After Tax 2: %lf \n", basicSalaryAfterTax);
    }

    grossPay = basicSalary + totalAllowance;

    //deduct 10% from gross pay
    // printf("Gross pay: %lf \n", grossPay);

    pension = convertPercentToDecimal(10, grossPay);
    grossPayAfterPension = grossPay - pension;

    // printf("Gross Pay After Pension: %lf \n", grossPayAfterPension);

    //generate the net pay from tax and pension
    netPay = grossPay - (tax + pension);

    // printf("Net pay: %lf \n", netPay);

    printf("\n");
    printf("\n");
    printf("===== Pay Slip for the month of March start ===== \n");
    printf("\n");
    printf("Employee's number is: %s \n", employeeNumber);
    printf("\n");
    printf("Employee's name is: %s \n", employeeName);
    printf("\n");
    printf("Total allowance is: ₦%lf \n", totalAllowance);
    printf("\n");
    printf("Tax is: ₦%lf \n", tax);
    printf("\n");
    printf("Basic salary is: ₦%lf \n", basicSalary);
    printf("\n");
    printf("Gross pay is: ₦%lf \n", grossPay);
    printf("\n");
    printf("Net pay is: ₦%lf \n", netPay);
    printf("\n");
    printf("===== Pay Slip for the month of March end ===== \n");
    printf("\n");
    printf("\n");

    return 0;
}