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
    //判断关键字
    void checkIdentifier();

    int start;
    int end;
    int token_code; // code of kind 种别码
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
    //方法：
    void getToken();
};


#endif // TOKEN_H_INCLUDED
