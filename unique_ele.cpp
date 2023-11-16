//Give  only the unique element  from a sorted array.
#include<iostream>
using namespace std;

int main(){

int size;
cout<<"size: ";
cin>>size;


int array[size];


for(int i=0; i<size; i++){

    cin>>array[i];
}

int count = 0;
//int temp[count];

for(int i=0; i<size; i++){

    for(int j=i+1; j<size; j++){
        
        if(array[i]==array[j]){
           
            count++;
        }
    }
}
cout<<"count: "<<count;
/*
for(int i=0; i<count; i++){
    cout<<temp[i]<<" ";
}

*/
    return 0;
}