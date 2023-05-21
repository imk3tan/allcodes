#include<iostream>
using namespace std;

int main(){
	int i,j,k,l,n;
	
	cout << "Enter the Number : ";
	cin >> n;
	
	for(i=1;i<=n;i++){
		for(l=1;l<=n-i;l++){
			cout << " ";
	}
		if(i==1||i==n){
			for(j=1;j<=n;j++){
				cout << "*";
			}
		}
		else{
		
		cout << "*";
		for(k=1;k<=n-2;k++){
			cout << " ";
		}
		cout << "*";
	}

	cout << "\n";
	}
	
}
