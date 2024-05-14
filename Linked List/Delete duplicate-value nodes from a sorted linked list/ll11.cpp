/*
 * Complete the 'removeDuplicates' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode *current = llist;
    SinglyLinkedListNode *after = current->next;
    
    if(after == nullptr) return llist;
    while(current->next != nullptr) {
        if(after == nullptr) {
            current = current->next;
            after = current->next;
        }
        else if(current->data == after->data) {
            after = after->next;
            current->next = after;
        }
        else {
            after = after->next;
        }
    }
    
    return llist;
}
