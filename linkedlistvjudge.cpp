//print linked list
void printLinkedList(SinglyLinkedListNode *head)
{
      Struct SinglyLinkedListNode *next ;
      SinglyLinkedListNode* current;
   if (head == nullptr) {
        return;
    }
    SinglyLinkedListNode *current = head;
    while (current != nullptr) {
        cout << current->data << "\n";
        current = current->next;
    }

}
//Reversesingle linkedlist
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* prev = NULL;
    SinglyLinkedListNode* current = head;
    SinglyLinkedListNode* next_node = NULL;

    while (current != NULL) {
        next_node = current->next;
        current->next = prev;
        prev = current;
        current = next_node;
    }

    
    return prev;
}
//compare


bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    while (head1 != nullptr && head2 != nullptr) {
        if (head1->data != head2->data) {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    
    return head1 == head2;
}
