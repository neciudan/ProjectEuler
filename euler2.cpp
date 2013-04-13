#include <vector>
#include <iostream> 
using namespace std;



int main(){

	vector<int> arr;
	int sum=0;
	int y;

	for(int i=1;i<1000;i++)
	{
		if((i%3==0)||(i%5==0))
		{
			arr.push_back(i);
		};
		
	};
	for(int j=0;j<arr.size();j++){
		sum=sum+arr[j];
		//cout<<arr[j];
		
	};
	cout << sum;

	cin>>y;
}

