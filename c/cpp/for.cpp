
int getMaxOrMin(int *arr,int count,bool isMax) 
{
	int temp = arr[0];
	for (int i=0;i<count;i++) {
		if(isMax) {
			if(temp<arr[i]) {
				temp = arr[i]
			}
		}else {
			if(temp>arr[i]) {
				temp = arr[i]
			}
		}
	}	
}


#include <stdlib.h>
#include <iostream>
using namespace std;
int main(void)
{
	int arr1[4] = {3,5,1,7};
	bool isMax = false;

	cin>>isMax;
	cout<<getMaxOrMin(arr1,4,isMax)<<endl;

	system("pause");
	return 0;
}
