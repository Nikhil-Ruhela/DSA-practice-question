#include<iostream>
using namespace std;

void rotate(int arr[], int n)
{
    int start = 0;
    int end = n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
    }
}

int print_array(int arr[] , int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<"";
        }
        cout<<endl;
    }

int main(){
    int arr[] = {0,1,2,3,4,5,6,7};
    int n= 8;
    // print array before rotate
    cout<<"printing array before rotate"<<endl;
    print_array(arr, n);
    // print array after rotate
    rotate(arr ,n);
    print_array(arr, n);
    
    
    return 0;
}