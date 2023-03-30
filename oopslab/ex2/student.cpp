#include <iostream>
using namespace std;

class Student{

private:
	string name;
	int age;
	int mark;
	
public:
	
	Student(string x, int y, int z){
	name = x;
	age = y;
	mark = z;
	}
	string getname(){
	return name;
	}
	int getage(){
	return age;
	}
	int getmark(){
	return mark;
	}

};

int main(){
int n, m1, m2, m3, ind1, ind2, ind3, age, mark;
string nam;
cout << "Enter number of students : ";
cin >> n;
Student s[n];

for (int i=0; i<n; i++){
cout << "Enter name : ";
cin >> nam;
cout << "Enter age : ";
cin >> age;
cout << "Enter marks : ";
cin mark;
s[i] = Student(nam,age,mark);
cout << endl << "Record added" << endl;
}
m1=m2=m3=ind1=ind2=ind3=0;
for (int i=0; i<n; i++){
if(s[i].getmark>m1){
m3 = m2;
m2 = m1;
m1 = s[i].getmark;
ind3 = ind2;
ind2 = ind1;
ind1 = i;
}
}

}
