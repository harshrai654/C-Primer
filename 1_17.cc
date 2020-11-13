//Unknown number of inputs

#include<iostream>

int main(){
    int v,sum = 0;
    std::cout<<"Enter numbers : "<<std::endl;

    // when state of stream becomes invalid i.e 
    // {EOF (CTRL + D) or data type mismatch} 
    // than condition becomes false

    while(std::cin >> v){ 
        sum += v; 
    }

    std::cout<<"Sum is : "<<sum<<std::endl;

    return 0;
}