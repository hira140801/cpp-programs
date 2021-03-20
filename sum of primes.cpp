#include<iostream>
using namespace std;
bool isprime(int n){
	if(n==1 || n==0){
		return false;
	}
		for(int i=2;i<=n/2;i=i+1){
			if(n%i==0){	
				return false;
				break;
			}
		}
	return true;
}
void psum(int num){
	for(int i=0;i<num/2;i=i+1){
		if(isprime(i)){
			if(isprime(num-i)){
				cout<<num<<"="<<i<<"+"<<num-i<<endl;
			}
		}
	}
}
int main(){
	int number;
	cout<<"Enter any number"<<endl;
	cin>>number;
	psum(number);
	return 0;
}
