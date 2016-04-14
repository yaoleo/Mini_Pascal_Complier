#include <iostream>
#include "Token.h"
#include "identifier.h"
#include <vector>
#include <map>
#include <string>
#include <list>
#include <algorithm>
using namespace std;
void PrintIt (Token *tk) {
    cout << "AAA:" << tk->value << "kind:"<< tk->token_kind  << " " << tk->start << "-"<< tk->end  << "ÐÐºÅ£º" << tk->lineIndex << endl;
}
int main() {
    Scan ltest;
    string s;
    cout << "input the code file: ";
    cin >> s;
    ltest.srcfile = s;
    ltest.getToken();
    for_each(ltest.list_token.begin(),ltest.list_token.end(),PrintIt);

    return 0;
}

