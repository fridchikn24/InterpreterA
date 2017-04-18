
#ifndef INTERPRETERA_COMPILER_H
#define INTERPRETERA_COMPILER_H

#endif //INTERPRETERA_COMPILER_H


struct node{
    TokenType Black;
    String ComType;
    Stmnt state;
    Expression* expression;
    String Parameters;
    String text;
    String var_name;

    Node() {
        tokenType = INVALID;
        cmdType = String(" ");
        text = String(" ");
        var = String(" ");
        stmntType = NOST;
        expressions = 0;
        data = 0;
    }

    ~Node(){
        delete this->expression;
    }


};