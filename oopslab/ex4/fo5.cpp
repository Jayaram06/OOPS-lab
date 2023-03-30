#include<iostream>
using namespace std;

void func(){
cout<<"Hello this function has no arguments\n";
}

void func(int a,double b){
cout<<"This function has a int argument and a double argument\n";
}

void func(int a,int b){
cout<<"This function has two int arguments\n";
}
int main(){
func();
func(2,3.14);
func(2,3);
}
