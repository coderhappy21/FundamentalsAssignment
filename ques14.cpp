#include<iostream>
using namespace std;
int main(){

//take input heads and legs & calculate total dogs and chickens
int heads, legs;
cout<<"enter total heads :";
cin>>heads;

cout<<"enter total legs :";
cin>>legs;


int dogs ,chickens;
dogs = (legs - 2*heads)/2;
chickens = heads - dogs;

cout<<"total dogs :"<<dogs<<endl;
cout<<"total chickens :"<<chickens<<endl;

//to verify - 
// total heads = dogs+chickens;
// total legs = 4*dogs + 2*chickens;
}