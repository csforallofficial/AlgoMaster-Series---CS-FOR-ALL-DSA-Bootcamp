vector<int> smallestRange(vector<vector<int>>& nums) {
        int k = nums.size();
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
        int maxi = INT_MIN;
        for(int index = 0; index < k; index++){
            //pair<value, pair<cur_list,cur_index>>
            //value = nums[index][0]
            //cur_list = index
            //cur_index = 0
            //make_pair(nums[index][0], make_pair(index, 0))
            pq.push(make_pair(nums[index][0], make_pair(index, 0)));
            maxi = max(maxi, nums[index][0]);
        }
        //pq.first -> value
        //pq.second -> pair
        //pq.second.first -> cur_list
        //pq.second.second ->cur_index
        int mini = pq.top().first;
        int left = -1e5, right = 1e5;
        if(maxi-mini<right-left){
            left = mini;
            right = maxi;
        }
        int cur_list = pq.top().second.first;
        int cur_ind = pq.top().second.second;

        //next_element = nums[cur_list][cur_ind+1]
        //next_element_cur_list = cur_list
        //next_element_cur_ind = cur_ind+1
        //make_pair(nums[cur_list][cur_ind+1], make_pair(cur_list,cur_ind+1));
        pq.pop();
        while(cur_ind+1<nums[cur_list].size()){
            pq.push(make_pair(nums[cur_list][cur_ind+1], make_pair(cur_list,cur_ind+1)));
            maxi = max(maxi, nums[cur_list][cur_ind+1]);
            mini = pq.top().first;
            if(maxi-mini<right-left){
                left = mini;
                right = maxi;
            }
            cur_list = pq.top().second.first;
            cur_ind = pq.top().second.second;
            pq.pop();
        }
        vector<int> ans;
        ans.push_back(left);
        ans.push_back(right);
        return ans;
    }

//Time Complexity - O(klogk)+O(N*klogk) -> where k is the number of lists present and N is the maximum size of list present
//Space Complexity - O(k) + O(2)
