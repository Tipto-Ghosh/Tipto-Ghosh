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


int dublicate=0;
int dub[dublicate];


for(int i=0; i<size; i++){

    for(int j=i+1; j<size; j++){

        if(array[i]==array[j]){

            dub[dublicate]=array[i];
            dublicate+=1;
        }
    }
}


cout<<"Number of dublicates are: "<<dublicate<<endl;



for(int i=0; i<dublicate; i++){

    cout<<dub[i]<<" ";
}


    return 0;
}