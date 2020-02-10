#include <iostream>

using namespace std;
// define vars
float basicSalary, deductions,paye,nhif,loan,otherBenefits,houseAllowance,mileage,additionalIncome,netPay,takeHome;

int main()
{
    // get salary input
    cout<<"Enter Basic Salary: \t\n";
    cin>>basicSalary;
    // calculate deductions
    cout<<"Calculate deductions..\n";
    paye = (20/100)*basicSalary;
    nhif = (2/100)*basicSalary;
    loan = (15/100)*basicSalary;

    deductions = paye+nhif+loan;

    cout<<"..........Deductions..........\n";
    cout<<"Basic Salary "<<basicSalary<<"\n";
    cout<<"P.A.Y.E "<<paye<<"\n";
    cout<<"N.H.I.F "<<nhif<<"\n";
    cout<<"Loan Interest "<<loan<<"\n";
    cout<<"Total Deductions "<<deductions<<"\n";
    cout<<"\n";
    cout<<"Calculate benefits..\n";
    houseAllowance = (12.5/100)*basicSalary;
    mileage = (3.5/100)*basicSalary;
    otherBenefits = houseAllowance+mileage;
    cout<<"........Other Benefits.........";
    cout<<"House Allowance "<<houseAllowance<<"\n";
    cout<<"Mileage "<<mileage<<"\n";
    cout<<"Total Additional Income "<<otherBenefits<<"\n";
    cout<<"\n";
    netPay = basicSalary-deductions;
    cout<<"NET Salary "<<netPay<<"\n";
    takeHome = netPay+otherBenefits;
    cout<<"Total take-home "<<takeHome<<"\n";
    cout<<"..........END...................\n";

    return 0;
}
