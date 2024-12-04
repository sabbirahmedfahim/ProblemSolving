#include <iostream>
#define ll long long int
#define nl '\n'
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
class Node
{ 
public:
    string data;
    Node *next;
    Node *prev;
    Node(string data)
    {
        this->prev = NULL;
        this->data = data;
        this->next = NULL;
    }
};
void insert_tail(Node *&head, Node* &tail, string data)
{
    Node *newNode = new Node(data);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode; // We took reference (&) just because for this line, imagine why
}
void yesOrNo(Node * &head, Node * &tail, string s)
{
    Node * tmp = head;
    while (tmp != NULL)
    {
        if(tmp->data == s)
        {
            cout << "YES" << nl; return;
        }
        tmp = tmp->next;
    }
    cout << "NO" << nl;
    insert_tail(head, tail, s);
}
int main()
{
    iOS

    Node * head = NULL;
    Node * tail = NULL;

    int n; cin >> n; 
    while (n--)
    {
        string s; cin >> s;
        yesOrNo(head, tail, s);
    }
    

    return 0;
}