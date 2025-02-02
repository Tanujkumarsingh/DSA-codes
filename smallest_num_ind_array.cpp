#include<iostream>
#include<climits>
#define  num INT_MAX
using namespace std;

int main(){
int arr[]= {5, 15, 22,  1, -15, 24};
int size = sizeof(arr)/sizeof(int);
int smallest = num ;
for(int i = 0; i<size; i++){
    if(arr[i]<smallest){
        smallest = i;
    }
}
cout<<smallest<<endl;

    return 0;
}