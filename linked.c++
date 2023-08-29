#include<iostream>
using namespace std;
struct node {
    int data;
    struct node *link;
};
int countNodes(struct node *head) {
    int count = 0;
    struct node *ptr = head;
    while(ptr != NULL) {
        count++;
        ptr = ptr->link;
    }
    return count;
}
int main() {
    struct node *head = NULL;
    
    int totalCount = countNodes(head);
    
    cout << "Total nodes in the linked list: " << totalCount << endl;

    return 0;
}