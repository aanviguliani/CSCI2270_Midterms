
struct Node
{
    int value;       // no. of messages passed through this country
    Node *next;            // pointer to the next country
};

// class for storing and manipulating linked-list of countries
class LinkedList {
private:
    // pointer to head of linked-list of countries
    Node* head;
public:
    // See writeup for method descriptions
    Node* searchNetwork(int intValue);
    void insertNode(Node* previous, int intValue);
    bool lengthIsEven(Node *head);
    Node* LinkedList::returnHead();
};