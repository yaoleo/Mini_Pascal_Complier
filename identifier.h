#ifndef IDENTIFIER_H_INCLUDED
#define IDENTIFIER_H_INCLUDED

//如果token是字符串，则需要判断他是不是关键词
//以下是pascal关键词

#define AND     1
#define ARRAY   2
#define BEGIN   3
#define _CASE    4
#define _CONST   5
#define DIV     6
#define _DO      7
#define DOWNTO  8
#define _ELSE    9
#define END     10
#define _FILE    11
#define _FOR     12
#define FUNC    13
#define _GOTO    14
#define _IF      15
#define IN      16
#define LABEL   17
#define MOD     18
#define NIL     19
#define NOT     20
#define OF      21
#define OR      22
#define PACKED  23
#define PROC    24
#define PROG    25
#define RECORD  26
#define REPEAT  27
#define SET     28
#define THEN    29
#define TO      30
#define _TYPE    31
#define _UNTIL   32
#define VAR     33
#define _WHILE   34
#define WITH    35
#define ID      36
#define INT     37
#define REAL    38
#define STRING  39
#define PLUS    40
#define MINUS   41
#define MULTI   42
#define RDIV    43
#define EQ      44
#define LT      45
#define GT      46
#define LE      47
#define GE      48
#define NE      49
#define LR_BRAC 50
#define RR_BRAC 51
#define COMMA   52
#define P_MARK  53
#define F_STOP  54
#define RANGE   55
#define COLON   56
#define ASSIGN  57
#define SEMIC   58
#define CAP     59
#define EXP     60
#define LS_BRAC 61
#define RS_BRAC 62
#define Q_MARK  63
const string key_words[64] = { "", "and", "array", "begin", "case",
                                    "const", "div", "do", "downto",
                                    "else", "end", "file", "for",
                                    "function", "goto", "if", "in",
                                    "label", "mod", "nil", "not",
                                    "of", "or", "packed", "procedure",
                                    "program", "record", "repeat", "set",
                                    "then", "to", "type", "until",
                                    "var", "while", "with", "id",
                                    "int", "real", "string", "plus",
                                    "minus", "multi", "rdiv", "eq",
                                    "lt", "gt", "le", "ge", "ne",
                                    "lr_brac", "rr_brac", "comma",
                                    "p_mark", "f_stop", "range", "colon",
                                    "assign", "semic", "cap", "exp",
                                    "ls_brac", "rs_brac", "q_mark" };
#endif // IDENTIFIER_H_INCLUDED
