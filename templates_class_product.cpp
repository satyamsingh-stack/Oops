#include<iostream>
using namespace std;
template <class T1,class T2>
class General{
	private:
		T1 a;
		T2 b;
	public:
		General(T1 a, T2 b){
			this->a=a;
			this->b=b;
		}
	void product(){
		cout<<"Product of "<<a<<" and "<<b<<" is "<<a*b<<endl;
	}
};
int main(){
	General <int,double> x(2,3.4);
	x.product();
	General <int,double> y(2,4.5);
	y.product();
	return 0;
}
