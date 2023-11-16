#include<iostream>
using namespace std;

int main(){

int size = 2;  //total days in a month
float monthCost[size];

float Total_cost = 0;

for(int i=1; i<=size; i++){
  cout<<"Day: "<<i<<endl; 
float Total_driven;
cout<<"Total driven per day: ";
cin>>Total_driven;


float CostPerLiter;
cout<<"Cost per liter of petrol: ";
cin>>CostPerLiter;

float AvgKm;
cout<<" Average kilometer per liter: ";
cin>>AvgKm;


float parking;
cout<<"Parking cost per day: ";
cin>>parking;

float toll;
cout<<"Tolls per day: ";
cin>>toll;


float TotalPetrol = Total_driven / AvgKm;

float TotalPetrolCost = TotalPetrol * CostPerLiter;


float DailyCost = TotalPetrolCost + toll + parking;

monthCost[i] = DailyCost;
 
Total_cost += DailyCost;
}


cout<<"Total cost in this month is: "<<Total_cost;



    return 0;
}