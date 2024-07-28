#include<iostream>
using namespace std;
int main(){
	int number=42;
	int*ptr=&number;
	cout<<"the value of the integer is:"<<*ptr<<endl;
	return 0;
	
}
