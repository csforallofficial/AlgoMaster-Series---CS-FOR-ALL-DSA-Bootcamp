string getHint(string secret, string guess) {
        int A = 0, B = 0, N = secret.size();
        vector<int> secret_track(26,0);
        vector<int> guess_track(26,0);
        for(int index = 0; index < N; index++){
            if(secret[index]==guess[index])
                A++;
            else{
                secret_track[secret[index]-'0']++;
                guess_track[guess[index]-'0']++;
            }
        }
        string ans = "";
        ans += to_string(A)+"A";
        for(int index = 0; index < 26; index++){
            B += min(secret_track[index],guess_track[index]);
        }
        ans += to_string(B)+"B";
        return ans;
    }
    
//Time Complexity - O(N) + O(26), where N is the number of characters present in the Secret and Guess Strings.
//Space Complexity - O(2*26) + O(2)
