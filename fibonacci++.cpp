
#include<iostream>
using namespace std;
int fibonacci(int n){
	int a=0,b=1,c;
	if(n==1){
		return 0;
	}
	else if(n==2){
		return 1;
	}
	else{
		for(int i=2;i<n;i++){
			c=a+b;
			a=b;
			b=c;
		}
		return c;
	}
	
	
}

int main(){
	
int n;
	
	cout << "Enter The Value:-";
	cin >> n;
	
	cout << "nth term\n";
	cout<<fibonacci(n);
	
}
