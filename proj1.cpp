#include <iostream>
#include <random>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

class ArrayST
{





private:
int size = 100; 
int *array;



bool countLT(int l, int r){
compCount++;
    return array[l] <array[r];

}
bool countLE(int l, int r){
    return array[l] <= array[r];

}
bool countGT(int l, int r){
    return array[l] >array[r];

}
bool countGE(int l, int r){
    return array[l] >=array[r];

}
public:
int compCount = 0;

ArrayST(int n, int max){
    // srand((unsigned int)time(NULL));
    srand(8);


    array = new int [n];
    for (int i = 0; i < n; i++)
    {
        int random = rand();
        array[i] = random % max;

    }
    
}

ArrayST(int n){
    array = new int[n];
    for (int i = 0; i < n; i++)
    {
        array[i] = i;
    }
    
}
~ArrayST(){
    delete array;

}
void write5_15(){
    for (int i = 0; i < size; i++)
    {
        if (i % 25 ==0)
        {
            cout << "\n";
        }
        if (i % 5== 0)
        {
            cout <<"\n";
        }
        printf("%15d", array[i]);

        
    }
    

}
bool isSorted(){
    for (int i = 1; i < size; i++)
    {
        if (countGT(i -1, i))
        {
            return false;
        }
        
    }
    return true;

}

};

int main(){

    cout <<"\nTest Sort Methods";
 cout <<"Ohio University CS 4040 / 5040";
 cout <<"Programming Assignment 1";
 cout <<"Programmer: Roy Frimpong";
 cout <<"2022 09 27";
 ArrayST st01 = ArrayST(100, 1000);
printf("\n\nrandom array st01 %s sorted, ",
 st01.isSorted() ? "is" : "is not");
 cout << "determined with " << st01.compCount << "comparisons." << endl;
 st01.write5_15();
 ArrayST st02 =  ArrayST(100);
 printf("\n\nordered array st02 %s sorted, ",
 st02.isSorted() ? "is" : "is not");
 cout <<"determined with " << st02.compCount << "comparisons." << endl;
 st02.write5_15();
 cout <<"\nBye.\n";

}
