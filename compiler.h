
#ifndef INTERPRETERA_COMPILER_H
#define INTERPRETERA_COMPILER_H

#endif //INTERPRETERA_COMPILER_H


struct node{

    Node() {
        String type;
        String value;
        int dat;
        Node* left;
        Node* right;
        Node* parent;

        Node(String value) {
            this->value = value;
            left = right = parent = nullptr;
        }
    }

    ~Node(){
        delete left;
        delete right;
    }

};