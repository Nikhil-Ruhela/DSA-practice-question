#include<iostream>
using namespace std;

void reverse_array(int arr[] , int start , int end){
    // start = 0;
    // end = arr.size();
    if(start >= end){
        return;
    }
    while(start<=end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }

}

void print(int arr[] , int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {2,3,4,5,1,7};
    int size = sizeof(arr)/sizeof(arr[0]);

    // printing original array
    cout<<"Original array : ";
    print(arr,size);

// printing reversed array

   cout<<"Reversed array : ";
   reverse_array(arr,0 , size-1);

   print(arr , size);



    return 0;
}