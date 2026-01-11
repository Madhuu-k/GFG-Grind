// Problem Link: https://www.geeksforgeeks.org/problems/power-set4302/1
// Time Complexity: O(n.2^n)

class Solution {
public:
    void PowerSet(string s, vector<string>& ans, int i, string res){
        if(i == s.size()){
            ans.push_back(res);
            return;
        }

        res.push_back(s[i]);
        PowerSet(s, ans, i + 1, res);

        res.pop_back();
        PowerSet(s, ans, i + 1, res);

    }
    vector<string> AllPossibleStrings(string s) {
        // Code here
        vector<string> ans;
        string res = "";
        PowerSet(s, ans, 0, res);
        sort(ans.begin(), ans.end());
        return ans;

    }
};