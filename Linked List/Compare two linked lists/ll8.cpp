// Complete the compare_lists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *p1 = head1, *p2 = head2;
    
    int listLen1 = 0, listLen2 = 0;
    
    while(p1 != NULL) {
        listLen1++;
        p1 = p1->next;
    }
    
    while(p2 != NULL) {
        listLen2++;
        p2 = p2->next;
    }
    
    if(listLen1 != listLen2) return 0;
    
    p1 = head1, p2 = head2;
    
    int pos = 0;
    while(pos < listLen1) {
        if(p1->data != p2->data) return false;
        p1 = p1->next;
        p2 = p2->next;
        pos++;
    }
    return true;
}
