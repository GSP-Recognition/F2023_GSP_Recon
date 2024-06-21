#if !defined(__PROJECT__NAMESPACE__CLASS__HPP__)
#define __PROJECT__NAMESPACE__CLASS__HPP__

namespace namespace_name {
    
    class node {
        struct stack;
    public:
        node(/* args */);
        ~node();
        
    public:
        //neighbors is used for an adjancency list
        node *neighbors[20];
        //true when this node is connected to only one other in the spanning tree
        bool isLeaf;
        // the stack of the node, containing every node in the nodes adjacent leaf
        struct stack *head;
    private:
        struct stack *tail;
        /* data */
    };
   
} // namespace namespace_name

#endif // __PROJECT__NAMESPACE__CLASS__HPP__
