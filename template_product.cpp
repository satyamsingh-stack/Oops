#include<iostream>
using namespace std;
template <class T1,class T2>
void product(T1 a,T2 b){
	cout<<"Product of "<<a<<" and "<<b<<" is "<<a*b<<endl;
}
int main(){
	product(2,3);
	product(2,3.1);
	product(3,'A');
	return 0;
}
