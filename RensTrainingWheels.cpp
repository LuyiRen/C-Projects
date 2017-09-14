#include<iostream>
#include<ctype.h>
#include<iomanip>
using namespace std;

class Member{
    private:
    int Ssn;
    string IO, DOB, Company, Plan, Status, Effdate, Ec, Comments;
    
    public:
    Member();
    string getIO();
    string getDOB();
    string getCompany();
    string getPlan();
    string getStatus();
    string getEffdate();
    int getSsn();
    string getEc();
    string getComments();
    
    void setIO(string x);
    void setDOB(string x);
    void setCompany(string x);
    void setPlan(string x);
    void setStatus(string x);
    void setEffdate(string x);
    void setSsn(int x);
    void setEc(string x);
    void setComments(string x);
};

Member::Member(){
    IO = "";
    DOB = "";
    Company = "";
    Status = "";
    Effdate = "";
    Ec = "y";
    Ssn = 0;
}

string Member::getIO(){return IO;}
string Member::getDOB(){return DOB;}
string Member::getCompany(){return Company;}
string Member::getPlan(){return Plan;}
string Member::getStatus(){return Status;}
string Member::getEffdate(){ return Effdate;}
string Member::getComments(){return Comments;}
int Member::getSsn(){return Ssn;}
string Member::getEc(){return Ec;}
void Member::setIO(string x){IO = x;}
void Member::setDOB(string x){DOB = x;}
void Member::setCompany(string x){Company = x;}
void Member::setPlan(string x){Plan = x;}
void Member::setStatus(string x){Status = x;}
void Member::setEffdate(string x){Effdate = x;}
void Member::setSsn(int x){Ssn = x;}
void Member::setEc(string x){Ec = x;}
void Member::setComments(string x){Comments = x;}

void confirmation(){
    string space;
    cout<<"enter any word after you finish"<<endl;
    cin>>space;
}

int main(void){
    Member Lily[5];
    string user = " ";
    string answer = " ";
    string temp = " ";
    int initial_response;
    int social = 0;
    int b = 0; //counter
        
    cout<<"Hello user, please input intial for this diary tutorial!"<<endl;
    cin>>user;
    cin.ignore();

    cout<<"user name is: "<<user<<endl;
    
    cout<<"Would you like the beginning tutorial or straight skip to doing waivers?"<<endl;
    cout<<"Hit 99 for tutorial or 100 for skipping to make the diaries: "<<endl;
    cin>>initial_response;
    if(initial_response == 99){
        cout<<"In Main Menu under UABT, hit 38 on the option number "<<endl;
        confirmation();
        
        cout<<"Type SSN in SSN field and C in add/change mode like so: "<<endl;
        cout<<"SSN            123445566"<<endl<<"Add/Change Mode            C"<<endl;
        confirmation();
        
        cout<<"Enter name, address, city, state, zip and then enter"<<endl;
        confirmation();
        
        cout<<"Hit f9: "<<endl;
        confirmation();
        
        cout<<"Fill out sf, name, dob (MMDDYYYY), and info section then hit enter and then F1 and then enter again"<<endl;
        confirmation();
        
        cout<<"hit f4 and then start the diary tutorial: "<<endl;
        confirmation();
    }
    for(unsigned int i = 0; i < (sizeof(Lily)/sizeof(Lily[0])); i = i + 1){
        cout<<"New employee!"<<endl;
        cout<<"please enter yes if the person put something in box five, otherwise put blank"<<endl;
        cin>>temp;
        Lily[i].setIO(temp);
            
    
        cout<<"please enter the company number"<<endl;
        cin>>temp;
        Lily[i].setCompany(temp);
        
        cout<<"please enter the effective date"<<endl;
        cin>>temp;
        Lily[i].setEffdate(temp);
        cout<<"please enter the Status EE, EC, EF"<<endl;
        cin>>temp;
        Lily[i].setStatus(temp);
    
        cout<<"Is this a hard copy or eletronic? Please put EC for hard copy"<<endl;
        cin>>temp;
        Lily[i].setEc(temp);
    
        cout<<"please enter the Plan"<<endl;
        cin>>temp;
        Lily[i].setPlan(temp);
        cin.ignore();
            
        cout<<"Is this a decline or waiver? Decline or waiver?"<<endl;
        cout<<"As a reminder, if this is a waiver, please include what insurance they have: "<<endl;
        getline(cin, temp);
        Lily[i].setComments(temp);
        
        cout<<"please enter the SSN"<<endl;
        cin>>social;
        cout<<endl;
        Lily[i].setSsn(social);
        cin.clear();
            

        cout<<"  "<<Lily[i].getComments()<<endl;
        cout<<Lily[i].getCompany()<<" "<<Lily[i].getPlan()<<" Eff "<<Lily[i].getEffdate()<<" Status "<<Lily[i].getStatus()<<" IO: "<<Lily[i].getIO()<<"   "<<"Per " <<Lily[i].getEc()<<endl;
        cout<<" -"<<user<<endl;
        cout<<endl;
        
        cout<<"Will you need to rewrite another diary? write NO(all caps) if not"<<endl;
        cin>>answer;
        if(answer == "NO"){
            for(unsigned int b = i; b < (sizeof(Lily)/sizeof(Lily[0])); b = b + 1){
                cout<<"please enter the rest of the SSNs"<<endl;
                cin>>social;
                cin.ignore();
                Lily[b + 1].setSsn(social);}
         break;   
        }
    }
    
    cout<<"Hey Eloisa, these are my members!"<<endl;
    cout<<"SSN"<<setw(20)<<"Company"<<setw(30)<<"Effective date"<<endl;
    for(unsigned int a = 0; a < (sizeof(Lily)/sizeof(Lily[0])); a = a + 1){
        cout<<Lily[a].getSsn()<<setw(15)<<Lily[a].getCompany()<<setw(25)<<Lily[a].getEffdate()<<endl;}
    
    
}