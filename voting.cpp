#include<iostream>
using namespace std;

int main(){
	int age;
	string c;
	cout<<"Enter your age : ";
	cin>>age;
	if(age>=18){cout<<"You are eligible for voting!!!";}
	else{cout<<"You are underage to cast your vote.";}
	return 0;
}
