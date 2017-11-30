#include<iostream>
#include<vector>
#include<stdexcept>
#include<exception>
#include<fstream>
#include<algorithm>
using namespace std;

//function prototype
void load(vector<string> &yes); //load the vector
void by_number(vector<string> &yes);//look through by number
void by_title(vector<string> &yes);//lookl through by title

int main(void){
    vector<string>books;//instantiate book vector
    //load(books);
    string line;
    ifstream myfile("Book_List2.txt");
    if(!myfile){cout<<"oh no"<<endl;}
    while(getline(myfile, line)){
        books.push_back(line);
    }
    
    
    //search by title and number
    by_title(books);
    by_number(books);
}

// void load(vector<string> &yes){
//     //prompt user to enter name of book
//     string unum;
//     cout<<"keep putting names of bpoks in; enter 999 to stop"<<endl;
//     cin>>unum;
//     //keep inputting and push back vector until user wants to stop
//     while(unum != "999"){
//         getline(cin, unum);
//         yes.push_back(unum);
//     }

// }

void by_title(vector<string> &yes){
    //get user title input
    string user_title;
    cout<<"What title do you want to check?"<<endl;
    getline(cin, user_title);
    
    auto it = find(yes.begin(), yes.end(), user_title);
    if(it == yes.end()){
        //something wrong
        for(int i = 0; i < yes.size(); ++i){
          if(user_title == yes.at(i)){
              cout<<"The position this book is on the list is: "<<i+1<<endl;
          
    }}}
    
    //find if item exist in vector, if so, loop through to print item
    //  if(find(yes.begin(), yes.end(), user_title) != yes.end()){
    //      cout<<"found"<<endl;
    //     for(int i = 0; i < yes.size(); ++i){
    //      if(user_title == yes.at(i)){
    //          cout<<"The position this book is on the list is: "<<i+1<<endl;
    //      }
    // }
     //if not, enter not found
//      }
      else{cout<<"not found"<<endl;}
 }

//search vector by number
void by_number(vector<string> &yes){
    //prompt user to enter number
    int number;
    cout<<"what number in the list do you want to pull out?"<<endl;
    cin>>number;
    
    //see if number exists, if not, catch the error
    try{
        cout<<yes.at(number)<<endl;
    }
    catch(out_of_range &e){
        cout<<"Number larger than list error"<<endl;
    }
}