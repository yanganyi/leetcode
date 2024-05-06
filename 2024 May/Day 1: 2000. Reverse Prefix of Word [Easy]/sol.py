class Solution(object):
    def reversePrefix(self, word, ch):
        if ch not in word: return word
        j=word.index(ch)
        return word[:j+1][::-1]+word[j+1:]

# Python    
# 8 ms (beats 90.53%)
# 11.68 mb (beats 65.06%)