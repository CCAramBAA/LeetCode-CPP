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
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
class Solution {
public:
    int func(char c){
        if(c=='I'){
            return 1;
        }else if(c=='V'){
            return 5;
        }else if(c=='X'){
            return 10;
        }else if(c=='L'){
            return 50;
        }else if(c=='C'){
            return 100;
        }else if(c=='D'){
            return 500;
        }else if(c=='M'){
            return 1000;
        }else{
            return 0;
        }
    }
    int romanToInt(string s) {
        int sum=0;
        int p,q;
        for(int i=0;i<s.size();i++){
            if(i==s.size()-1){
                sum+=func(s[i]);
            }else{
                p=func(s[i]);
                q=func(s[i+1]);
                if(p>=q){
                    sum+=p;
                }else{
                    sum-=p;
                }
            }
        }
        return sum;
    }
};
// @lc code=end

