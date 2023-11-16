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


//Sorting

for(int i=0; i<size; i++){

    for(int j=i+1; j<size; j++){

        if(array[i]>array[j]){
             int temp = array[i];
             array[i]=array[j];
             array[j]= temp;
        }     
            
    }
}


for(int i=0; i<size; i++){
    cout<<array[i]<<" ";
}
cout<<endl;

int max = array[size-1];
int secondLarge = array[size-2];

cout<<"Maximum: "<<max<<endl;

cout<<"2nd largest: "<<secondLarge;





    return 0;
}