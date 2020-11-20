#include<iostream>
#include<string>

int globalInt;
std::string globalStr;
int main(){
    int localInt;
    std::string localStr;
    std::cout << "Global Integer" << globalInt <<std::endl;
    std::cout << "Local Integer " << localInt <<std::endl;

}
//  Strange behaviour of local intger w.r.t. string defined or not
//  When String not defined local and global both int results into default initialization of 0

//  when string is decalred as above local integer results into garbage value