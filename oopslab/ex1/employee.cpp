#include <iostream>
using namespace std;

class Employee{
    
    private:
    string fname;
    string lname;
    int salary;
    
    public:
    Employee(string x,string y,int z){
        fname = x;
        lname = y;
        salary = z;
  	}
  	
  	string getf(){
  	return fname;
  	}
  	string getl(){
  	return lname;
  	}
  	int getsal(){
  	return salary;
  	}
  	
  	void setf(string x){
  	fname = x;
  	}
  	void setl(string x){
  	lname = x;
  	}
  	void setsal(int x){
  	salary = x;
  	}
  	
  	void disp(){
  	cout << "Firstname : " << fname << endl;
  	cout << "Lastname : " << lname << endl;
  	cout << "Salary : " << salary << endl; 
  	}
  	
  	void increment(){
	cout<<"\nFirst name :" << fname << endl;
	cout<<"Last name :" << lname << endl;
    cout<<"Yearly salary without increment : " << (salary*12) << endl; 
	cout<<"Yearly salary with increment of 10% : " << (salary*12*1.1) << endl;
}
};



int main(){
	string fn, ln;
	int sal;
	int f,l,s;
	Employee user("Jay","Ram",150000);
	user.disp();
	cout<<"\nDo you need to change fname (0/1):";
	cin>>f;
	if(f==1){
		cout << "Enter new Firstname : ";
		cin >> fn;
		user.setf(fn);
	}
	cout<<"\nDo you need to change lname (0/1):";
	cin>>l;
	if(l==1){
		cout << "Enter new lastname : ";
		cin >> ln;
		user.setl(ln);
	}
	cout<<"\nDo you need to change monthly salary (0/1):";
	cin>>s;
	if(s==1){
		cout << "Enter new salary : ";
		cin >> sal;
		user.setsal(sal);
	}
	user.increment();
	
}
