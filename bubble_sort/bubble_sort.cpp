
#include<iostream>

using namespace std;

int main()
{
    int arr[] = {200, 0, 1, 0, 600};
    int n = sizeof(arr)/sizeof(arr[0]);
	for(int i=1;i<n;++i)
	{
		for(int j=0;j<(n-i);++j)
			if(arr[j]>arr[j+1])
			{
			    int s;
				s=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=s;
			}
	}

	for(int i=0;i<n;++i)
		cout<<" "<<arr[i];

	return 0;
}

