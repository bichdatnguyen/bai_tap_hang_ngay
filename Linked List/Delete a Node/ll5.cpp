/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    int pos = 0, listLen = 0;
    SinglyLinkedListNode* temp1 = llist, *temp2 = NULL;
    
    if(position == 0) {
        llist = llist->next;
        return llist;
    }
    
    while(pos < position) {
        temp2 = temp1;
        temp1 = temp1->next;
        pos++;
    }
    
    temp2->next = temp1->next;
    delete temp1;
    return llist;
}
