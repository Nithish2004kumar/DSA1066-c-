#include<iostream>
#include<string>
int main(){
	std::string str="hello world";
	std::string*ptr=&str;
	std::cout<<"value of str:"<<*ptr<<std::endl;
	return 0;
}
