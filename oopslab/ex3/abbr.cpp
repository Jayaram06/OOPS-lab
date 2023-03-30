#include <iostream>
#include <cstring>
using namespace std;

int main(){
string s1,s2,s3,s4="";
cout << "Enter Fullname : ";
cin >> s1 >> s2 >> s3;
s4 = s4+s1[0]+'.'+s2[0]+'.'+s3;
cout << endl << s4 << endl;
}
