/*this function will create the object Cuboid that will have
3 different data members. Using those data members, it will have
class functions that can calculate volume, surface area and increase
the data members by any amount */

#include<iostream>
using namespace std;

class Cuboid{
    public:
    Cuboid();//default constructor
    Cuboid(int ht, int lg, int wd);
    
    //initilaize every data member
    void setDataht(int one);
    void setDatalg(int one);
    void setDatawd(int one);
    
    //get the value of member
    int getht();
    int getlg();
    int getwd();
    
    
    //return the volume
    int volume();
    //return surface area
    int surface_area();
    //add to dimensions
    int resetdata(int x);
    
    private:
    int height;
    int length;
    int width;
};
//default constructor data
Cuboid::Cuboid(){
    height = 0;
    length = 0;
    width = 0;
}

Cuboid::Cuboid(int ht, int lg, int wd){
    ht = height;
    lg = length;
    wd = width;
}

//three setdata functions 
void Cuboid::setDataht(int one){
    height = one;
}
void Cuboid::setDatalg(int one){
    length = one;
}
void Cuboid::setDatawd(int one){
    width = one;
}
//3 return get functions
int Cuboid::getht(){
    return height;
}
int Cuboid::getlg(){
    return length;
}
int Cuboid::getwd(){
    return width;
}
//function to return volume
int Cuboid::volume(){
    int z;
    z = height*length*width;
    return z;
}
//function to return surface area
int Cuboid::surface_area(){
    int side1, side2, side3, answer;
    side1 = length*height*2;
    side2 = width*height*2;
    side3 = length*width*2;
    answer = side1+side2+side3;
    return answer;
}
//function to inrease data by inserted amount
int Cuboid::resetdata(int x){
    height = height+x;
    length = length+x;
    width = width+x;
}

int main(void){
    //create 2 cube objects and 6 integers for user input
    int a,b,c,d,e,f;
    Cuboid *cube1= new Cuboid();
    Cuboid *cube2 = new Cuboid();
    
    cout<<"What do you want your height, length and width to be for cube1?"<<endl;
    cin>>a>>b>>c;
    //set data with user input for cube1 and cube2
    cube1->setDataht(a);
    cube1->setDatalg(b);
    cube1->setDatawd(c);
    cout<<"What do you want your height, length and width to be for cube 2?"<<endl;
    cin>>d>>e>>f;
    cube2->setDataht(d);
    cube2->setDatalg(e);
    cube2->setDatawd(f);
    
    //increase data by any amount
    cube1->resetdata(2);
    cube2->resetdata(2);
    
    //print out all information after increasing and surface area and volume
    cout<<"Your current Height, length and width for cube1 is: "<<cube1->getht()<<" "<<cube1->getlg()<<" "<<cube1->getwd()<<" "<<endl;
    cout<<"Your current Height, length and width for cube2 is: "<<cube2->getht()<<" "<<cube2->getlg()<<" "<<cube2->getwd()<<" "<<endl;
    cout<<"Cube1: Surface area is: "<<cube1->surface_area()<<" Volume is: "<<cube1->volume()<<endl;
    cout<<"Cube2: Surface area is: "<<cube2->surface_area()<<" Volume is: "<<cube2->volume()<<endl;
}