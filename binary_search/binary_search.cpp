#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<array>

using namespace std;

int finding_element(int arr[], int element, int no)
{
    int x = 0;
    int a = no; // a = number of elements
    int b = element; // b = element we are searching
    if(a%2 == 0) // it means no of element are even
    {
        int x = a / 2;
        if (arr[x] == b){
            return x;
        }
    }
   return 1;
}
int main()
{
    int element = 3;
    int arr[] = { 1, 3, 5, 7, 8, 900, 1000000, 34} ;
    int a = end(arr) - begin(arr); // here a = no of elements in arr
    int m = finding_element(arr, a, element);
    if (m==1){
        cout<<"element not found";
    }
    else{
        cout<<"element found at "<<m;
    }
    return 0;
}
