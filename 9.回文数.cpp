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
    return 0;
}

/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        string str=to_string(x);
        for(int i=0;i<str.size();i++){
            if(str[i]==str[str.size()-i-1]){
                continue;
            }else{
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

