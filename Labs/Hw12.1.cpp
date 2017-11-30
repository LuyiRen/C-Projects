// This program will create a class built upon Asset, it will build chair, laptop and server
// it will set up all aspects of these classes and print them out accordingly

// April 15th, 2017
// Luyi Ren


#include<iostream>
#include <iomanip>
#include <string>
using namespace std;

//base class of asset
class Asset{
    private:
    string manufac, date;
    int cost;
    
    public:
    void setmanuf(string x);
    void setdate(string x);
    void setcost(int x);
    string getmanu();
    string getdate();
    int getcost();
};
//setters and getters for class Asset
void Asset::setmanuf(string x){manufac = x;}
void Asset::setdate(string x){ date = x;}
void Asset::setcost(int x){cost = x;}
string Asset::getmanu(){return manufac;}
string Asset::getdate(){return date;}
int Asset::getcost(){return cost;}

//class Cubicle under Asset
class Cubicle:public Asset{
    private:
    float area, length, width;
    
    public:
    void setarea(float x);
    void setlength(float x);
    void setwidth(float x);
    float returnarea()const;
    float returnlength()const;
    float returnwidth()const;
};
//settters and getters under Cubicle
void Cubicle::setarea(float x){area = x;}
void Cubicle::setlength(float x){length = x;}
void Cubicle::setwidth(float x){width  = x;}
float Cubicle::returnarea()const{return area;}
float Cubicle::returnlength()const{return length;}
float Cubicle::returnwidth()const{return width;}


//class chair starts here
class Chair:public Asset{
    private:
    int officenum;
    
    public:
    void setofficenum(int x);
    int returnoffice(int x);
};
//setters and getters for chair
void Chair::setofficenum(int x){ officenum = x;}
int Chair::returnoffice(int x){return officenum;}


//class laptop 
class Laptop:public Asset{
    private:
    string os;
    int memory;
    float screensize;
    
    public:
    void setos(string x);
    void setmemory(int x);
    void setscreensize(float x);
    string returnos();
    int returnmemory();
    float returnscreen();
    
};
//setters and getters for all data members of laptop
void Laptop::setos(string x){os = x;}
void Laptop::setmemory(int x){memory = x;}
void Laptop::setscreensize(float x){screensize = x;}
string Laptop::returnos(){return os;}
int Laptop::returnmemory(){return memory;}
float Laptop::returnscreen(){return screensize;}


//class server
class Server:public Asset{
    private:
    string os;
    int memory;
    
    public:
    void setos(string x);
    void setmemory(int x);
    string returnos();
    int returnmemory();
    
};
//setters and getters for server
void Server::setos(string x){os = x;}
void Server::setmemory(int x){memory = x;}
string Server::returnos(){return os;}
int Server::returnmemory(){return memory;}

int main(){
    Cubicle one;
    Laptop two;
    
    //set all Objects 
    one.setmanuf("Sony");
    one.setdate("September 8, 2014");
    one.setcost(54);
    one.setarea(985.12);
    one.setlength(76.11);
    one.setwidth(44.69);
    
    two.setmanuf("Toshiba");
    two.setdate("March 5, 2012");
    two.setcost(36);
    two.setos("Windows");
    two.setmemory(64);
    two.setscreensize(42.36);
    
    //print out all objects
    cout<<"Cubicle: "<<endl;
    cout<<"Manufacture"<<setw(20)<<"Date"<<setw(20)<<"Cost"<<setw(20)<<"Area"<<setw(20)<<"Length"<<setw(20)<<"Width"<<endl;
    cout<<one.getmanu()<<setw(30)<<one.getdate()<<setw(20)<<one.getcost()<<setw(20)<<one.returnarea()<<setw(20)<<one.returnlength()<<setw(20)<<one.returnwidth()<<endl;
    
    cout<<"Laptop: "<<endl;
    cout<<"Manufacture"<<setw(20)<<"Date"<<setw(20)<<"Cost"<<setw(20)<<"O/s  "<<setw(20)<<"Memory"<<setw(20)<<"Screensize"<<endl;
    cout<<two.getmanu()<<setw(25)<<two.getdate()<<setw(20)<<two.getcost()<<setw(20)<<two.returnos()<<setw(20)<<two.returnmemory()<<setw(20)<<two.returnscreen()<<endl;
}