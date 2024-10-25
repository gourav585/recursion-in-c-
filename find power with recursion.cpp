#include<iostream>
using namespace std;
int power(int n,int p){
	if(p==0){
		return 1;
	}
	int prevpowre = power(n,p-1);
	return n*prevpowre;
}

int main(){
	int n,p;
	cout<<"enter you value of beas =>";
	cin>>n;
	cout<<"enter you value of power =>";
	cin>>p;
	cout<<power(n,p)<<endl;
	

}
