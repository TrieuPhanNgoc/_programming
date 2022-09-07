#include <iostream>

class linkedlist
{
    public:
        struct Node{
            uint32_t val;
            Node* next;
            Node() : val(0), next(nullptr){}
            Node(const uint32_t& _val) : val(_val), next(nullptr) {}
        };

    private:
        Node* m_node;
        Node* m_lastNode;
        bool m_isAllocated;
        uint32_t m_size;

    public:
        linkedlist() : m_node(nullptr), m_lastNode(nullptr), m_isAllocated(false), m_size(0) {
            this->allocated();
        }

        ~linkedlist() {
            if (m_node) {
                delete m_node;
                m_node = nullptr;
            }

            if (m_lastNode) {
                delete m_lastNode;
                m_lastNode = nullptr;
            }

        }
        
        void pushNode(const uint32_t& _val) {
            Node* temp = new Node(_val);
            if (!m_isAllocated) {
                return;
            }
            
            if (!m_size) {
                this->m_node = temp;
                this->m_lastNode = temp;
            }
            else {
                this->m_lastNode->next = temp;
                this->m_lastNode = temp;
            }

            this->m_size++;
            temp = nullptr;
        }

        void printList() {
            Node* temp = this->m_node;
            std::cout << "linked list: ";
            while (temp != nullptr)
            {
                std::cout << temp->val << " -> ";
                temp = temp->next;
            }
            std::cout << std::endl;
        }

        uint32_t getAt(const uint32_t& _pos) {
            if (_pos < 0 || _pos >= this->m_size) {
                std::cerr << "Out of index" << std::endl;
                return 0;
            }

            Node*  temp = this->m_node;
            uint32_t counter = 0;

            // Start from 0
            while (_pos != counter) {
                temp = temp->next;
            }

            return temp->val;
        }

        linkedlist* operator=(linkedlist&& _llist) {
            this->m_node = std::move(_llist.m_node);
            this->m_lastNode = std::move(_llist.m_lastNode);
            this->m_size = std::move(_llist.m_size);
            this->m_isAllocated = std::move(_llist.m_isAllocated);
            return this;
        }

        linkedlist* operator =(const linkedlist*& _llist) {
            this->m_node = _llist->m_node;
            this->m_lastNode = _llist->m_lastNode;
            this->m_size = _llist->m_size;
            this->m_isAllocated = _llist->m_isAllocated;

            return this;
        }


        friend std::ostream& operator<<(std::ostream& os, const linkedlist* llist) {
            Node* temp = llist->m_node;
            std::cout << "linked list: ";
            while (temp != nullptr)
            {
                std::cout << temp->val << " -> ";
                temp = temp->next;
            }
            std::cout << std::endl;

            return os;
        }

    private:
        void allocated() {
            this->m_node = new Node();
            this->m_lastNode = new Node();
            this->m_size = 0;
            this->m_isAllocated = true;
        }
};

