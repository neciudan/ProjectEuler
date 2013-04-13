#include <vector>
#include <iostream> 
using namespace std;

int main(){
	int i=2;
	int y;
	
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(2);
	int sum=0;
	do{
		int x=0;
		x=arr[i-2]+arr[i-1];
		arr.push_back(x);
		i++;
		

	}while(i<32);

	for(int j=0;j<arr.size();j++){
		if(arr[j] % 2==0){
			sum=sum+arr[j];
			
		}
		
	}
	
	cout<<sum;
	cin>>y;
}


