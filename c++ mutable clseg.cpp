#include<iostream>
using namespace std;
class test{

public :
	int x;
	mutable int y;
	test(){
		x=4;
		y=10;
	}
	};
	int main(){
		const test t1;
		t1.y=20;
		cout<<t1.y;
		return 0;
	}
	
	

