class Solution:
    def findComplement(self, num: int) -> int:
        a = math.log2(num)
        a = math.floor(a)
        a+=1
        a = math.pow(2,a)-1
        a = int(a-num)
        return a
