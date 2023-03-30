#include <iostream>
using namespace std;

int main(){
string line,key;
int ind;
bool res;
cout << "Enter a sentence : ";
getline(cin, line);
cout << "Enter key word to search : ";
cin >> key;
int l1 = line.length();
int l2 = key.length();
for(int i=0; i<l1; i++){
if (line[i]==key[0]){
int k=i;
res = true;
ind = i; 
for (int j=0; j<l2; j++){
if (line[k]!=key[j]){
res = false;
break;
}
k++;
}
}
}
if(res){
cout << "Key is found in the sentence at index " << ind << endl;
}
else{
cout << "Key not found" << endl;
}

}
