class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i=0,ans=0;
        int j=people.size(); j-=1;

        while(i<=j){
            if(people[i]+people[j]<=limit) i++;
            j--;
            ans++;
        }

        return ans;
    }
};

// C++
// 42 ms (beats 94.77%)
// 45.44 mb (beats 47.33%)