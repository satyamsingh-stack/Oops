#include<bits/stdc++.h>
using namespace std;
class Hero{
	public:
	int health;
	char level;
};
int main(){
	Hero h1;
	h1.health=90;
	h1.level='A';
	cout<<h1.health<<endl;
	cout<<h1.level;
	return 0;	
}
