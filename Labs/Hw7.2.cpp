//this function will create a class of fractions and be able to 
//add the same objects, subtract them and do the same wiht integers

#include<iostream>
using namespace std;

class Fraction{
    public:
    Fraction();//defautl constructor
    Fraction(int n, int d);
    
    void setnum(int x);
    void setden(int y);
    int getnum();
    int getden();
    //operator function to add 2 objects
    Fraction operator+(Fraction& other);
    Fraction operator-(Fraction& other);
    
    private:
    int numerator;
    int denominator;
};

Fraction::Fraction(){
     numerator = 0;
     denominator = 0;
}

Fraction::Fraction(int n, int d){
numerator = n;
denominator = d;
}

void Fraction::setnum(int x){numerator = x;}

void Fraction::setden(int y){denominator = y;}

int Fraction::getnum(){return numerator;}

int Fraction::getden(){return denominator;}


// fraction_a + fraction_b
Fraction Fraction::operator+(Fraction& other){
    int d = denominator*(other.getden());
    int n = numerator*(other.getden()) + (other.getnum()*denominator);
    return Fraction(n, d);
}

// fraction_a - fraction_b
Fraction Fraction::operator-(Fraction& other){
    int d = denominator*(other.getden());
    int n = numerator*(other.getden()) - (other.getnum()*denominator);
    return Fraction(n, d);
}

//fraction_a + integer_a
Fraction operator+(Fraction lhs, int rhs) {
	Fraction int_frac = Fraction(rhs, 1);
  int d = lhs.getden()*(int_frac.getden());
  int n = (lhs.getnum()*int_frac.getden()) + (int_frac.getnum()*lhs.getden());
  return Fraction(n, d);
}

//integer_a + fraction_a
Fraction operator+(int lhs, Fraction rhs) {
	Fraction int_frac = Fraction(lhs, 1);
  int d = rhs.getden()*(int_frac.getden());
  int n = (rhs.getnum()*int_frac.getden()) + (int_frac.getnum()*rhs.getden());
  return Fraction(n, d);
}
//fraction_a - integer_a
Fraction operator-(Fraction lhs, int rhs) {
	Fraction int_frac = Fraction(rhs, 1);
  int d = lhs.getden()*(int_frac.getden());
  int n = (lhs.getnum()*int_frac.getden()) - (int_frac.getnum()*lhs.getden());
  return Fraction(n, d);
}
//integer_a - fraction_a
Fraction operator-(int lhs, Fraction rhs) {
	Fraction int_frac = Fraction(lhs, 1);
  int d = rhs.getden()*(int_frac.getden());
  int n = (int_frac.getnum()*rhs.getden())-(rhs.getnum()*int_frac.getden());
  return Fraction(n, d);
}

int main(void){
    Fraction one, two;
    int a, b, c, d;
    Fraction three, four;
    //collect all data for 2 fraction objects
    cout<<"give me your numerator and then your demoniator for fraction 1"<<endl;
    cin>>a;
    cin.ignore();
    cin>>b;
    one.setnum(a);
    one.setden(b);
    cin.ignore();
    
    cout<<"Give me your numberator and your demoniator for fraction 2"<<endl;
    cin>>c;
    cin.ignore();
    cin>>d;
    
    two.setnum(c);
    two.setden(d);
    cout<<"your first fraction is: "<<one.getnum()<<"/"<<one.getden()<<endl;
    cout<<"your second fraction is: "<<two.getnum()<<"/"<<two.getden()<<endl;
    
    //fraction plus fraction
    three = one + two;
    cout<<"your answer is: "<<three.getnum()<<"/"<<three.getden()<<endl;
    
    //fraction minus fraction
    four = one - two;
    cout<<"your answer is: "<<four.getnum()<<"/"<<four.getden()<<endl;
    
    //fraction plus integer
    Fraction five = one + 5;
    cout<<"your first fraction plus 5 is: "<<five.getnum()<<"/"<<five.getden()<<endl;
    
    //fraction minus five
    Fraction six = two - 5;
    cout<<"your second fraction minus 5 is: "<<six.getnum()<<"/"<<six.getden()<<endl;
    
    //integer minus two
    Fraction seven = 5 - two;
    cout<<"5 minus your fraction is: "<<seven.getnum()<<"/"<<seven.getden()<<endl;
    
    //integer plus fraction
    Fraction eight = 5 + two;
    cout<<"5 plus your second fraction is: "<<eight.getnum()<<"/"<<eight.getden()<<endl;
    
}