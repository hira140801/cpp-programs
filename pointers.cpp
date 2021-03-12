#include<iostream>
using namespace std;

int main(){
	int arr[5];
	int *ptr;
	cout<<"Enter elements : ";
	for(int i=0;i<5;i=i+1){
		int ele;
		cin>>ele;
		arr[i]=ele;
	}
	cout<<"You Entered"<<endl;
	ptr=&arr[0];
	for(int i=0;i<5;i=i+1){
		cout<<*ptr<<" ";
		ptr++;
	}
}
