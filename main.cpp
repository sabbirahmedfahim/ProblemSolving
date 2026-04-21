class NODE
{
public:
    int val;
    NODE *next;
    NODE(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class myQueue
{
public:
    NODE *head = NULL;
    NODE *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        NODE *newNode = new NODE(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    void pop()
    {
        sz--;
        NODE *deleteNode = head;
        head = head->next;
        delete deleteNode;
        // if (head == NULL) // visual representation needed
        // {
        //     tail = NULL;
        // }
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};