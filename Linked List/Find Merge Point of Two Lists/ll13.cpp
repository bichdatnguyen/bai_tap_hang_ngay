// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
     SinglyLinkedListNode *temp1 = head1, *temp2 = head2;
     int ans;
     bool haveAns = false;
     
     while(temp2->next != nullptr) {
         if(temp2->next == head1) {
             ans = head1->data;
             haveAns = true;
             break;
         }
         temp2 = temp2->next;
     }
     
     if(haveAns) return ans;
     temp2 = head2;
     
     while(temp1->next != nullptr) {
         if(temp1->next == head2) {
             ans = head2->data;
             haveAns = true;
             break;
         }
         temp1 = temp1->next;
     }
     
     if(haveAns) return ans;
     temp1 = head1;
     
     while(temp2->next != nullptr) {
         while(temp1->next != nullptr) {
             if(temp1->next == temp2->next) {
                 ans = temp1->next->data;
                 haveAns = true;
                 break;
             }
             temp1 = temp1->next;
         }
         if(haveAns) break;
         temp1 = head1;
         temp2 = temp2->next;
     }
     
     return ans;
}
