class Solution:
    def maximumWealth(self, acc: List[List[int]]) -> int:
        tot=0
        max1=0
        for i in acc:
            tot=0
            for money in i:
                tot = tot+money
                if tot>max1:
                    max1 = tot
        return max1
