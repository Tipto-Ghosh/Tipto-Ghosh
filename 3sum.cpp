#include<iostream>
using namespace std;

int main(){

int size;
cout<<"size: ";
cin>>size;


int nums[size];


int trip = 0;
int triplet [trip][3];

for(int i=0; i<size; i++){
    cin>>nums[i];
}


for(int i=1; i<size; i++){
    if(nums[i]<nums[i-1]){
        int temp = nums[i];
        nums[i] = nums[i-1];
        nums[i-1] = temp;
    }
}

for(int i=0; i<size; i++){
    for(int j=i+1; j<size; j++){
        for(int k=size-1; k>=0; k--){
            if(nums[i]!=nums[j]&&nums[i]!=nums[k]&&nums[j]!=nums[k]){
                if(nums[i]+nums[j]+nums[k]==0){
                     triplet[trip][0]=nums[i];
                     triplet[trip][1]=nums[j];
                     triplet[trip][2]=nums[k];
                     trip++;
                }
            }
        }
    }
}

cout<<"ans: "<<endl;

for(int i=0; i<trip; i++){
    for(int j=0; j<3; j++){
        cout<<triplet[i][j]<<" ";
    }
}




    return 0;
}