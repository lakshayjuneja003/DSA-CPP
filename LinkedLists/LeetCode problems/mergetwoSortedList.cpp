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

// solution without using any other list 
class Solution {
public:
    ListNode* solve(ListNode* list1, ListNode* list2) {
        if (list1->next == NULL) {  // No changes here
            list1->next = list2;
            return list1;
        }

        ListNode* curr1 = list1;
        ListNode* next1 = curr1->next;
        ListNode* curr2 = list2;
        ListNode* next2 = curr2 != NULL ? curr2->next : NULL;  // Initialization fixed

        while (next1 != NULL && curr2 != NULL) {
            if ((curr1->val <= curr2->val) && (next1->val >= curr2->val)) {  // Condition corrected
                // Insert curr2 between curr1 and next1
                curr1->next = curr2;
                curr2->next = next1;

                // Move to the next node in list2
                curr1 = curr2;  // Updating curr1 to curr2
                curr2 = next2;
                if (curr2 != NULL) {
                    next2 = curr2->next;
                }
            } else {
                // Move to the next node in list1
                curr1 = next1;
                next1 = next1->next;

                // If we reach the end of list1, attach the remaining part of list2
                if (next1 == NULL) {
                    curr1->next = curr2;
                    return list1;
                }
            }
        }

        // If list2 has remaining nodes, attach them
        if (curr2 != NULL) {  // Handling remaining nodes in list2
            curr1->next = curr2;
        }

        return list1;
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL) {  // No changes here
            return list2;
        }
        if (list2 == NULL) {
            return list1;
        }

        if (list1->val <= list2->val) {
            return solve(list1, list2);
        } else {
            return solve(list2, list1);
        }
    }
};

 //solution using any other list 
// another solution 
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
//     ListNode* mergeTwoLists(ListNode* A, ListNode* B) {
//         if(!A){return B;}
//         if(!B){return A;}
//         ListNode* head = new ListNode();
//         ListNode* currNode = head;
//         while(A && B){
//             if(A->val < B->val){
//                 currNode->next = A;
//                 A = A->next;
//             }
//             else{
//                 currNode->next = B;
//                 B = B->next;
//             }
//             currNode = currNode->next;
//         }
//         if(A){
//             currNode->next = A;
//         }
//         else if(B){
//             currNode->next = B;
//         }
//         return head->next;   
//     }
// };