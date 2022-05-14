#include<bits/stdc++.h>
using namespace std;
class Hero{
	private:
	int health;
	public:
	char level;
	int getHealth(){
		return health;
	}
	char getLevel(){
		return level;
	}
	void sethealth(int h){
		health=h;
	}	
	void setlevel(int ch){
		level=ch;
	}
};
int main(){
	Hero h1;
	h1.sethealth(70);
	h1.setlevel('A');
	cout<<h1.getLevel()<<endl;
	cout<<h1.getHealth()<<endl;
	return 0;
}
