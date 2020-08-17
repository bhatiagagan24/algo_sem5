// Insertion Sort

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter no of elements";
    int no_elem;
    cin>>no_elem;
    int *p;
    p = new int[no_elem];
    for(int d=0; d<no_elem; d++){
        cin>>p[d];
    }
for(int i = 1; i<no_elem; i++){
    int s = p[i];
    int g = i - 1;
    while(g>=0 && (p[g]>s)){
        p[g+1] = p[g];
        g = g - 1;
    }
    p[g+1] = s;
}
for(int m=0; m<no_elem; m++){
    cout<<p[m]<<" ";
}
}
