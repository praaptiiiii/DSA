Node* detectCycle(Node *head) {
    if (head == NULL || head->next == NULL) {
        return NULL;
    }
    
    Node *slow = head;
    Node *fast = head;
    
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        
        if (slow == fast) {
            slow = head;
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }
    
    return NULL;
}

int countNodesinLoop(Node *head) {
    Node* start = detectCycle(head);
    if (start == NULL) {
        return 0;
    }
    
    Node* temp = start;
    int count = 1;
    
    while (temp->next != start) {
        temp = temp->next;
        count++;
    }
    
    return count;
}
