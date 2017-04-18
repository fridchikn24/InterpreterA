
#ifndef INTERPRETERA_COMPILER_H
#define INTERPRETERA_COMPILER_H

#endif //INTERPRETERA_COMPILER_H


struct node{
    TokenType Black;
    String ComType;
    Stmnt state;

    Node() {
        tokenType = INVALID;
        cmdType = String(" ");
        text = String(" ");
        var = String(" ");
        stmntType = NOST;
        expressions = 0;
        data = 0;
    }

};