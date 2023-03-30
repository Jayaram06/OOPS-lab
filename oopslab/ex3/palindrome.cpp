#include <iostream>
using namespace std;

int main(){
string s;
cout << "Enter string : ";
cin >> s;
int len = s.length();
int j = len-1;
bool res = true;
for (int i=0; i<len; i++){
if(s[i]!=s[j]){
cout << "Not a palindrome !!!" << endl;
res = false;
break;
}
j--;
}
if (res){
cout << "Given string is a Palindrome" << endl;
}
}
