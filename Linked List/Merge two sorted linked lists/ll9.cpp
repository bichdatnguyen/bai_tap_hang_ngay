// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
 
 SinglyLinkedListNode* insertNode(SinglyLinkedListNode* head, int data) {
     SinglyLinkedListNode *newNode = new SinglyLinkedListNode(data);
     if(head == nullptr) {
         return newNode;
     }
     SinglyLinkedListNode *temp = head;
     while(temp->next != nullptr) {
         temp = temp->next;
     }
     temp->next = newNode;
     return head;
 }
 
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *newList = nullptr;
    int newData;
    while(head1 != nullptr || head2 != nullptr) {
        if(head1 == nullptr) {
            newList = insertNode(newList, head2->data);
            head2 = head2->next;
        }
        else if(head2 == nullptr) {
            newList = insertNode(newList, head1->data);
            head1 = head1->next;
        }
        else if(head1->data <= head2->data) {
            newList = insertNode(newList, head1->data);
            head1 = head1->next;
        }
        else {
            newList = insertNode(newList, head2->data);
            head2 = head2->next;
        }
    }
    
    return newList;
}
