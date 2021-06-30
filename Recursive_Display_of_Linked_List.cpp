void RDisplay(Node* head) {
    if (head != NULL) {
         cout << head -> data << " ";
         RDisplay(head -> next);
    }
}

//reverse of Linked List (Only Display)

void RDisplay(Node* head) {
    if (head != NULL) {
      RDisplay(head -> next);   
      cout << head -> data << " ";
    }
}
