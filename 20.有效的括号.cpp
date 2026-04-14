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
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> ss;
        for(auto p:s){
            if(p=='('||p=='['||p=='{'){
                ss.push(p);
            }

            else{
                if(ss.empty()){
                    return false;
                }
                char top=ss.top();
                if( p==')'&&top!='('||
                    p==']'&&top!='['||
                    p=='}'&&top!='{'){
                        return false;
                }

                ss.pop();
            }
        }
        return ss.empty();
    }
};
// @lc code=end

