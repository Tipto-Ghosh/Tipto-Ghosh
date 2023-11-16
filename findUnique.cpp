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

int unique[size];
int count =0;

for(int i=0; i<size; i++){
    bool uni = false;
    for(int j=0; j<size; j++){
      if(array[i]!=array[j]){
          uni = true;
          break;
      }
    }
    if(uni==true){
        unique[count]=array[i];
        count++;
    }
}

cout<<"number of unique element:"<<count<<endl;

cout<<"Unique elements are:";

for(int i=0; i<count; i++){
    cout<<unique[i]<<" ";
}





    return 0;
}