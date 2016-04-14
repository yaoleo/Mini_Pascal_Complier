#ifndef TOKEN_H_INCLUDED
#define TOKEN_H_INCLUDED

using namespace std;
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <list>
class Token {
public:
    Token();
    virtual ~Token() { }
    //�жϹؼ���
    void checkIdentifier();

    int start;
    int end;
    int token_code; // code of kind �ֱ���
    string token_kind; //
    int lineIndex;
    string value;
};

class Scan {
public:
    Scan();
    virtual ~Scan() { }

    string srcfile;
    string outfile;

    map<int, string> T_map;
    list<Token *> list_token;
    //������
    void getToken();
};


#endif // TOKEN_H_INCLUDED
