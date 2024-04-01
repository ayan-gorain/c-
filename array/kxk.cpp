bool isCircular(Node *head) {
    if (head == NULL) return true; // Empty list is considered circular
    
    Node *slow = head;
    Node *fast = head;
    
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        
        if (slow == fast) // If the pointers meet, there's a cycle
            return true;
    }
    
    return false; // If fast or fast->next becomes NULL, no cycle is detected
}
