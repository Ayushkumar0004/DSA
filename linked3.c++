#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void insert(int new_data)
{
    struct node *new_node = new struct node;
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}
void display()
{
    struct node *ptr = head;
    while(ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}
int main()
{
    insert(5);
    insert(6);
    insert(7);
    insert(8);
    insert(9);
    cout << "Linked List elements: ";
    display();
    return 0;
}