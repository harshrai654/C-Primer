#include<iostream>

int main(){
    int lower,upper,v1,v2;
    std::cout<<"Enter two numbers "<<std::endl;
    std::cin>>v1>>v2;

    if(v1 > v2){
        lower = v2;
        upper = v1;
    }else{
        lower = v1;
        upper = v2;
    }

    std::cout<<"Numbers between (inclusive)"<<lower<<" & "<<upper<<" are"<<std::endl;

    for(int i = lower ; i<=upper ; i++)std::cout<<i<<" ";
    std::cout<<std::endl;
}