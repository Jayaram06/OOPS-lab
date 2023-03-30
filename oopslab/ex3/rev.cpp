#include <iostream>
using namespace std;

int main(){
string s1,s2;
cout << "Enter string : ";
cin >> s1;
s2=s1;
int len = s1.length(), i=0;
for (int j=len-1; j>=0; j--){
s2[i] = s1[j];
i++;
}
cout << "Reversed string is : " << s2 << endl;
return 1;
}
