//intro LL, traversing, length, printing LL, removal of element from head, tail, kth postion

#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }


};


Node* convertArr2LL(vector<int> &arr){
    Node* head= new Node(arr[0]);
    Node* mover= head;
    for ( int i=1; i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;

    }
    return head;

};

int length_Of_LL(Node* head){
    Node* temp=head;
    int cnt=0;
    while( temp){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}

int CheckIfPresent(Node* head, int val){
    Node* temp=head;
    while( temp){
        if(temp->data==val) return 1;
        temp=temp->next;
        
    }
    return 0;
}

Node* removehead(Node* head){
    if (head==NULL){
        return head;
    }
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}

Node* removetail(Node* head){
    if (head==NULL || head->next==NULL){
        return NULL;
    }
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=nullptr;
    return head;
}


void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

Node* removekth(Node* head, int k){
    if(head==NULL){
        return NULL;
    }
    if(k==1){
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    int cnt=0;
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

int main(){
    vector<int> arr={2,5,8,7};
    // Node* y=new Node(arr[0], nullptr); //prints the address
    // Node y= Node(arr[0], nullptr); //2
    // Node y= Node(arr[0], nullptr); 
    // cout<<y.next; //gives output 0x0
    Node* head=convertArr2LL(arr);
    cout<<head->data<<endl;

    //traversal of LL
    Node* temp2=head;
    while(temp2){
        cout<<temp2->data<<" ";
        temp2=temp2->next;
    }
    cout<<endl;

    cout<<length_Of_LL(head)<<endl;

    cout<<CheckIfPresent(head,6)<<endl;

    // head=removehead(head);
    // head=removetail(head);
    
    head=removekth(head,2);
    print(head);

}
