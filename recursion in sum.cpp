#include<iostream>
using namespace std;
int sum(int n){
	if(n==0){
		return 0;
	}
	int prevsum =sum(n-1);
	return n+prevsum;
}
int main(){
	int n;
	cout<<"enter your number ";
	cin>>n;
	cout<<"sum is => "<<sum(n)<<endl;
}
