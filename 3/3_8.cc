#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1,s2,s3;
     while(cin >> s1){
         s2 += s1;
         s3 += s1;
         s3 += " ";
     }

     cout<<"Concatenation : "<<s2<<endl;
     cout<<"Concatenation with spaces : "<<s3<<endl;
}

