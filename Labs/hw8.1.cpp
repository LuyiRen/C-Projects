/*this function will create a class called version that contains
3 different data members. The setters for these class functions will have 
references to the class in order to perform cascading function calls;
*/
#include<iostream>
using namespace std;

class Version{
    public:
    Version(); //default constructor
    //Version(int one, int two, int three); //not needed
    
    //setters that are references
    Version &setmajor(int what);
    Version &setminor(int who);
    Version &setservice(int where);
    
    //getters to retrieve data
    int getmajor()const;
    int getminor()const;
    int getservice()const;
    
    private:
    int major, minor, service_pack;
};
Version::Version(){
    major = 0;
    minor = 0;
    service_pack = 0;
}
//referenced the class and return a *, which cancels
//out the & to return the class
Version &Version::setmajor(int what){
    major = what;
    return *this;
}
Version &Version::setminor(int who){
    minor = who;
    return *this;
}
    
Version &Version::setservice(int where){
    service_pack = where;
    return *this;
}

int Version::getmajor()const{
    return major;
}
int Version::getminor()const{
    return minor;
}

int Version::getservice()const{
    return service_pack;
}

int main(void){
    //create object uno and ask user take in
    Version uno;
    int a, b, c;
    cout<<"Give me a major, minor and service pack please: "<<endl;
    cin>>a>>b>>c;
    cin.ignore();
    //cascading functions to set all at once
    uno.setmajor(a).setminor(b).setservice(c);
    
    //print out the results of what is in the object
    cout<<"Major: "<<uno.getmajor()<<endl;
    cout<<"Minor: "<<uno.getminor()<<endl;
    cout<<"Service Pack: "<<uno.getservice()<<endl;
}