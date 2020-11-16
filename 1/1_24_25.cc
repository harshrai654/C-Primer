#include<iostream>
#include "Sales_item.h"

int main(){
    Sales_item temp,total;

    if(std::cin >> total){
        while(std::cin>>temp){
            if(compareIsbn(total,temp)){
                total = total + temp;
            }else{
                std::cout<<total<<std::endl;
                total = temp;
            }
        }

        std::cout<<total<<std::endl;
    }else{
        std::cout<<"Invalid Input"<<std::endl;
    }
}