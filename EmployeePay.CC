#include <iostream>
using namespace std;
#include "EmployeePay.h"

//the virtual functions
  double employee::calcPay(){
    pay = 0;
    return pay;
  }
  void employee::printCheck(){
    cout<<"Employee Number: "<<employeeNumber<<endl;;
    cout<<name<<endl;
    cout<<address<<endl;
    cout<<"Pay for work done: "<<pay<<endl; 
  }
//base class constructor
  employee::employee(int employNum, string n, string a){
    employeeNumber = employNum;
    name = n;
    address = a;  
    calcPay();
  }

//hourly employee definitions
  double hourlyEmployee::calcPay(){
    pay = hoursWorked*hourlyWage;
    return pay;
  }
  void hourlyEmployee::printCheck(){
    cout<<"Employee Number: "<<employeeNumber<<endl;;
    cout<<name<<endl;
    cout<<address<<endl;
    cout<<"Pay for work done: $"<<calcPay()<<" over "<<hoursWorked<<" hours for $"<<hourlyWage<<" per hour."<<endl; 
  }
  hourlyEmployee::hourlyEmployee(double h, double w, int empNum, string nam, string addr):employee(empNum, nam, addr){
    hoursWorked = h;
    hourlyWage = w;
    calcPay();
  }
//salaried employee
  double salariedEmployee::calcPay(){
    pay = weeksWorked*weeklySalary;
    return pay;
  }
  void salariedEmployee::printCheck(){
    cout<<"Employee Number: "<<employeeNumber<<endl;;
    cout<<name<<endl;
    cout<<address<<endl;
    cout<<"Pay for work done: $"<<calcPay()<<" over "<<weeksWorked<<" weeks for $"<<weeklySalary<<" per week."<<endl; 
  }
  salariedEmployee::salariedEmployee(double h, double w, int empNum, string nam, string addr):employee(empNum, nam, addr){
    weeksWorked = h;
    weeklySalary = w;
    calcPay();
  }


