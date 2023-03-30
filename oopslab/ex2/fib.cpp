#include <iostream>
using namespace std;

class Fibonacci{
private:
	int n;
public:
	
	void setn(int x){
	n=x;
	}
	
	int getn(){
	return n;
	}
	
	int fib(int x){
	if (x==0){
		return 0;
	}
	else if (x==1){
		return 1;
	}
	else{
		return fib(x-1)+fib(x-2);
	}
	}
	
	void fibseries(){
	for(int i=0; i<n; i++){
	cout<<fib(i)<<",";
	}
	}
};

int main(){
int num;
Fibonacci f1;
cout << "Enter n value : ";
cin >> num;
f1.setn(num);
f1.fibseries();
}
