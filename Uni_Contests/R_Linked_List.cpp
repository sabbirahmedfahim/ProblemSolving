#include <iostream> // input-output header file 
#define nl '\n' // defined nl as '\n' for new line printing
#define ll long long int // defined 'll' as long long int data type
using namespace std; // identifiers are defined inside the standard namespace named std 
class Node // class name
{
public: // public for free access
    ll data; // initialized integer data
    Node *prev; // previous pointer
    Node *next; // next pointer
    Node(ll data) // constructor
    {
        this->data = data; // initialized constructors values
        this->prev = NULL; // initialized constructors values
        this->next = NULL; // initialized constructors values
    }
};
void insert_tail(Node *&head, Node* &tail, ll val) // insert at tail
{
    Node *newNode = new Node(val); // dynamically maked node
    if (tail == NULL) // if tail is null
    {
        head = newNode; tail = newNode; // head, tail is new node
        return; // quit
    }
    tail->next = newNode; // memory allocation
    newNode->prev = tail; // memory allocation
    tail = newNode; // memory allocation
}
void delete_head(Node* &head, Node* &tail) // deleting head
{ 
    if(head->next == NULL) // if the next pointer of head is null
    {
        head = NULL; tail = NULL; return; // make head, tail null and quit
    }
    Node * deleteNode = head; // memory allocation
    head = head->next; // memory allocation
    head->prev = NULL; // memory allocation
    delete deleteNode; // memory allocation
}
void delete_tail(Node* &head, Node * &tail) // delete tail
{
    if(tail->prev == NULL) // if the previois pointer of tail is null
    { 
        head = NULL; tail = NULL; return; // head, tail is also null, quit
    }
    Node * deleteNode = tail; // memory allocation
    tail = tail->prev; // memory allocation
    tail->next = NULL; // memory allocation
    delete deleteNode; // memory allocation
}
void search_n_delete(Node * &head, Node * &tail, Node *& current) // delete a value then delete
{
    if(head == NULL) return; // if the head pointer is null, quit
    else if(head == current) // if the head pointer is current 
    {
        delete_head(head, tail); current = head; // delete head and initialize head's pointer to current
    } 
    else // otherwise
    {
        Node * tmp = head; // make tmp node and initialize head pointer on it
        while (tmp != NULL) // while the tmp pointer is not null
        {
            if(tmp == current) // if the tmp pointer is equal to current
            {
                current = tmp->prev; // current equal to previous pointer of tmp
                if(tmp->next == NULL) // if the next pointer of tmp is null
                {
                    delete_tail(head, tail); // delete tail
                    current = tail; // initaize tail's value at current
                }
                else // otherwise
                {
                    tmp->prev->next = tmp->next; // memory allocation
                    tmp->next->prev = tmp->prev; // memory allocation
                }
                return; // quit
            }
            tmp = tmp->next; // move pointer
        }
    }
}
void print(Node * head) // print linked list
{
    if(head == NULL) // if the head pointer is null
    {
        cout << "empty" << nl; return; // print empty and quit
    } 
    while (head != NULL) // while the head pointer is not null
    {
        cout << head->data << " "; // print the value's of the linked list
        head = head->next; // move pointer
    }
    cout << nl; // print newline
}
int main() // main function
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); // fast io

    Node * head = NULL; Node * tail = NULL; // initialize head, tail as null pointer
    Node * current = tail; // current at the tail pointer for the first time
    ll n; cin >> n; // initialize n and take input
    while (n--) // n times while loop
    {
        char ch; cin >> ch; // initialize ch and take input
        if(ch == '+') // if ch is '+'
        {
            ll val; cin >> val; // initialize val and take input
            insert_tail(head, tail, val); // insert at tail
            current = tail; // initaize tail's value at current
        }
        else if(ch == '>') // if ch is '>'
        {
            if(current->prev != NULL) current = current->prev; // memory allocation
        } 
        else if(ch == '<') // if ch is '<'
        {
            if(current->next != NULL) current = current->next; // memory allocation
        }
        else if(ch == '!') // if ch is '!'
        {
            if(current == NULL) continue; // skip
            else cout << current->data << nl; // otherwise print current pointers value
        }
        else if(ch == '=') // if ch is '='
        {
            ll val; cin >> val;  // initialize val and take input
            current->data = val; // update current pointers value
        }
        else if(ch == '-') // if ch is '-'
        {
            search_n_delete(head, tail, current); // search and delete the value
        }
    }
    return 0; // quit
}