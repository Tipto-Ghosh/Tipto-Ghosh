#include<iostream>
using namespace std;

//Using Linear Search:
int maximumCount(int arr[], int n){

    int pos = 0;
    int neg = 0;

    for(int i=0; i<n; i++){

        if(arr[i]>0){
            pos = pos + 1;
        }
        else if(arr[i]<0) {
            neg = neg + 1;
        }
    }

    if(pos > neg){
        return pos;
    }
    else{
        return neg;
    }
    return -1;
}

int main(){


int arr[] = {-3,-2,-1,0,0,1,2};

cout<<maximumCount(arr, 7)<<endl;






    return 0;
}