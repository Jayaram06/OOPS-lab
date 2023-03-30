#include <iostream>
using namespace std;

class account{
    private:
    string name;
    int bal;
    
    public:
    account(string x,int y){
        name=x;
        bal=y;
    }
    string getname(){
    return name;
    }
    int getbal(){
    return bal;
    }
    void credit(int c){
    if(c>0){
    cout<<"Credited successfully"<<endl;
	bal = bal+c;
    }
    else{
    cout<<"Credit value must be positive"<<endl;    
    }
	}
    void debit(int d){
    if((bal-d)>0){
        cout<<"Debited successfully"<<endl;
        bal = bal-d;
    }
    else{
        cout<<"Insufficient Balance"<<endl;
        
    }
}
};
int main(){
    int b,c,d,cre,deb;
    account user("Jay",1500);
    cout<<"Name : "<<user.getname()<<endl;
    cout<<"Balance : "<<user.getbal()<<endl;
    cout<<"\nEnter the amount to credit:";
    cin>>c;
    user.credit(c);
    cout<<"Enter the amount to debit:";
    cin>>d;
	user.debit(d);
    cout << "Current Balance : " << user.getbal() << endl;
}
