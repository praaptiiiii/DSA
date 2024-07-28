class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        Node* zero=new Node(-1);
        Node* one=new Node(-1);
        Node* two=new Node(-1);
        
        Node* zeroHead=zero;
        Node* oneHead=one;
        Node* twoHead=two;
        
        Node* temp=head;
        while (temp!=NULL){
            if (temp->data==0){
                zero->next=temp;
                zero=zero->next;
            }
            else if (temp->data==1){
                one->next=temp;
                one=one->next;
            }
            else{
                two->next=temp;
                two=two->next;
            }
            temp=temp->next;
        }
        
        
        zero->next = oneHead->next ? oneHead->next : twoHead->next;
        one->next = twoHead->next;
        two->next = NULL;
        
        return zeroHead->next;
    }
};
