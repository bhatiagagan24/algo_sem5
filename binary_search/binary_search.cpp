#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<array>

using namespace std;

int binary_find(int arr[], int s, int a, int elem)
{
    if (a >= s) {
        int mid = s + (a - s) / 2;
        if (arr[mid] == elem)
            return mid;
        if (arr[mid] < elem)
            return binary_find(arr, mid + 1, a, elem);
        else
        return binary_find(arr, s, mid - 1, elem);

    }
    return -1;
}
int main()
{
    int element = 1;
    int arr[] = { 1, 3, 5, 7, 8, 900, 1000000, 34} ;
    int a = end(arr) - begin(arr); // here a = no of elements in arr
    int m = binary_find(arr, 0, a, element);
    if (m== -1){
        cout<<"element not found";
    }
    else{
        cout<<"element found at "<<m;
    }
    return 0;
}
