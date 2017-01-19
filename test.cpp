#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int>test;
	for(int i=0;i<10;i++)
	{
		test.push_back(i*2);
	}
	for(int i=0;i<10;i++)
	{
		cout<<test[i]<<endl;
	}
	vector<int>::iterator up,low;
	low = lower_bound(test.begin(),test.end(),3);
	up = upper_bound(test.begin(),test.end(),3);
	cout<<"Begin"<<" "<<test.begin()-low<<"  "<<test.begin()-up<<endl;
	cout<<"End"<<" "<<test.end()-low<<"  "<<test.end()-up<<endl;

}