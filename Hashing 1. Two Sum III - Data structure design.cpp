#include<bits/stdc++.h>
using namespace std;

class TwoSum {
    private:
        vector<int> numbers;
        unordered_map<int,int> tracker;
    public:
        void add(int number) {
            numbers.push_back(number);
        }
        bool find(int value) {
            for(int index = 0; index < numbers.size(); index++){
                if(tracker.find(value-numbers[index])!=tracker.end())
                    return true;
            }
            return false;
        }
};

int main(){
    TwoSum test;
    test.add(2);
    test.add(1);
    test.add(7);
    test.add(6);
    test.add(10);
    test.add(8);
    test.add(9);
    bool ans = test.find(13);
    cout << ans << endl;
}
