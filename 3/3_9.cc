#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main(){
    string s,s1;
    cin >> s;

    for(string::size_type i = 0 ; i < s.length(); i++){
        if(!ispunct(s[i]))s1 += s[i]; 
    }

    cout<<s1<<endl;
}