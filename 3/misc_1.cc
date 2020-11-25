#include<iostream>
#include<string>

using namespace std;

int main(){
    string s ;

    while(cin >> s){
        cout<<s<<endl;
    }
}

// Explanation : String type by default takes inout without whitespaces, thats the reason input of "Hello world" will give "Hello" ar output
// while the code with loop , just takes "how are you" as three space separated inputs, as we take input of three strings with cin (fo ex : cin>>s1>>s2>>s3; thats why output is "howareyou" [in case of no endl] and "how\nare\nyou\n" [with endl]
// for taking a line as input we use "getline function"