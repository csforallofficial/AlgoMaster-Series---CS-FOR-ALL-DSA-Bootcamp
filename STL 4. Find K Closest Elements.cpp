vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        //create a Min Heap of Pairs(Absolute Difference between current element and x, index of the current element)
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

        //push all the pairs into the Min Heap
        for(int index = 0; index < arr.size(); index++){
            pq.push(make_pair(abs(x-arr[index]),index));
        }

        //create ans vector to store the final answer
        vector<int> ans;

        //consider "k" most prioritised pairs and push the element at that index into the ans vector
        while(k--){
            ans.push_back(arr[pq.top().second]);
            pq.pop();
        }

        //sort the answer vector and return the final ans
        sort(ans.begin(),ans.end());
        return ans;
    }

//Time Complexity - O(NlogN) + O(klogN) + O(klogN)
//Space Complexity - O(k)
