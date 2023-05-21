#include<iostream>
using namespace std;
int main(){
	vector<int> arr={4,6,38,9};
	minmax(arr);
	
	int max,min=arr[0];
	for(int i=0;i<5;i++){
		if(arr[i]<min){
			min=arr[i];
		}
		else if(arr[i]>max){
			max=arr[i];
		}
	}
	cout<<max<<" "<<min;
}
