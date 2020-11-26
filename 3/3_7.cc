// String class overrides relational operators (<,>,>=,<=) , According to Dictionary


#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1,s2;
    cin >> s1 >> s2;

    if(s1 == s2)
        cout << "Entered Strings are equal(Same Content)\n";
    else if(s1 > s2)
        cout << "String " << s1 << " is Greater than String "<< s2 <<" (According to Dictionary)\n";
    else cout << "String " << s2 << " is Greater than String "<< s1 <<" (According to Dictionary)\n";
}

