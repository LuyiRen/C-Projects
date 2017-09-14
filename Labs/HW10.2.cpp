#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void merge_arrays(string array1[], string array2[]);
int lines_file(string filename);
void populate_array(string array[], string fileName);

int main(void){
    string fileName1 = "Lab_HW10_Merge1.txt";
    string fileName2 = "Lab_HW10_Merge2.txt";
    string array1[lines_file(fileName1)];
    string array2[lines_file(fileName2)];
    populate_array(array1, fileName1);
    
    // for (int i = 0; i < lines_file(fileName1);  i++) {
    //     cout<<array1[i]<<endl;
    // }
    
}

// void merge_arrays(string array1[], string array2[]) {
//     string returnedFilename = "merged_output.txt";
//     int size1 = sizeof(array1);
//     int size2 = sizeof(array2);
    
//     string mergedArray[size1 + size2];
    
    // for (int i = 0; i < size1; i++) {
    //     mergedArray.append(array1[i]);
    // }
    
    // for (int i = 0; i < size2; i++) {
    //     mergedArray.append(array2[i]);
    // }
//}

int lines_file(string fileName) {
    string fileContents;
    ifstream infile;
    infile.open(fileName);
    int i=0;
    while (!infile.eof()) {
        getline(infile, fileContents);
        i++;
    }
    return i;
    infile.close();
}

void populate_array(string array[], string fileName){
    string fileContents;
    ifstream infile;
    int index = 0;
    infile.open(fileName);
    
    while (!infile.eof()) {
        getline(infile, array[index++]);
    }
    infile.close();
    
}

