/*
 * Complete the 'sortedInsert' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_DOUBLY_LINKED_LIST llist
 *  2. INTEGER data
 */

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    DoublyLinkedListNode *newNode = new DoublyLinkedListNode(data);
    if(llist == nullptr) {
        return newNode;
    }
    if(data <= llist->data) {
        newNode->prev = nullptr;
        newNode->next = llist;
        llist->prev = newNode;
        return newNode;
    }
    DoublyLinkedListNode *prev = llist, *current = llist->next;
    while(true) {
        if(prev->data <= data && data <= current->data) {
            prev->next = newNode;
            current->prev = newNode;
            newNode->prev = prev;
            newNode->next = current;
            break;
        }
        else {
            prev = prev->next;
            current = current->next;
            if(current == nullptr) {
                prev->next = newNode;
                newNode->prev = prev;
                break;
            }
        }
    }
    return llist;
}
