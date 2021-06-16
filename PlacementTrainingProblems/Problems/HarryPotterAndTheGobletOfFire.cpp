#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
typedef struct LinkedListNode LinkedListNode;

/*
Harry is in the first stage of the triwizard tournament. He flies on his Firebolt broomstick while being followed by the Hungarian Horntail dragon. His path while flying can be represented using a linked list (Anything is possible with magic!), and so can be the path of the dragon. Harry wants to know how safe he is, i.e. he wants to know if there is a possibility that his path and the dragons path intersect.

For example, if linked list A denotes harry's path and linked list B denotes the dragons path, the following situation would be dangerous for harry :
A:          a1 → a2
                   ↘
                     c1 → c2 → c3 → NULL
                   ↗
B:     b1 → b2 → b3
while the following situation is safe :

A:          a1 → a2 → a3 → NULL
                   
                   
B:     b1 → b2 → b3 → b4 → b5 → NULL
image
Help harry find out if he is safe or not.
Given the link to the head node of harry's and the dragon's linked lists, return true if they intersect and false if they dont.

Constraints

You are expected to write an algorithm that runs in linear time and uses constant space.
*/
struct LinkedListNode {
    int val;
    LinkedListNode *next;
};

LinkedListNode* _insert_node_into_singlylinkedlist(LinkedListNode *head, LinkedListNode *tail, int val) {
    if(head == NULL) {
        head = (LinkedListNode *) (malloc(sizeof(LinkedListNode)));
        head->val = val;
        head->next = NULL;
        tail = head;
    }
    else {
        LinkedListNode *node = (LinkedListNode *) (malloc(sizeof(LinkedListNode)));
        node->val = val;
        node->next = NULL;
        tail->next = node;
        tail = tail->next;
    }
    return tail;
}


/*
 * Complete the function below.
 */
/*
For your reference:
LinkedListNode {
    int val;
    LinkedListNode *next;
};
*/
bool findIntersection(LinkedListNode* head1, LinkedListNode* head2) {
    LinkedListNode *t1=head1,*t2=head2;
    if(head1==NULL)return false;
    if(head1==NULL)return false;
    while(t1->next) t1=t1->next;
    while(t2->next) t2=t2->next;
    if(t1==t2) return 1;
    else return 0;
    
}

int main()
{
    FILE *f = stdout;
    char *output_path = getenv("OUTPUT_PATH");
    if (output_path) {
        f = fopen(output_path, "w");
    }

    bool res;
    int head1_size = 0;

    LinkedListNode* head1 = NULL;
    LinkedListNode* head1_tail = NULL;

    scanf("%d", &head1_size);
    for(int i = 0; i < head1_size; i++) {
        int head1_item;
        scanf("%d", &head1_item);
        head1_tail = _insert_node_into_singlylinkedlist(head1, head1_tail, head1_item);

        if(i == 0) {
            head1 = head1_tail;
        }
    }


    int head2_size = 0;

    LinkedListNode* head2 = NULL;
    LinkedListNode* head2_tail = NULL;

    scanf("%d", &head2_size);
    for(int i = 0; i < head2_size; i++) {
        int head2_item;
        scanf("%d", &head2_item);
        head2_tail = _insert_node_into_singlylinkedlist(head2, head2_tail, head2_item);

        if(i == 0) {
            head2 = head2_tail;
        }
    }
    
    int token;
    scanf("%d", &token);
    if (token != 0){
        token--;
        LinkedListNode* ptr = head1;
        while(token--){
            ptr = ptr->next;
        }
      	if (head2 == NULL) head2 = ptr;
        else head2_tail->next = ptr;
    }
    
    res = findIntersection(head1, head2);
    fprintf(f, "%d\n", res);

    fclose(f);
    return 0;
}
