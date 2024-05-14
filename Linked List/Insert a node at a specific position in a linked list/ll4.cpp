/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode *newNode = new SinglyLinkedListNode(data);
    if(position == 0) {
        newNode->next = llist;
        return newNode;
    }
    SinglyLinkedListNode *temp = llist;
    int listLen = 0;
    while(temp != NULL) {
        listLen++;
        temp = temp->next;
    }
    if(position == listLen) {
        temp = llist;
        while(temp->next != NULL) {
            listLen++;
            temp = temp->next;
        }
        temp->next = newNode;
        return llist;
    }
    SinglyLinkedListNode *prev = nullptr, *current = llist;
    for(int i=0; i<position; i++) {
        prev = current;
        current = current->next;
    }   
    prev->next = newNode;
    newNode->next = current;
    return llist;
}
