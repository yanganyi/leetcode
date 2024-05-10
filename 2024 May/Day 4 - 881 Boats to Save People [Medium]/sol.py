class Solution:
    def numRescueBoats(self, people: List[int], limit: int) -> int:
        people.sort()
        ans = 0
        l = 0
        r = len(people) - 1
        
        while l <= r:
            ans += 1
            if people[l] + people[r] <= limit:
                l += 1
            r -= 1

        return ans
    
# Python    
# 341 ms (beats 86.63%)
# 23.22 mb (beats 91.54%)