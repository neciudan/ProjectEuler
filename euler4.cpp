#include <vector>
#include <iostream> 
#include <math.h>
#include <locale>
#include <sstream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;



int main()
{
	int y;
	vector<int> arr;
	

	int bignr ;
	int x1,x2,x3,x4,x5,x6;
	for (int i=100;i<1000;i++){
		for(int j=100;j<1000;j++){
			bignr=i * j;
			string nr2;
			ostringstream convert;
			convert << bignr;
			nr2=convert.str();
			if(nr2.length()==6){
				x6=bignr % 10;
				x5=(bignr-x6)/10%10;
				x4=((bignr-x6)/10-x5)/10%10;
				x3=(((bignr-x6)/10-x5)/10-x4)/10%10;
				x2=((((bignr-x6)/10-x5)/10-x4)/10-x3)/10%10;
				x1=(((((bignr-x6)/10-x5)/10-x4)/10-x3)/10-x2)/10%10;
				
 

				
				if((x1==x6) && (x2==x5) &&(x3==x4)){
					arr.push_back(bignr);


				}}}}
	std::vector<int>::iterator result;
	result = max_element(arr.begin(), arr.end());
	int position;
	position =distance(arr.begin(), result);

	//JESUS FUCKING CHRIST! 
	cout  << arr[position];
	cin>>y;

}




