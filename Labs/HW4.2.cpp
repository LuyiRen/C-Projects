#include<iostream>
using namespace std;

#include<string>
using namespace std;

#include<iomanip>
using namespace std;

//create class of employee with name, address, title,department
//age and salary

class Employee{
    public:
    string name, address, title, dept;
    int age, salary;
};

int main(void){
    Employee Martha;
    //take input of all traits of the class
    cout<<"Hello, User, Please input your Name: ";
    getline(cin, Martha.name);
    
    cout<<"Please enter your address: ";
    getline(cin, Martha.address);
    
    cout<<"Please enter your title: ";
    getline(cin, Martha.title);
    
    cout<<"Please enter your salary: ";
    cin>>Martha.salary;
    cin.ignore();
    
    cout<<"Please enter your age: ";
    cin>>Martha.age;
    cin.ignore();
    
    cout<<"Please enter your Department ";
    getline(cin, Martha.dept);
    
    cout<<fixed<<left<<setw(25)<<Martha.name<<left<<setw(25)<<Martha.address<<right<<setw(5)<<Martha.age<<endl;
    cout<<left<<setw(25)<<Martha.title<<left<<setw(25)<<Martha.dept<<right<<setw(10)<<Martha.salary<<endl;
}
