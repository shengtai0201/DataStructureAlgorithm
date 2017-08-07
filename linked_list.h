typedef struct node {
    int data;
    struct node *next;
} Node;

Node *add_node(Node *, int);

Node *insert_node(Node *, int);

Node *delete_node(Node *, int);

void display_node(Node *);

Node *linked_list_enqueue(Node *, int);

Node *linked_list_dequeue(Node *, int *);