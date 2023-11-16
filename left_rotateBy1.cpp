#include<iostream>
using namespace std;

//left rotate a array by 1.

//Concept: 
//step-1: store array[0] in a temp variable
//step-2: take all the other element from index i to (i-1)
//step-3: put the value of temp in index of size-1.


int main(){

int size;
cout<<"Enter the size: ";
cin>>size;

int array[size];


for(int i=0; i<size; i++){

    cin>>array[i];
}

int temp = array[0];

for(int i=1; i<size; i++){
    array[i-1]= array[i];
}

array[size-1] = temp;

cout<<"After rotating by one array is: ";

for(int i=0; i<size; i++){
    
    cout<<array[i]<<" ";
}


    return 0;
}