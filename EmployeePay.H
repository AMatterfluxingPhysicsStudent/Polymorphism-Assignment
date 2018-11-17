#ifndef EMPLOYEEPAY_H
#define EMPLOYEEPAY_H
#include <iostream>
using namespace std;

class employee {
  protected:
    int employeeNumber;
    string name;
    string address;
    double pay;
  public:
    employee(int, string, string);
    int getEmployeeNumber() {return employeeNumber;}
    string getName(){return name;}
    string getAddress() {return address;}
    virtual double calcPay();
    virtual void printCheck();  
};

//essentially calcPay 2.0 for Waged Worker
  class hourlyEmployee: public employee{
    private:
      double hoursWorked;
      double hourlyWage;
    public:
      hourlyEmployee(double, double, int, string, string);
      double getHoursWorked(){return hoursWorked;}
      double getHourlyWage(){return hourlyWage;} 
      double calcPay();
      void printCheck();
  };

//salaried employee
  class salariedEmployee: public employee{
    private:
      double weeksWorked;
      double weeklySalary;
    public:
      salariedEmployee(double, double, int, string, string);
      double getWeeklySalary(){return weeklySalary;}//if you are a salaried worker, you have no wage! You have a salary!!!
      double calcPay();
      void printCheck();
  };





#endif