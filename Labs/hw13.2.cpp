//this program creates a hierarchy of life, vehicle and home insurance.
//it will calculate premium and commission
#include<iostream>
using namespace std;

//base class wiht data member value
class Insurance{
    protected:
    float value;
    
    public:
    void set_value(float x);
    float return_value();
};
void Insurance::set_value(float x){value = x;}
float Insurance::return_value(){return value;}

//class insurance
class Home:public Insurance{
    public:
    virtual float calcPremium();
    virtual float calcCommission();
};
float Home::calcPremium(){
    return 0.005 * value;
}
float Home::calcCommission(){
    return 0.002 * value;
}

//class life
class Life:public Insurance{
    public:
    virtual float calcPremium();
    virtual float calcCommission();
};
float Life::calcPremium(){
    return 0.01 * value;
}
float Life::calcCommission(){
    return 0.01 * value;
}

//class vehicle
class Vehicle:public Insurance{
    public:
    virtual float calcPremium();
    virtual float calcCommission();
};
float Vehicle::calcPremium(){
    return 0.05 * value;
}
float Vehicle::calcCommission(){
    return 0.005 * value;
}

int main(void){
    //instantiate objects of each type
    Home one;
    Life two;
    Vehicle three;
    
    //set value for data member
    one.set_value(457999.00);
    two.set_value(1000000.00);
    three.set_value(25000.00);
    
    //print out calculated premium and comission for each type
    cout<<"Home Premium and Comission $"<<one.calcPremium()<<" $"<<one.calcCommission()<<endl;
    cout<<"Life Premium and Comission $"<<two.calcPremium()<<" $"<<two.calcCommission()<<endl;
    cout<<"Vehicle Premium and Comission $"<< three.calcPremium()<<" $"<<three.calcCommission()<<endl;
}