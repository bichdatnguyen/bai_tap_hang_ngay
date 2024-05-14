/*
 * Complete the 'reverse' function below.
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

SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode *current = llist, *prev = NULL, *temp = llist;
    
    int listLen = 0;
    
    while(temp != NULL) {
        listLen++;
        temp = temp->next;
    }
    
    if(listLen <= 1)  return llist;
    
    while(current != NULL) {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    
    return prev;
}
