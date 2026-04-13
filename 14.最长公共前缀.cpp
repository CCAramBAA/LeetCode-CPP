#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <queue>
#include <stack>
#include <deque>
#include <cmath>
#include <cstring>
#include <numeric>
#include <climits>

using namespace std;

int main() {
    Solution sol;
    // 测试用例
    return 0;
}
/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
class Solution {
public:
    string func(string str,int n){
        string res;
        for(int i=0;i<n;i++){
            res+=str[i];
        }
        return res;
    }

    string longestCommonPrefix(vector<string>& strs) {
        string res=strs[0];

        for(int i=1;i<strs.size();i++){
            string term=strs[i];
            for(int j=0;j<res.size();j++){
                if(res[j]!=term[j]){
                    res=func(res,j);
                }
            }
        }
        return res;
    }
};
// @lc code=end

