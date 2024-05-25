#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOne(int arr[], int n) {

    int i = 0, j = n-1;

    while(i < j) {

        while(arr[i] == 0 && i < j )  {
            i++;
        }

        while(arr[j]==1 && i < j){
            j--;
        }

        //agar yha pohoch gye ho, iska matlab
        //arr[left]==1 and arr[right]==0
        if(i<j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

}
int main(){
    int size;
    cout<<"Enter the value of size : ";
    cin>>size;
    int arr[10];
    //taking input to array
    for(int i=0;i<size;i++){
        cout<<"The value at the index "<< i << " is : ";
        cin>>arr[i];
    }
    printArray(arr,size);
    cout<<"printing after the sorting " << endl;
    sortOne(arr,size);
    printArray(arr,size);
    return 0;
}