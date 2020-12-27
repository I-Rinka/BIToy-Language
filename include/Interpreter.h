#ifndef __BTY_INTERPRETER_H__
#define __BTY_INTERPRETER_H__
#define VARI_TYPE long

typedef struct VARI_REG
{
    VARI_TYPE Value;
    struct VARI_REG *NEXT;
} VARI_REG;

//究竟是返回信息好还是返回下一行好呢
int Exe(const char *command, VARI_REG *reg_head, int now_line, int *next_line);

void hello();
#endif