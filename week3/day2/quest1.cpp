#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(list1 == NULL)
            return list2;

        if(list2 == NULL)
            return list1;

        if(list1->val <= list2->val){

            list1->next = mergeTwoLists(list1->next, list2);
            return list1;

        }
        else{

            list2->next = mergeTwoLists(list1, list2->next);
            return list2;

        }
    }
};

void printList(ListNode* head){

    while(head != NULL){

        cout << head->val << " ";

        head = head->next;
    }
}

int main(){

    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);

    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);

    Solution obj;

    ListNode* ans = obj.mergeTwoLists(list1, list2);

    printList(ans);

    return 0;
}