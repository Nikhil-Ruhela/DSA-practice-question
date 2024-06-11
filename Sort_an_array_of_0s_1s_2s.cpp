#include<iostream>
using namespace std;

 int sort012(int a[], int n)
    {
        int low = 0;
        int mid = 0;
        int high = n - 1;

    while (mid <= high) {
        switch (a[mid]) {
            case 0:
                swap(a[low], a[mid]);
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(a[high], a[mid]);
                high--;
                break;
        }
    }
    }

    int print_array(int arr[] , int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<"";
        }
        cout<<endl;
    }

int main(){
    int arr[] = {0,1,2,1,1,2,0,0};
    int n= 8;
    sort012(arr, n); // Call the sort function
    print_array(arr, n);
    return 0;
}