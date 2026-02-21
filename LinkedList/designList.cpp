class MyLinkedList {
struct ListNode{
    int val;
    ListNode *next=nullptr;
};
public:
    ListNode *head=nullptr;
    int length=0;
    MyLinkedList() {
        this->head=head;
        this->length=length;
    }
    
    int get(int index) {
        if(index<0 || index>=length || head==nullptr) return -1;

        ListNode *curr=head;
        for(int i=0;i<index;i++) curr=curr->next;

        return curr->val;
       
    }
    
    void addAtHead(int val) {
        ListNode *newNode=new ListNode();
        newNode->val=val;


        if(head==nullptr){
            head=newNode;

        }
        else{
            newNode->next=head;
            head=newNode;

        }
        
        length++;
        return;
    }
    
    void addAtTail(int val) {
        if(head==nullptr) return addAtHead(val);

        ListNode *newNode=new ListNode();
        newNode->val=val;
        ListNode *curr=head;
        while(curr->next){
            curr=curr->next;
        }

        curr->next=newNode;
        length++;
        return;

    }
    
    void addAtIndex(int index, int val) {
        if(index<0 || index>length) return;

        if(index==0) return addAtHead(val);
        if(index==length) return addAtTail(val);

        ListNode *newNode=new ListNode();
        newNode->val=val;

        ListNode *curr=head;
        for(int i=0;i<index-1;i++) curr=curr->next;

        ListNode *temp=curr->next;
        curr->next=newNode;
        newNode->next=temp;
        length++;

        
    }
    
    void deleteAtIndex(int index) {
        if(index<0 || index>=length || head==nullptr) return;


        if(index==0){
            ListNode *curr=head;
            head=curr->next;
            delete curr;
            length--;
            return;
        }
        ListNode *curr=head;
        for(int i=0;i<index-1;i++){
            curr=curr->next;
        }

        ListNode *NodeToDelete=curr->next;
        curr->next=NodeToDelete->next;
        delete NodeToDelete;
        length--;
        return ;


    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */