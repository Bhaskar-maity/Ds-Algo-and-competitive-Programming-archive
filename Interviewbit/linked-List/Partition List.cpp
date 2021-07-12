// https://www.interviewbit.com/problems/partition-list/

// Given a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.

// You should preserve the original relative order of the nodes in each of the two partitions.

// For example,

// Given 1->4->3->2->5->2 and x = 3,

// return 1->2->2->4->3->5.
ListNode* partition(ListNode* A, int B) {
    ListNode* small = new ListNode(0);
    ListNode* high = new ListNode(0);

    ListNode* smallHead = small;
    ListNode* highHead = high;

    while(A != NULL){
        if(A->val < B){
            smallHead = A;
            smallHead = smallHead->next;
        } else {
            highHead = A;
            highHead = highHead->next;
        }
        A=A->next;
    }
    highHead->next=NULL;
    smallHead->next = high;

    return small;
}


// =================2nd sln=====================
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) {
    
    
    ListNode* temp1=new ListNode(0);
    ListNode* temp2=new ListNode(0);
    
    ListNode *start1=temp1,*start2=temp2;
    
    while(A){
        
        if(A->val<B){
            
                start1->next=A;
                A=A->next;
                start1=start1->next;
            
        }
        
        
        else {
                
                
                start2->next=A;
                A=A->next;
                start2=start2->next;
                
                
                
            
        }
        
        
        
        
    }
    
   
    start1->next=temp2->next;
    
    start2->next=NULL;
    
    return temp1->next;
    
    
    
}
