#include<iostream>
using namespace std;

int main(){


int size;
cout<<"Enter the element num: ";
cin>>size;


int unsort[size];

cout<<"Enter all the elements: ";

for(int i=0; i<size; i++){

    cin>>unsort[i];
}

/*
for(int i=0; i<size; i++){

    cout<<unsort[i]<<" ";
}
*/


for(int i=0; i<size-1; i++){
    
    for(int j=i+1; j<size; j++){
    if(unsort[i]>unsort[j]){
        int temp = unsort[i];
        unsort[i]=unsort[j];
        unsort[j]=temp;
    }
    }
     
}

cout<<endl;

for(int i=0; i<size; i++){

    cout<<unsort[i]<<" ";
}




    return 0;
}