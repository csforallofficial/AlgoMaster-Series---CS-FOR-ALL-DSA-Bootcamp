int maximumScore(int a, int b, int c) {
        //create a max heap
        priority_queue<int> pq;

        //Push the three piles into the max heap
        pq.push(a);
        pq.push(b);
        pq.push(c);

        //create a score variable to store the maximum score
        int score=0;

        //create a "one" variable to store the 1st largest pile and "two" variable to store the 2nd larges pile
        int one, two;

        //run the process until the max heap has only pile left
        while(pq.size()>=2){
            one = pq.top();
            pq.pop();
            two = pq.top();
            pq.pop();
            one--;
            two--;
            score++;
            if(one!=0)
                pq.push(one);
            if(two!=0)
            pq.push(two);
        }
        return score;
    }

//Time Complexity - O(2(a+b+c)log3) -> where a,b & c = number of stones in the 3 piles
//Space Complexity - O(3) ~ O(1)
