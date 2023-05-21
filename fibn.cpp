#include<iostream>
using namespace std;

int fabn(int a,int b){
	
	int sum = a+b;
	return sum;
}
int main{
	
	int n1,n2,n3,x;
	
	cout << "Enter the No. of element : ";
	cin >> x;
	
	cout << "\nEnter the elements : ";
	cin >> n1 >> n2;
	
	n3 = fabn(n1,n2);
	
	n1 = n2;
	n2 = n3;
}
