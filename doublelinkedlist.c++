#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;

    node(int x){
        data=x;
        next=NULL;
    }
};

int main(){
    node*head1=new node(5);
    head1->next=new node(7);
    head1->next->next=new node(9);
  node*head2=new node(4);
 head2->next=new node(5);
 head2->next->next=new node(6);
 node*temp1=head1;
 node*temp2=head2;
node*temp3=NULL;
node*head3=NULL;

int carry=0;
while(temp1 !=NULL || temp2 !=NULL || carry!=0){
    int sum=carry;

    if(temp1 !=NULL){
        sum+=temp1->data;
        temp1=temp1->next;
    }
    if(temp2 != NULL ){
        sum+=temp2->data;
        temp2=temp2->next;
    }
    carry=sum/10;
    node*newnode=new node(sum%10);
    if(head3==NULL){
        head3=newnode;
        temp3=newnode;
    } else {
        temp3->next=newnode;
        temp3=newnode;
    }
}
temp3=head3;
while(temp3!=NULL){
    cout<<temp3->data<<" ";
    temp3=temp3->next;
}
     
}