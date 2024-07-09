#include<iostream>
#include<queue>
using namespace std;

class heap {

    public:
    int arr[100];
    int size;

    //constructor
    heap() {
        arr[0] = -1;
        size = 0;
    }

    //insertion in heap 
    void insert(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index/2;

            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else{
                return ;
            }
        }
    }

    //printing heap value
    void print(){
        for(int i=1; i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    //deletion operation
    void deleteFromHeap(){
        if(size == 0){
            cout<<"Nothing to delete "<<endl;
            return ;
        }

        //put the last element in first of heap
        arr[1] = arr[size];
        //remove the last element
        size--;

        // put the element at its right position
        int i = 1;
        while( i < size){
            int leftIndex = 2*i;
            int rightIndex = 2*i + 1;

            if(leftIndex < size && arr[i] < arr[leftIndex]){
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if(rightIndex < size && arr[i] < arr[rightIndex]){
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else{
                return ;
            }
        }
    }
};

void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left <= n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right <= n && arr[largest] < arr[right]){
        largest = right;
    }

    if(largest != i){
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n){
    int size = n;

    while(size > 1){
        //swap 
        swap(arr[size], arr[1]);
        size--;

        //calling heapify 
        heapify(arr, size, 1);
    }
}

int main(){

    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();

    h.deleteFromHeap();
    h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;

    //heap creation
    for(int i = n/2; i>0; i--){
        heapify(arr, n, i);
    }
    
    cout<<"printing the array now "<<endl;
    for(int i=1; i <= n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //heap sort
    heapSort(arr, n); 
    cout<<"Printing the heap sort value "<<endl;
    for(int i=1; i <= n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //max heap
    priority_queue<int> pq;

    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout<<"Element at top "<<pq.top() <<endl;
    pq.pop();
    cout<<"Element at top " << pq.top() << endl;
    cout<<"Size is " << pq.size() << endl;

    if(pq.empty()){
        cout<<"pq is empty " <<endl;
    }
    else{
        cout<<"pq is not empty "<<endl;
    }

    // min heap
    priority_queue<int, vector<int>, greater<int>> minheap;
    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);

    cout<<"Element at top "<<minheap.top() <<endl;
    minheap.pop();
    cout<<"Element at top " << minheap.top() << endl;
    cout<<"Size is " << minheap.size() << endl;

    if(minheap.empty()){
        cout<<"minheap is empty " <<endl;
    }
    else{
        cout<<"minheap is not empty "<<endl;
    }

    return 0;
}