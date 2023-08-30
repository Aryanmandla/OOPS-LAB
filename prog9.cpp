#include<iostream>
#include<vector>
using namespace std;
class STUDENT{
    private:
    string USN,name;
    int age;
    public:
    STUDENT(string usn,string nam,int ag) : USN(usn),name(nam),age(ag) {}
    int get_Age() const{
        return age;
    }
};
class UGSTUDENT : public STUDENT{
    private:
    int Semester;
    double Fees;
    public:
    UGSTUDENT(string usn,string nam,int ag,int sem,double fees) : STUDENT(usn,nam,ag), Semester(sem), Fees(fees) {}
    int getSemester() const{
        return Semester;
    }
    int getFees() const{
        return Fees;
    }
};
class PGSTUDENT : public STUDENT{
    private:
    int Semester;
    double Fees,Stipend;
    public:
    PGSTUDENT(string usn,string nam,int ag,int sem,double fees,double sti) : STUDENT(usn,nam,ag),Semester(sem),Fees(fees),Stipend(sti) {}
    int getSemester() const{
        return Semester;
    }
    int getFees() const{
        return Fees;
    }
    int getStipend() const{
        return Stipend;
    }
};
int main(){
    vector<UGSTUDENT> ugStudents;
    vector<PGSTUDENT> pgStudents;

    int ug;
    cout<<"Enter number of UG Students: ";
    cin>>ug;
    for(int i=0;i<ug;i++){
        string name,usn;
        int age,sem;
        double fees;
        cout<<"Enter the name of UG Student "<<i+1<<" : ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter the USN of UG Student "<<i+1<<" : ";
        cin>>usn;
        cout<<"Enter the Age of UG Student "<<i+1<<" : ";
        cin>>age;
        cout<<"Enter the Semester of UG Student "<<i+1<<" : ";
        cin>>sem;
        cout<<"Enter the Fees of UG Student "<<i+1<<" : ";
        cin>>fees;
        UGSTUDENT ugStudent(usn,name,age,sem,fees);
        ugStudents.push_back(ugStudent);
    }
    int pg;
    cout<<"Enter the number of PG Students: ";
    cin>>pg;
    for(int i=0;i<pg;i++){
        string usn,name;
        int age,sem;
        double fees,sti;
        cout<<"Enter the name of UG Student "<<i+1<<" : ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter the USN of UG Student "<<i+1<<" : ";
        cin>>usn;
        cout<<"Enter the Age of UG Student "<<i+1<<" : ";
        cin>>age;
        cout<<"Enter the Semester of UG Student "<<i+1<<" : ";
        cin>>sem;
        cout<<"Enter the Fees of UG Student "<<i+1<<" : ";
        cin>>fees;
        cout<<"Enter the Stipend of UG Student "<<i+1<<" : ";
        cin>>sti;
        PGSTUDENT pgStudent(usn,name,age,sem,fees,sti);
        pgStudents.push_back(pgStudent);
    }
    cout<<endl;
    int sumAgeUG = 0;
    for(int i=0;i<ugStudents.size();i++){
        sumAgeUG += ugStudents[i].get_Age();
    }
    int AverageAgeUG = sumAgeUG/ug;
    cout<<"Average Age of UG Students: "<<AverageAgeUG<<endl;
    int sumAgePG = 0;
    for(int i=0;i<pgStudents.size();i++){
        sumAgePG += pgStudents[i].get_Age();
    }
    int AverageAgePG = sumAgePG/pg;
    cout<<"Average Age of PG Students: "<<AverageAgePG<<endl;
    return 0;
}