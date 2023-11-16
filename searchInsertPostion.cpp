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


int target;
cout<<"Target: ";
cin>>target;

for(int i=0; i<size; i++){
     
     if(array[i]==target){

        cout<<i;
        
     }
     
     else{
        for(int i=0; i<size; i++){
            if(array[i]<target&&array[i+1]>target){
                cout<<i+1;
                break;
            }
            else{
                cout<<i-1;
            }
        }
     }
     break;
   
}




    return 0;
}