#include<iostream>
#include<conio.h>
#include<array>

using namespace std;

int search_linear(int arr[], int element, int c)
{
    int e = element;
    for(int a= 0; a<c; a++)
    {
        if(arr[a] == e )
        {
            return a;
        }
    }
    return 1;
}
int main()
{
    int element = 1000;
    int arr[] = {10, 100, 100, 100, 100000, 1000, 1} ;
    int c = end(arr) - begin(arr) ;
    int s_linear = search_linear(arr, element, c);
    if(s_linear == 1)
    {
        cout<<"element not found";
    }
    else if(s_linear != 1)
    {
        cout<<"Element found at index "<<s_linear ;
    }

    return 0;

}
