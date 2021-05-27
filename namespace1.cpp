#include<iostream>
using namespace std;
namespace first{
	class Demo{
		public:
			static void Hello(){
				cout<<"Welcome to First Namespace"<<endl;  /*if static is used along with method name then it does not need any object to call*/				
			}
	};
}
namespace second{
	class Demo{
		public:
			void hi(){
				cout<<"Welcome to Second Namespace"<<endl; /*If static is not used with method name then it must need a object during calling */
			}
	};
}
int main(){
	first::Demo::Hello();
	second::Demo x;
	x.hi();
	return 0;
}
