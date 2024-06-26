/*
 * Complete the 'getNode' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER positionFromTail
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

int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    SinglyLinkedListNode *temp = llist;
    int listLen = 0;
    while(temp != nullptr) {
        temp = temp->next;
        listLen++;
    }
    temp = llist;
    for(int i=0; i<(listLen - positionFromTail - 1); i++) {
        temp = temp->next;
    }
    return temp->data;
}
