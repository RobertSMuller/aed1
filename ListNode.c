/*
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

 

Example 1:


Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
Example 2:

Input: l1 = [0], l2 = [0]
Output: [0]
Example 3:

Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]
*/

#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

struct ListNode
{
int numero;
struct ListNode *next;
 
};

void imprime(struct ListNode *x);
void newNode(int n, struct ListNode *x);
void addTwoNumbers(struct ListNode* l1, struct ListNode* l2);

int main(){
    struct ListNode NodeA, NodeB, *NodeTemp;
    int num,cntrl=100;
    while (cntrl!=0)
    {
        NodeTemp=NULL;

        printf("1 add num node A\n");
        printf("2 add num node B\n");
        printf("3 new node A\n");
        printf("4 new node B\n");
        printf("5 show all node A\n");
        printf("6 show all node B\n");
        printf("7 soma os dois\n");
        printf("0 exit\n");
        scanf("%d",&cntrl);

switch (cntrl){
case 1: {
    scanf("%d",&num);
    NodeA.numero = num;
    NodeA.next= NULL;
    break;
};
case 2:{
   scanf("%d",&num);
     NodeB.numero = num;
     NodeB.next = NULL;
    break;  
};
case 3:{
    scanf("%d",&num);
    NodeTemp=&NodeA;
    newNode(num,NodeTemp);
    break;
};
case 4:{
    scanf("%d",&num);
    NodeTemp=&NodeB;
    newNode(num,NodeTemp);
    break;
};
case 5:{
NodeTemp=&NodeA;
imprime(NodeTemp);
printf("\n");
    break;
};
case 6:{
    NodeTemp=&NodeB;
imprime(NodeTemp);
printf("\n");
    break;
}
case 7:{
addTwoNumbers(&NodeA,&NodeB);    
}
default:{
break;
};
};
    };
    
    
return 0;
}

void newNode(int n,struct ListNode *x){
   struct ListNode *temp = x;
   if(temp->next==NULL){
    struct ListNode *new=(struct ListNode*)malloc(sizeof(struct ListNode));
    new->numero = n;
    new->next = NULL;
    x->next = new;
}else{
    temp=temp->next;
    newNode(n,temp);

}
}

void imprime(struct ListNode *x){
struct ListNode *temp = x;
if(temp!=NULL){
printf("%d ", temp->numero);
temp=temp->next;
imprime(temp);
}else{
temp=NULL;
}
}

void addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode dummy;
    dummy.next = NULL;
    struct ListNode* curr = &dummy;
    int carry = 0;

    while (l1 != NULL || l2 != NULL || carry != 0) {
        int sum = carry + (l1 ? l1->numero : 0) + (l2 ? l2->numero : 0);
        carry = sum / 10;

        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->numero = sum % 10;
        newNode->next = NULL;

        curr->next = newNode;
        curr = curr->next;

        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }
    imprime(dummy.next) ;
    printf("\n");
}