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

    for(int i = lower,j = 0 ; i<=upper ; i++){
        if(j++ < 10)std::cout<<i<<" ";
        else{
            j = 0;
            std::cout<<i<<" "<<std::endl;
        }
    }
}