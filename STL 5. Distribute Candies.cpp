//1st Approach - 

int distributeCandies(vector<int>& candyType) {

        //store the number of candies present
        int N = candyType.size();

        //create a set to store the unique candies
        set<int> st;

        //push all the candies into the set which will finally store only the unique candies
        for(int index = 0; index < N; index++){
            st.insert(candyType[index]);
        }

        //I have to choose <= N/2 candies. So if the set size is <= N/2, I will choose all, and if the set size is greater than N/2, we have to choose N/2 candies and not more than that. 
        if(st.size()<=N/2)
            return st.size();
        return N/2;
    }
    
    //Time Complexity - O(NlogN)
    //Space Complexity - O(N)

//Final Approach - 

    int distributeCandies(vector<int>& candyType) {
        int N = candyType.size();
        unordered_map<int,int> track;
        for(int index = 0; index < N; index++){
            track[candyType[index]]++;
        }
        if(track.size()<=N/2)
            return track.size();
        return N/2;
    }

    //Time Complexity - O(N)
    //Space Complexity - O(N)

