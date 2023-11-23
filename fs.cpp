#include<iostream>
using namespace std;
int main()
{
	int arr[3] = {3,2,4};
	int target = 6;
	for(int i=0;i<3;i++)
	{
		for(int j=i+1;j<3;j++)
		{
			if(arr[i]+arr[j]==target)
			{
				cout<<"[ "<<i<<"  "<<j<<"]\n"<<endl;
			}
		}
	}
}
