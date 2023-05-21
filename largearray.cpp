#include<iostream>
using namespace std;
int main(){
	
	int i,j,large,n;
	
	cout << "Enter the number : ";
	cin >> n;
	
	int arr[n];
	
	for (i=0;i<n;i++){
		
		cin >> arr[i];
	}
	
	for(j=0;j<n;j++){
		
		if(arr[j]>arr[j+1]&&arr[j]>arr[j+2]){
			large = arr[j];
		}
		else if(arr[j+1]>arr[j]&&arr[j+1]>arr[j+2]){
			large = arr[j+1];
		}
		else{
			
			large = arr[j+2];
		}
	
}
	cout << "the largest element is : " << large;
	
	
	return 0;
	
	
}
