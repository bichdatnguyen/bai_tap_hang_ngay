/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* p = head;
    
    if(head == NULL) {
        head = new SinglyLinkedListNode(data);
        return head;
    }
    
    while(p->next != NULL) {
        p = p->next;
    }
    
    p->next = new SinglyLinkedListNode(data);
    return head;
}
