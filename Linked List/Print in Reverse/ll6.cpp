/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

void reversePrint(SinglyLinkedListNode* llist) {
    vector<int> rList;
    
    SinglyLinkedListNode* p = llist;
    
    while(p != NULL) {
        rList.push_back(p->data);
        p = p->next;
    }
    
    for(int i=rList.size()-1; i>=0; i--) {
        cout << rList[i] << endl;
    }
}
