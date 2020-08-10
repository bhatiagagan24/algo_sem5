// program for bubble sort

#include<iostream>
#include<conio.h>
#include<array>
#include<stdio.h>
using namespace std;


int main()
{

   int arr[] = {10, 20, 1, 5, 2, 60, 23, 45};
   int x = end(arr) - begin(arr);
    for(int a =0; a<x; a++)
    {
        for (int b=0; b<(x-a-1);b++)
        {
            if(arr[b] > arr[a]){
                int c = arr[b];
                arr[b] = arr[b+1];
                arr[b+1] = c;
            }
        }
    }

    for(int abc=0; abc<x;abc++){
        cout<<arr[abc]<<" " ;}
    return 0;
}
