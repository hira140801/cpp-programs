#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Time{
	int sec,hr,min,tt;
	public:
		Time(int h,int m,int s){
			sec=s;
			hr=h;
			min=m;
			tt=hr*60*60+min*60+s;
		}
		void display(){
			cout.fill('0');
			cout<<"The Time is= ";
			cout<<setw(2)<<hr<<":";
			cout<<setw(2)<<min<<":";
			cout<<setw(2)<<sec<<endl;
			cout<<"Total Time in Seconds: "<<tt;
		}
};

int main(){
	int se,ho,mi;
	cout<<"Hours?"<<endl;
	cin>>ho;
	cout<<"Minutes?"<<endl;
	cin>>mi;
	cout<<"Seconds?"<<endl;
	cin>>se;
    Time t(ho,mi,se);
	t.display();
	
}
