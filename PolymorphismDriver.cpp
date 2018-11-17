#include <iostream>
using namespace std;
#include "EmployeePay.h"

employee *callingFunction(){
  string intake;
  string inta;
  string name;
  string ID;
  int ID2;
  string yesNo;
  string yN;
  string addre;
  double paypay;
  double time;
  employee* eptr = NULL;
  int loopCon = 2;
  while(loopCon < 5){
    cout<<"Please enter your Employee's Name:"<<endl;
    getline(cin, name);
    cout<<"Please enter your employee's ID number:"<<endl;
    getline(cin, ID);
    ID2 = stoi(ID);
    cout<<"Please enter your employee's Address:"<<endl;
    getline(cin, addre);
    cout<<"Confirm? Y/N"<<endl;
    getline(cin, yesNo);
    yN = yesNo[0];
    if(yN == "y"||yN == "Y"){
      loopCon = 8;
    }
    else {

    }
  }

  int loopConstraints = 2;
  while(loopConstraints < 5){
    cout<<"Select from your options below"<<endl;
    cout<<"Press w for waged worker"<<endl;
    cout<<"Press s for salaried worker"<<endl;
    getline(cin, intake);
    inta = intake[0];
    if (inta == "w" || inta == "W"){
      cout<<"Enter the amount "<<name<<" is paid per hour:"<<endl<<"$";
      cin>>paypay;
      cout<<"Enter time "<<name<<" has worked for, in hours:"<<endl;
      cin>>time;
      eptr = new hourlyEmployee(time, paypay, ID2, name, addre);
      loopConstraints = 8;
    }
    else if(inta == "s"||inta == "S"){      
      cout<<"Enter the amount "<<name<<" is paid per week:"<<endl<<"$";
      cin>>paypay;
      cout<<"Enter time "<<name<<" has worked for, in weeks:"<<endl;
      cin>>time;
      eptr = new salariedEmployee(time, paypay, ID2, name, addre);
      loopConstraints = 8;
    }
    else{

    }
  }
  return eptr;
}

int main() {
  string any;
  cout<<"Welcome to the employee payment menu \n Press any key to continue"<<endl;
  getline(cin, any);
  int num = 5;
  while (num<8){
    employee *eptr2 = NULL;
    eptr2 = callingFunction();
    eptr2->printCheck();
  }
}
