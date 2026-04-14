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
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void func(ListNode*& L,int n){
        ListNode *newnode=new ListNode;
        newnode->val=n;
        newnode->next=nullptr;

        if (L == nullptr) {
            L = newnode;
            return;
        }

        ListNode *current=L;

        // ✅ 关键修复：比头节点小，插最前面
        if(n < current->val){
            newnode->next = current;
            L = newnode;
            return;
        }

        // ✅ 原来的逻辑（往后插）
        while(current->next!=nullptr && current->next->val < n){
            current=current->next;
        }

        newnode->next=current->next;
        current->next=newnode;
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* p=list2;
        while(p!=nullptr){
            func(list1,p->val);
            p = p->next;
        }
        return list1;
    }
};
// @lc code=end

