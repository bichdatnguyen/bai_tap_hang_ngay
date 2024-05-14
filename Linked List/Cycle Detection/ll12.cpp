// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *temp = head;
    bool cycle = true;
    
    for(int i=0; i<1005; i++) { 
        if(temp->next == nullptr) {
            cycle = false;
            break;
        }
        temp = temp->next;
    }
    return (cycle ? true : false);
}
