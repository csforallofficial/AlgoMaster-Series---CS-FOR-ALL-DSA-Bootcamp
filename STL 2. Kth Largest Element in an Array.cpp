1st -

int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end()); //Sort the array
        return nums[nums.size()-k]; //Return the kth largest element directly from the sorted array
    }

//Time Complexity - O(NlogN), where N = number of elements in the nums array
//Space Complexity - O(1)


2nd -

int findKthLargest(vector<int>& nums, int k) {
        int N = nums.size();
        //if k is <= N/2, we can take max heap any day
        if(k<=N/2){
            priority_queue <int> pq;
            for(int index = 0; index < N; index++)
                pq.push(nums[index]);
            k = k - 1;
            while(k--)
                pq.pop();
            return pq.top();
        }
        //else we can take min heap any day
        else{
            priority_queue <int, vector<int>, greater<int> > pq;
            for(int index = 0; index < N; index++)
                pq.push(nums[index]);
            k = N-k;
            while(k--)
                pq.pop();
            return pq.top();
        }    
    }

//Time Complexity - 
//1) O(NlogN + (k-1)LogN) -> While using Max Heap, where N = number of elements in the nums array
//2)O(NlogN + (N-k)LogN) -> While using Min Heap, where N = number of elements in the nums array
//Space Complexity - O(N), where N = number of elements in the nums array


3rd - 

int findKthLargest(vector<int>& nums, int k) {
        int N = nums.size();
        //create a Min Heap
        priority_queue <int, vector<int>, greater<int> > pq;
        //Push first k elements from nums array into Min Heap, the smalles among the k elements will be present at the top and we can directly access it
        for(int index = 0; index < k; index++){
            pq.push(nums[index]);
        }
        //push the rest of the elements one by one only after comparing with the top element. If the current element is greater than the top element, push the current element, else traverse to the next.
        for(int index = k; index < N; index++){
            if(nums[index]>pq.top()){
                pq.pop();
                pq.push(nums[index]);
            }
        }
        return pq.top();
    }

//Time Complexity - O(NlogN) -> where N = number of elements in the nums array
//Space Complexity - O(k)


Final - 

int findKthLargest(vector<int>& nums, int k) {
        int N = nums.size();
        k = N - k;
        int left = -1, right = 0, pivot = N-1;
        while(left!=k){
            if(left<k){
                pivot = N-1;
            }
            else{
                pivot = left-1;
                left = -1;
            }
            right = left+1;
            while(right<=pivot){
                if(nums[right]<=nums[pivot]){
                    left++;
                    swap(nums[left],nums[right]);
                }
                right++;
            }
        }
        return nums[left];
    }

//Time Complexity - O(N) -> where N = number of elements in the nums array
//Space Complexity - O(1)


