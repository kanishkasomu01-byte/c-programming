Doubly linked list

#include<stdio.h>
#include<stdlib.h>

struct contact{
    long int num;
    struct contact *next;
    struct contact *previous;
};
int main(){
   
    struct contact *ct1 = (struct contact*)malloc(sizeof(struct contact));
    struct contact *ct2 = (struct contact*)malloc(sizeof(struct contact));
    struct contact *ct3 = (struct contact*)malloc(sizeof(struct contact));
    
    ct1->num = 9500556890;
    ct2->num = 9659626251;
    ct3->num = 9487606290;
    
    ct1 ->previous = NULL;
    ct1 ->next = ct2;
    
    ct2 ->previous = ct1;
    ct2 ->next = ct3;
    
    ct3 ->previous = ct2;
    ct3 ->next = NULL;
    
   struct contact *head = ct1;
   printf("contact\n");
    while(head != NULL){
        printf("%ld<--->",head->num);
        head = head->next;
    }
    printf("NULL");
    return 0;
}

output:
contact
9500556890<--->9659626251<--->9487606290<--->NULL.