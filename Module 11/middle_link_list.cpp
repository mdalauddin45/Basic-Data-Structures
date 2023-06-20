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
// class Solution {
// public:
//     int size(ListNode* head)
//     {
//         int i=0;
//         while(head!=NULL)
//         {
//             i++;
//             head=head->next;
//         }
//         return i;
//     }
//     ListNode* middleNode(ListNode* head) {
//         ListNode* temp = head;
//          for(int i=0;i<size(head)/2;i++)
//             {
//                 temp=temp->next;
//             }
//             return temp;
//     }
// };