#include<iostream>
using namespace std;

//left rotate a array by Dd.

//Concept: 
//step-1: store array[0] to array[D-1] in  temp variable
//step-2: then start swtiching from D to d-d.
//step-3: put the value of temp in index of size-1.


int main(){

int size;
cout<<"Enter the size: ";
cin>>size;

int array[size];


for(int i=0; i<size; i++){

    cin>>array[i];
}

cout<<"entered array is: ";

for(int i=0; i<size; i++){

    cout<<array[i]<<" ";
}

int d;  
cout<<"Enter value of d: ";
cin>>d;

d=size%d;


int temp[d];

for(int i=0; i<d; i++){
     temp[i]=array[i];
}
cout<<"Temp: ";
for(int i=0; i<d; i++){
    cout<<temp[i]<<" ";
}

cout<<endl;

cout<<"Array: ";
for(int i=d; i<size; i++){
    array[i-d]=array[i];
}

cout<<endl;



    return 0;
}