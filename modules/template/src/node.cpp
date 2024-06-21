#include <node.hpp>

#include <iostream>

namespace namespace_name 
{
    node::node() 
    {
        
    }
    struct stack {
    public:
        // list of nodes to be added to w's sp graph
        node* x_end;
        //the backedge of the spgraph x and w are attached to
        node* x_tail;
        //the path from one node to the next node on this stack, or the leaf
        node* x_sp[20];
        //next entry
        struct stack* next;

    };
    struct stack* head = NULL, * tail = NULL;
    void newStk(node *x, node *y,  node *z[])
    {
        struct stack* stk;
        stk = (struct stack*)malloc(sizeof(struct stack));
        
        stk->x_end = x;
        stk->x_tail = y;
        //stk->x_sp = z;
        if (head == NULL)
            head = tail = stk;
        else
        {
            stk->next = head;
            head = stk;
        }
    }
    node::~node()
    {

    }
}
