#include<stdio.h>
#include<stdlib.h>

//works on gfg
//Time Complexity: O(n) 
struct Node
{
    int data;
    struct Node *next;
    
}*start;

void insert();
void display(struct Node *head);



void removeDuplicates(struct Node* head)
{
    struct Node * p;
    p=head;
    struct Node * q=NULL;
    if(head==NULL || head->next==NULL)
    return;
    while(p->next!=NULL)
    {
        if(p->data==p->next->data)
        {
            q=p->next->next;
            free(p->next);
            p->next=q;
        }
        else
        {
            p=p->next;
        }
        
    }
    
}

// { Driver Code Starts.

    
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      start=NULL;
      insert();
      removeDuplicates(start);
      display(start);
      printf("\n");
    }
    return 0;

}


 void insert()
 {
     int n,value,i;
     scanf("%d",&n);
     struct Node *temp;
     for(i=0;i<n;i++)
     {
         scanf("%d",&value);
         if(i==0)
         {
              start=(struct Node *) malloc( sizeof(struct Node) );
              start->data=value;
              start->next=NULL;
              temp=start;
              continue;
         }
         else
         {
             temp->next= (struct Node *) malloc( sizeof(struct Node) );
             temp=temp->next;
             temp->data=value;
             temp->next=NULL;
         }
     }
 }
 
 void display(struct Node *head)
{
   while(head!=NULL)
  {
   printf("%d ",head->data);
    head=head->next;
  }
}




  // } Driver Code Ends