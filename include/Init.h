
#ifndef INIT_H_
#define INIT_H_
#include "global.h"
#include "Symbol.h"

struct entry keywords[] =
{
    {"div", DIV},
    {"mod", MOD},
    {"while", WHILE},
    {"if", IF},
    {"begin", BEGIN},
    {"then", THEN},
    {"do", DO},
    {"end", END},
    {0, 0}
};
void init()
{
    struct entry *p;
    for (p = keywords; p->token; p++)
        insert(p->lexptr, p->token);
}
#endif


