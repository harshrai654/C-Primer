#include<iostream>

int main(){
    int base,expo,res = 1;
    std::cout<<"Enter Base : ";
    std::cin>>base;
    std::cout<<"Enter Exponent : ";
    std::cin>>expo;

    for(int i = 0; i != expo; i++)res *= base;

    std::cout<<std::endl<<expo<<" raised to the power of "<<base<<" is : "<<res<<std::endl;
}