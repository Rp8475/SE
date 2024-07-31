// PROGRAM 20 : DISPLAY REMAINED SALARY  - (START) 
main(){
    int salary, deductedSalary, monthlySalary,ips,lis;//IPS=INSURANCE PREMIUM SALARY , LIS=LOAN INSTALMENT SALARY
    float iPremium = 0.10, lInstallment = 0.10;
    char a='%';

    printf("Enter Monthly salary : ");
    scanf("%d", &salary);
    
    ips=salary*iPremium;
    lis=salary*lInstallment;
    
    printf("\nDeduct 10%c Insurance Premium from Salary %d \n", a,ips);
    printf("\nDeduct 10%c loan Installment from Salary %d \n", a,lis);

    deductedSalary = salary * (iPremium + lInstallment);
    monthlySalary = salary - deductedSalary;

    printf("\nRemained Salary of user after deducted by Insurance Premium & Loan Installment is %d", monthlySalary);
}
// PROGRAM 20 : DISPLAY REMAINED SALARY  - (END) 
