#include<iostream>
using namespace std;
class Employee{
    private:
    string name,empID,gender;
    public:
    void get_employee(string name,string empID,string gender){
        this->name = name;
        this->empID = empID;
        this->gender = gender;
    }
    void set_employee(){
        cout<<"Employee's Name: "<<name<<endl;
        cout<<"Employee's ID: "<<empID<<endl;
        cout<<"Employee's Gender: "<<gender<<endl;
    }
};
class Department : public Employee{
    private:
    string deptName,workAssigned;
    public:
    void get_department(string deptName,string workAssigned){
        this->deptName = deptName;
        this->workAssigned = workAssigned;
    }
    void set_department(){
        cout<<"Department's Name: "<<deptName<<endl;
        cout<<"Work Assigned: "<<workAssigned<<endl;
    }
};
class Loan : public Employee{
    private:
    string loanDetails;
    double loanAmt;
    public:
    void set_loan(string loanDetails,double loanAmt){
        this->loanDetails = loanDetails;
        this->loanAmt = loanAmt;
    }
    void get_loan(){
        cout<<"Loan Details: "<<loanDetails<<endl;
        cout<<"Loan Amount: "<<loanAmt<<endl;
    }
};
int main(){
    string name,empid,gender,deptname,workassig;
    cout<<"Enter Employee's Name: ";
    getline(cin,name,'\n');
    cout<<"Enter Employee's ID: ";
    getline(cin,empid,'\n');
    cout<<"Enter Employee's Gender: ";
    getline(cin,gender,'\n');
    cout<<"Enter Department Name: ";
    getline(cin,deptname,'\n');
    cout<<"Enter Work Assigned to the Employee: ";
    getline(cin,workassig,'\n');
    Department emp1;
    cout<<"\n\n#####Displaying Data#####\n\n";
    emp1.get_employee(name,empid,gender);
    emp1.get_department(deptname,workassig);
    emp1.set_employee();
    emp1.set_department();
    Loan emp2;
    string loandetails;
    double loanamt;
    cout<<"Enter Loan Details: ";
    getline(cin,loandetails,'\n');
    cout<<"Enter Loan Amount: ";
    cin>>loanamt;
    emp2.set_loan(loandetails,loanamt);
    emp2.get_loan();
    return 0;
}