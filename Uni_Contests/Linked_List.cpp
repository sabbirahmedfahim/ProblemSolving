#include <iostream>
#define nl '\n'
#define ll long long int
using namespace std;

class Node {
public:
    ll data;
    Node *prev, *next;
    Node(ll data) : data(data), prev(NULL), next(NULL) {}
};

void delete_head(Node *&head, Node *&tail) {
    if (head == NULL) return;
    Node *deleteNode = head;
    if (head->next) {
        head = head->next;
        head->prev = NULL;
    } else {
        head = tail = NULL;
    }
    delete deleteNode;
}

void delete_tail(Node *&head, Node *&tail) {
    if (tail == NULL) return;
    Node *deleteNode = tail;
    if (tail->prev) {
        tail = tail->prev;
        tail->next = NULL;
    } else {
        head = tail = NULL;
    }
    delete deleteNode;
}

void search_n_delete(Node *&head, Node *&tail, Node *&current) {
    if (current == NULL) return;
    if (current == head) {
        delete_head(head, tail);
        current = head;
    } else if (current == tail) {
        delete_tail(head, tail);
        current = NULL;
    } else {
        Node *deleteNode = current;
        current->prev->next = current->next;
        current->next->prev = current->prev;
        current = current->next;
        delete deleteNode;
    }
}

void print_current(Node *current) {
    if (current == NULL) cout << "NULL" << nl;
    else cout << current->data << nl;
}

int main() {
    ll n;
    cin >> n;

    Node *head = NULL, *tail = NULL, *current = NULL;

    for (ll i = 0; i < n; i++) {
        char op;
        cin >> op;

        if (op == '+') {
            ll value;
            cin >> value;
            Node *newNode = new Node(value);
            if (current == NULL) {
                head = tail = current = newNode;
            } else {
                newNode->next = current;
                newNode->prev = current->prev;
                if (current->prev) current->prev->next = newNode;
                else head = newNode;
                current->prev = newNode;
                current = newNode;
            }
        } else if (op == '-') {
            search_n_delete(head, tail, current);
        } else if (op == '=') {
            ll value;
            cin >> value;
            if (current) current->data = value;
        } else if (op == '>') {
            if (current && current->next) current = current->next;
        } else if (op == '<') {
            if (current && current->prev) current = current->prev;
        } else if (op == '!') {
            print_current(current);
        }
    }

    while (head) delete_head(head, tail);

    return 0;
}
