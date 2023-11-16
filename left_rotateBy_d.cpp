#include<iostream>
using namespace std;

int main(){

int size;
cout<<"enter size:";
cin>>size;

int array[size];

for(int i=0; i<size; i++){
    cin>>array[i];
}


int d;
cout<<"enter the value of d:";
cin>>d;

for(int i=0; i<d; i++){
    int temp = array[i];

    for(int j=1; j<size; j++){
        array[j-1] = array[j];
    }
array[size-i] = temp;
}

for(int i=0; i<size; i++){
    cout<<array[i]<<" ";
}





    return 0;
}