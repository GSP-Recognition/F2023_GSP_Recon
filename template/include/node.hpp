#if !defined(__PROJECT__NAMESPACE__CLASS__HPP__)
#define __PROJECT__NAMESPACE__CLASS__HPP__

namespace namespace_name {
    
    class node {
        struct stack;
    public:
        node(/* args */);
        ~node();
        
    public:
        node *neighbors[20];
        bool isLeaf;
        struct stack *head;
    private:
        struct stack *tail;
        /* data */
    };
   
} // namespace namespace_name

#endif // __PROJECT__NAMESPACE__CLASS__HPP__
