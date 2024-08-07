// -------------- APPROACH 1 ---------------

// TC = O(N)

class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    
	    int count = 0;
	    
	    for(int i = 0; i < n ; i++){
	        if(arr[i] != 0){
	            arr[count] = arr[i];
	            count++;
	        }
	    }
	    while(count < n){
	        arr[count++] = 0;
	    }
	}
};