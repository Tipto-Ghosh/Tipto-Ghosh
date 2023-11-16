#include<iostream>
using namespace std;
int main(){

int size;
cout<<"Enter the size: ";
cin>>size;

int array[size];


for(int i=0; i<size; i++){

    cin>>array[i];
}

cout<<"Enter array is: ";

for(int i=0; i<size; i++){
    cout<<array[i]<<" ";
}

cout<<endl<<"Reverse array is: ";

for(int i=0; i<size/2; i++){
    int temp = array[i];
    array[i] = array[size-1-i];
    array[size-1-i] = temp;
}


for(int i=0; i<size; i++){
    cout<<array[i]<<" ";
}


    return 0;
}