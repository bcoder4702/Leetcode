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
bool flag=false;
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        solve(head,n,count);
        if(!flag){
            ListNode *curr=head;
            head=head->next;
            delete(curr);
        }
        return head;
    }
    void solve(ListNode *head,int n,int &count){

        if(head==NULL){
            return;
        }
        solve(head->next,n,count);
        if(count==n){
            ListNode* curr=head;
            ListNode* next=curr->next;
            ListNode* next_to_next=curr->next->next==NULL?NULL:curr->next->next;
            curr->next=next_to_next;
            delete(next);
            flag=true;
        }
        count++;
    }
};