
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

       /* Node(String value) {
            this->value = value;
            left = right = parent = nullptr;
        }*/
    }

    ~Node(){
        delete left;
        delete right;
    }

    static void recursiveDelete(Node* root){
        if(root == nullptr){ return;}
        recursiveDelete(root->left);
        recursiveDelete(root->right);
        delete root;
    }

};

struct tree{
private:
    tree() {
        int capacity;
        int length;
        Node *data;
    }
public:
    ~tree(){
        destroy();
    }

    void expand(tree &v){
        v.capacity *= 2;
        copy(v);
    }

    void copy(tree v){
        this->length = v.length;
        this->capacity = v.capacity;
        int k;
        while(k < v.length){
            this->data[k] = v.data[k];
            k++;
        }
        ~v;
    }

};