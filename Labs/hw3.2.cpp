//program that adds the users integers/float/sting 
#include<iostream>
using namespace std;

int add(int x, int y);
float add(float x, float y);
string add(string x, string y);

int main(void){
    int integer1, integer2;
    float float1, float2;
    string string1, string2;
    
    cout<<"Enter 2 integers"<<endl;
    cin>>integer1>>integer2;
    cout<<"Your answer is: "<<add(integer1, integer2)<<endl;
    
    cout<<"Enter 2 floats"<<endl;
    cin>>float1>>float2;
    cout<<"Your answer is: "<<add(float1, float2)<<endl;
    
    cin.ignore();
    
    cout<<"Enter 2 strings"<<endl;
    getline(cin, string1);
    cin.ignore();
    getline(cin, string2);
    cout<<"Your answer is: "<<add(string1, string2)<<endl;
}

//all functions to return x+y but diff values
int add(int x, int y){
    return (x + y);
}

float add(float x, float y){
    return (x + y);
}

string add(string x, string y){
    return (x+y);
}