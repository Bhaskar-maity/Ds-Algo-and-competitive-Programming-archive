/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    int cnt1=0,cnt0=0;
    ListNode* head = A;

    while(A!=NULL) {
        if(A->val == 1) cnt1++;
        else cnt0++;
        A=A->next;
    }

    A=head;
    for(int i=0; i<cnt0;  i++){
        A->val=0;
        A=A->next;
    }
    for(int i=0; i<cnt1;  i++){
        A->val=1;
        A=A->next;
    }
    return head;
}