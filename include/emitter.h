#ifndef EMITTER_H_
#define EMITTER_H_
#include "global.h"

void emit(int t, int tval)

{

    switch(t)
    {
    case '+':
        fprintf(output, "Pop r1 \nPop r2\nAdd r2,r1,\nPush r2\n", t);
        break;
    case '-':
        fprintf(output,"Pop r1 \nPop r2 \nSub r2,r1,\nPush r2\n", t);
        break;
    case '*':
        fprintf(output,"Pop r1 \nPop r2 \nMul r2,r1,\nPush r2\n", t);
        break;
    case '/':
        fprintf(output,"Pop r1 \nPop r2 \nRdiv r2,r1,\nPush r2\n", t);
        break;
    case DIV:
        fprintf(output,"Pop r1 \nPop r2 \nDiv r2,r1,\nPush r2\n");
        break;
    case MOD:
        fprintf(output,"Pop r1 \nPop r2 \nMOD r2,r1,\nPush r2\n");
        break;
    case NUM:
        fprintf(output,"Push %d\n", tval);
        break;
    case ID:
        fprintf(output,"Push %s\n", symtable[tval].lexptr);
        break;
    default:
        printf("token %d, tokenval %d\n", t, tval);
    }
}

#endif // EMITTER_H_


