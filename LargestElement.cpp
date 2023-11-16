#include<iostream>
using namespace std;

int main(){

int size;
cout<<"Enter the num of elements: ";
cin>>size;

int array[size];


for(int i=0; i<size; i++){
    cin>>array[i];
}

for(int i=0; i<size; i++){
    cout<<array[i]<<" ";
}
cout<<endl;

int largest=array[0];


for(int i=1; i<size; i++){

    if(array[i]>largest){
        largest =array[i];
    }
}


cout<<"Larrgest: "<<largest;





    return 0;
}