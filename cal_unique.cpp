#include<iostream>
#include<vector>
using namespace std;

//count how many unique ele in a sorted array.

int removeElement(vector<int>nums, int val){

  int counter =0;

  int temp[counter];

  for(int i=0; i<nums.size(); i++){

       for(int j=i+1; j<nums.size(); j++){

          if(nums[i]!=nums[j]){
             
             temp[counter]=nums[i];
             counter++;
          }
       }
  }

for(int i=0; i<counter; i++){
    cout<<temp[i]<<" ";
}


    return counter;
}











int main(){

int num[]={3,2,2,3};

cout<<removeElement(num, 3);



    return 0;
}