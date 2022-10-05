#include <iostream>
#include <random>
using namespace std;

class ArrayST
{





private:
int srand(unsigned int seed);
int size = 1; 
int *array;


int compCount = 0;




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
ArrayST(int n){
    array = new int[n];
    size = n;
    for (int i = 0; i < n; i++)
    {
        array[i] = i;
    }
    
}
void write5_5(){
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
        cout <<"%15d " << array[i];
        
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
 cout <<"Programmer: Ralph Kelsey";
 cout <<"2022 09 27";
 ArrayST st01 = new ArrayST(100, 1000);
 System.out.printf("\n\nrandom array st01 %s sorted, ",
 st01.isSorted() ? "is" : "is not");
 System.out.printf("determined with %d comparisons.",
 st01.compCount);
 st01.write5_5_15();
 ArrayST st02 = new ArrayST(100);
 System.out.printf("\n\nordered array st02 %s sorted, ",
 st02.isSorted() ? "is" : "is not");
 System.out.printf("determined with %d comparisons.",
 st02.compCount);
 st02.write5_5_15();
 System
.out.println(
"
\
nBye.
\
n
");

}
