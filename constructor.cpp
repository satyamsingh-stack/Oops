#include<bits/stdc++.h>
using namespace std;
class Hero{
	private:
	int health;
	public:
	int level;
	Hero(){
		cout<<"Constructor is called"<<endl;
	}
	int getHealth(){
		return health;
	}
	int getLevel(){
		return level;
	}
	void setHealth(int h){
		health=h;
	}
	void setLevel(char ch){
		level=ch;
	}
};
int main(){
	//statically called
	Hero h1;
	return 0;
}
