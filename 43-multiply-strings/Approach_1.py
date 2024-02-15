#QUESTION: https://leetcode.com/problems/multiply-strings/description/
#T.C = O(m+n), where 'm' & 'n' are number of digits in nums1 & nums2.
#S.C = O(1)

class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        a=int(num1)

        return str(a*int(num2))