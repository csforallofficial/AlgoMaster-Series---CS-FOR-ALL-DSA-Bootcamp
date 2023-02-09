vector<int> smallestRange(vector<vector<int>>& nums) {
        int k = nums.size();
        int left = -1e5, right = 1e5, maxi = INT_MIN;
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
        for(int index = 0; index < k; index++){
            pq.push(make_pair(nums[index][0],make_pair(index,0)));
            maxi = max(maxi, nums[index][0]);
        }
        left = pq.top().first;;
        right = maxi;
        int current_list = pq.top().second.first;
        int current_index = pq.top().second.second;
        pq.pop();
        while(current_index+1<nums[current_list].size()){
            pq.push(make_pair(nums[current_list][current_index+1],make_pair(current_list,current_index+1)));
            maxi = max(maxi,nums[current_list][current_index+1]);
            int mini = pq.top().first;
            if((right-left)>(maxi-mini)){
                left = mini;
                right = maxi;
            }
            current_list = pq.top().second.first;
            current_index = pq.top().second.second;
            pq.pop();
        }
        vector<int> ans;
        ans.push_back(left);
        ans.push_back(right);
        return ans;
    }

//Time Complexity - O(klogk)+O(N*klogk) -> where k is the number of lists present and N is the maximum size of list present
//Space Complexity - O(k) + O(2)
