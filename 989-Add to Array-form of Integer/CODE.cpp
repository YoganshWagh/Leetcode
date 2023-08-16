//https://leetcode.com/problems/add-to-array-form-of-integer/description/

vector<int> Reverse(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;

    while (s < e)
        swap(v[s++], v[e--]);

    return v;
}

class Solution
{
public:
    vector<int> addToArrayForm(vector<int> &num, int k)
    {

        int n = num.size();
        int i = n - 1;

        int carry = 0;

        vector<int> v;

        while (i >= 0)
        {
            int val1 = num[i];
            int val2 = k;

            if (i == n - 1)
            {
                int sum = val1 + val2 + carry;
                carry = sum / 10;
                sum = sum % 10;
                v.push_back(sum);
                i--;
            }
            else
            {
                int sum = val1 + carry;
                carry = sum / 10;
                sum = sum % 10;
                v.push_back(sum);
                i--;
            }
        }

        // SECOND CASE WHEN SIZE OF BOTH ARRAYS IS SAME BUT CARRY IS REMAINING:
        while (carry > 0)
        {
            int sum = carry;
            carry = sum / 10;
            sum = sum % 10;
            v.push_back(sum);
        }

        // WE NEED TO REVERSE OUR ARRAY AS ARRAY IS GIVING REVERSE ANSWER:
        v = Reverse(v);
        return v;
    }
};