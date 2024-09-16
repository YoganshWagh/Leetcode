//QUESTION: https://leetcode.com/problems/minimum-time-difference/description/
//REFERENCE: https://youtu.be/ftCheG0m85k?si=LWySrtvIOK5cfbAO
//Approach 1: Sorting and Linear Scan.
//T.C = O(nlogn) + O(n) = O(nlogn), sorting of array takes O(nlogn).
//S.C = O(n), for creating "minutes" array.
class Solution {
public:
    int findMinDifference(vector<string>& timePoints) 
    {
        int n = timePoints.size();
        vector<int> minutes(n);
        //Calculating minutes for each entry in "timePoints" array.
        for(int i=0; i<n; i++){
            string HourStr = timePoints[i].substr(0,2); //HH
            string MinStr = timePoints[i].substr(3); //MM

            int HourInt = stoi(HourStr);
            int MinInt = stoi(MinStr);

            minutes[i] = HourInt*60 + MinInt;
        }

        sort(minutes.begin(), minutes.end());
        int result = INT_MAX;

        for(int i=1; i<n; i++){
            result = min(result, minutes[i]-minutes[i-1]);
        }
        return min(result, (24*60 - minutes[n-1]) + minutes[0]);
    }
};