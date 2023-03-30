#include <iostream>
using namespace std;

int main(){
string line;
cout << "Enter a sentence : ";
getline(cin, line);
int len = line.length();
int cnt = 0;
for (int i=0; i<len; i++){
if (line[i] == ' '){
cnt++;
}
}
cnt++;
cout << "Number of words = " << cnt << endl << endl;
}
