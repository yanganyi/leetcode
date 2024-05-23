class Solution:
    def findRelativeRanks(self, score: List[int]) -> List[str]:
        ss = sorted(score, reverse=True)
        medals = ["Gold Medal", "Silver Medal", "Bronze Medal"]
        ranks = {score: medals[i] if i<3 else str(i+1) for i,score in enumerate(ss)}
        return [ranks[score] for score in score]
    
# Python    
# 64 ms (beats 60.43%)
# 17.50 mb (beats 97.70%)