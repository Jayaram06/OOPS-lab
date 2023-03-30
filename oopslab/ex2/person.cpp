#include <iostream>
using namespace std;

class Person{

private:
	string name;
	string id;
	int age;
	int sal;

public:
	void accept(){
	cout << "Enter name : ";
	cin >> name;
	cout << "Enter id : ";
	cin >> id;
	cout << "Enter age : ";
	cin >> age;
	cout << "Enter salary : ";
	cin >> sal;
	cout << endl << "Value added successfully\n\n"; 
	}
	
	void display(){
	cout << "Name : " << name << endl;
	cout << "ID : " << id << endl;
	cout << "Age : " << age << endl;
	cout << "Salary : " << sal << endl;
	}
	
	int getsal(){
	return sal;
	}
	
	string getname(){
	return name;
	}
};

int main(){
Person p[5];
int maxsal=0, ind=0;
for (int i = 0; i<5; i++){
cout << "\n-------------------__Person-" << i+1 << "__-------------------\n";
p[i].accept();
}
cout << "\nDisplaying all persons\n";
for (int i = 0; i<5; i++){
cout << "\n-------------------__Person-" << i+1 << "__-------------------\n";
p[i].display();
}
for (int i = 0; i<5; i++){
if(p[i].getsal()>maxsal){
maxsal = p[i].getsal();
ind = i;
}
}
cout << "\n\nPerson with highest salary is " << p[ind].getname() << " and his salary is " << maxsal <<endl;
}
