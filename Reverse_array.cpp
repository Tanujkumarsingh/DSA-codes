#include<iostream>
using namespace std;
// swap function using two pointer approach
//temp is temporary variable
void swap(int *num1, int* num2){
    int temp= *num1;
    *num1 = *num2;
    *num2 = temp;
}
//reverse_Array function reverse the array using swap function 
void reverse_Array(int arr[], int size){
    int left = 0;
    int right = size-1;
    while(left < right){
        swap(&arr[left], &arr[right]);
        left++;
        right--;
    }
}

//display_array function print the element present in the array
void display_array(int arr[], int size){
for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
}
cout<<endl;
}

int main(){
int array[]= {4, 2, 7, 8, 1, 2, 5};
int size = sizeof(array)/sizeof(array[0]);

display_array(array, size); //call the display_array function and it will print the original array before reverse
reverse_Array(array, size);//call the reverse_array function for reverse the array
display_array(array, size);//call the display_array function and it will print the array after reverse
    return 0;
}