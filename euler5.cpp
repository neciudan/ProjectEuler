#include <vector>
#include <iostream> 
#include <math.h>
#include <locale>
#include <sstream>
#include <string>
#include <algorithm>
#include <cmath>
#include <fstream>

using namespace std;

int main(){

int c1[200];
int y;
ifstream inFile;
inFile.open("file.txt");
std::vector<int> data;
if (!inFile) {
    cerr << "Unable to open file datafile.txt";
   // exit(1);   // call system to stop
}
string temp,temp2;
while (inFile >> temp)
	temp2.append(temp);

	
	char* res = new char[temp2.size()+1];
    strncpy(res, temp2.c_str(), temp2.size()+1);
	for(int i=0;i<1000;i++){

	int x=res[i]-48;
	int y=res[i+1]-48;
	int z=res[i+2]-48;
	int a=res[i+3]-48;
	int b=res[i+4]-48;
	int mult=x*y*z*a*b;
	data.push_back(mult);
	}
	std::vector<int>::iterator result;
	result = max_element(data.begin(), data.end());
	int position;
	position =distance(data.begin(), result);
	
	cout<<res[1]<<"\n"<<data[position];
	cin>>y;


}