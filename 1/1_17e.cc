#include<iostream>

int main(){
    int v,count = 0;
    std::cout<<"Enter numbers "<<std::endl;

    while(std::cin>>v){
        if(v < 0)count++;
    }

    std::cout<<"Number of negative numbers : "<<count<<std::endl;

    return 0;
}