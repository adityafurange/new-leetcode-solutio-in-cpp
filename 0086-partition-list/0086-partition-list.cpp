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
    ListNode* partition(ListNode* head, int x) {

       ListNode* small_dummy=new ListNode(0);
        ListNode *small=small_dummy;
small->next=NULL;
         ListNode* tall_dummy=new ListNode(0);
           ListNode *tall=tall_dummy;
tall->next=NULL;
           ListNode *temp=head;
           while(temp!=NULL )
           { if(temp->val<x)
           {
            small->next=temp;
            small=small->next;
           temp=temp->next;
           }
           else
          {
            tall->next=temp;
           tall=tall->next;
           temp=temp->next;
          }


           }
           small->next=tall_dummy->next;
           tall->next=NULL;

           return small_dummy->next;
    }
};