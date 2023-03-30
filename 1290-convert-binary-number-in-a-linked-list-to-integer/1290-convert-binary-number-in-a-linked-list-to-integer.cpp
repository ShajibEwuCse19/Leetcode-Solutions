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
    int getDecimalValue(ListNode* head) {
        string str = "";
        ListNode* temp = head;
        while(temp != NULL)
        {
            int x = temp->val;
            str+=(x + '0');
            temp = temp->next;
        }

        reverse(str.begin(),str.end());

        int ans = 0LL;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i] == '1')ans+=pow(2,i);
        }

        return ans;
    }
};