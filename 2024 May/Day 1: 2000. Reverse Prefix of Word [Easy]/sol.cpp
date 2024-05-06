class Solution {
public:
    string reversePrefix(string word, char ch) {
        for (int i=0;i<word.size();i++){
            if (word[i]==ch){
                reverse(word.begin(),word.begin()+i+1);
                break;
            }
        }

        return word;
    }
};

// C++
// 0 ms (beats 100.00%)
// 7.51 mb (beats 28.35%)