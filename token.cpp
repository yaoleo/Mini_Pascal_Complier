#include "token.h"
#include "identifier.h"
#include <fstream>


Scan::Scan() {

}
Token::Token() {

}
void Token::checkIdentifier(){
    if(this->token_kind == ""){
        int i = 0;
        for(i; i < 64; i++){//key_words length = 64
            cout << endl << this->value << "==?" << key_words[i] <<endl;
            if(this->value == key_words[i]){
                token_kind = key_words[i];
                break;
            }else{
                token_kind = "STRING";
            }
        }
        //cout << "\n" << this->value << "7777777\n";
    }

}
void Scan::getToken() {
    //cout << srcfile;
    fstream in;
    in.open(srcfile.c_str());//ADD c_str() open() cant read string TYPE WTF!
    string ts;
    int line = 0;
    while (getline(in, ts)) { //read in line
         line++;
         for(int i = 0;i < ts.length(); i++){
            cout << ts[i];
            char ch = ts[i];

            if(!(ch == 32 || ch == 9|| ch == 10)) {
                // id and other important word
                Token *ttoken = new Token();
                ttoken->start = i;
                if(isalpha(ch)) {
                    cout << "×ÖÄ¸\n";i++;
                    while(isalnum(ts[i])) {
                        printf("%c", ts[i]);
                        i++;
                    }
                    i--;
                } else if(isdigit(ts[i])) {
                    cout << "Êý×Ö\n";

                    if(ts[++i] == '.') {// real number
                        //cout << "aADFSASDFADSF:::" << ts[i] << endl;
                        i+=1;
                        ttoken->token_kind = "REAL";
                        while(isdigit(ts[i])) {
                            //printf("%c", ts[i]);
                            i++;
                        }
                    } else { // int
                        ttoken->token_kind = "INT";
                        while(isdigit(ts[i])) {
                            printf("%c", ts[i]);
                            i++;
                        }
                        //cout << "i=" << i<< endl;
                    }
                    i--;
                } else switch(ts[i]){
                   cout << "·ûºÅ\n";
                   char next;
                   case '*':
                    next = ts[i+1];
                    if(next == '*') {
                        ttoken->token_kind = "EOF";
                    } else {
                        ttoken->token_kind = "MULTI";
                    }
                    break;
                case ':':
                    next = ts[i+1];
                    if(next == '=') {
                        ttoken->token_kind = "ASSIGN";
                    } else {
                        ttoken->token_kind = "COLON";
                    }
                    break;
                case '<':
                    next = ts[i+1];
                    if(next == '=') {
                        ttoken->token_kind = "LE";
                    } else if(next == '>') {
                        ttoken->token_kind = "NE";
                    } else {
                        ttoken->token_kind = "LT";
                    }
                    break;
                case '=':
                    ttoken->token_kind = "EQ";
                    break;
                case '>':
                    next = ts[i+1];
                    if(next == '=') {
                        ttoken->token_kind = "GE";
                    } else {
                        ttoken->token_kind = "GT";
                    }
                    break;
                case '+':
                    ttoken->token_kind = "PLUS";
                    break;
                case '-':
                    ttoken->token_kind = "MINUS";
                    break;
                case '/':
                    ttoken->token_kind = "RDIV";
                    break;
                case ',':
                    ttoken->token_kind = "COMMA";
                    break;
                case ';':
                    ttoken->token_kind = "SEMIC";
                    break;
                case '(':
                    ttoken->token_kind = "LR_BARK";
                    break;
                case ')':
                    ttoken->token_kind = "RR_BARK";
                    break;
                case '[':
                    ttoken->token_kind = "LS_BARK";
                    break;
                case ']':
                    ttoken->token_kind = "RS_BARK";
                    break;
                case '`':
                    ttoken->token_kind = "Q_MARK";
                    break;
                case '^':
                    ttoken->token_kind = "CAP";
                    break;
                }
            ttoken->end = i;
            string tmp = ts.substr((unsigned long) ttoken->start, (unsigned long) ttoken->end - ttoken->start + 1);
            ttoken->value = tmp;
            ttoken->checkIdentifier();
            list_token.push_back(ttoken);
            ttoken->lineIndex = line;
            }else{

            }
         }
         cout << endl;
    }
    in.close();
}
