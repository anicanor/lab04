//list.h
//Aaron Nicanor
//anicanor
#ifndef LIST_H
#define LIST_H

class List
{
    public:
        List();
        ~List();
        void insert(int value);
        void print();
        int sum();
        void insert_at_end(int value);
    private:
        class Node
        {
            
            public:

                Node(int value, Node *next)
                {m_value = value; m_next = next;}
                int m_value;
                Node *m_next;
            
        };
        Node *m_head;
    
};

#endif
