#include<iostream>
using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }

// };
// void insertatHead(Node* &head,int d){
//     Node* temp=new Node(d);
//     temp->next=head;
//     head=temp;
// }
// void insertattail(Node* &tail,int d){
//     Node* temp=new Node(d);
//     tail->next=temp;
//     tail=temp;

// }
// void insertatpos(Node* &tail,Node* &head,int pos,int d){
//     //insert at start
//     if(pos==1){
//         insertatHead(head,d);
//         return;

//     }
//     int cnt=1;
//     Node* temp=head;
//     while(cnt<pos-1){
//         temp=temp->next;
//         cnt++;
//     }
//     if(temp->next==NULL){
//         insertattail(tail,d);
//         return;
//     }
     
//     Node* Node2=new Node(d);
//     Node2->next=temp->next;
//     temp->next=Node2;


// }
// void deletenode(int pos,Node* &head){
//     //delete first node 
//     if(pos==1){
//         Node* temp=head;
//         head=head->next;
//         temp->next=NULL;
//         delete temp;

//     }
//     else{
//         //delete last or middle node
//         int cnt=1;
//         if(cnt<=pos)
//     }
//     e   
// }
// void print(Node* &head){
//     Node* traverse=head;
//     while(traverse!=NULL){
//         cout<<traverse->data<<" ";
//         traverse=traverse->next;
//     }
// }

// int main(){
//     Node* node1= new Node(2);
//     // cout<<node1->data<<endl;
//     // cout<<node1->next<<endl;
    
//     //head pointed to node 1
//     Node* head= node1;
//     Node* tail= node1;
//     print(head);
//     cout<<endl;
//     insertatHead(head,7);
//     print(head);
//     cout<<endl;
//     insertattail(tail,8);
//     print(head);
//     cout<<endl;
//     insertatpos(tail,head,2,5);
//     print(head);
//     return 0;
// }

//doubly linked list
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
Node(int d){
    this->data=d;
    this->next=NULL;
    this->prev=NULL;
}
};
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
       
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int getlen(Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;

}
void insertathead(Node* &head,Node* &tail,int d){
    if(head==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
         Node* temp=new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
   
}
void insertattail(Node* &head,Node* &tail,int d){
     if(tail==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
     }
     else{
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
     }
}
void insertatpos(Node* &head,Node* &tail,int pos,int d){
    //insert at start
    if(pos==1){
        insertathead(head,tail,d);
        return;

    }
    Node* temp=head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    } 
    if(temp->next==NULL){
        insertattail(head,tail,d);
        return;
    } 
    Node* node2=new Node(d);
      node2->next=temp->next;
    temp->next->prev=node2;

    temp->next=node2;
    node2->prev=temp;
    


}
void deletenode(Node* &head,int pos){
    
}
int main(){
// Node* node1= new Node(2);
// Node* head=node1;
// Node* tail=node1;
Node* head=NULL;
Node* tail=NULL;
print(head);
cout<<getlen(head)<<endl;

insertathead(head,tail,5);
print (head);
insertattail(head,tail,8);
print(head);
cout<<getlen(head);
cout<<endl;
insertatpos(head,tail,3,9);
print(head);
return 0;  

}