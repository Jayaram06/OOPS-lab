#include <iostream>
using namespace std;

class Distance{

private:
	int feet;
	int inch;
public:
	int getf(){
	return feet;
	}
	int geti(){
	return inch;
	}
	void setf(int x){
	feet = x;
	}
	void seti(int x){
	inch = x;
	}
	void sum(){
	feet = feet + inch/12;
	inch = inch % 12;
	cout << "Distance is " << feet << " feet and " << inch << " inches " << endl; 
	}
};

int main(){
int ft,in;
cout << "Enter feet : ";
cin >> ft;
cout << "Enter inches : ";
cin >> in;

Distance d1;
d1.setf(ft);
d1.seti(in);
d1.sum();

}
