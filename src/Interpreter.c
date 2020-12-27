#include <stdio.h>
#include <string.h>
#include "../include/Interpreter.h"
void hello()
{
    printf("hello world\n");
}
int Exe(const char *command, VARI_REG *reg_head, int now_line, int *next_line)
{
    const char *op = strchr(command, ' ');
    op += 1;
    int in_len = op - command;
    int return_value = 0;
    //切换指令
    if (strncmp(command, "OP", in_len - 1) == 0)
    {
        printf("OP\n%s\n", op);
    }
    else if (strncmp(command, "JMP", in_len - 1) == 0)
    {
        printf("JMP\n");
    }
    else if (strncmp(command, "PRT", in_len - 1) == 0)
    {
        printf("PRT\n");
    }
    else if (strncmp(command, "IF", in_len - 1) == 0)
    {
        printf("IF\n");
    }
    else if (strncmp(command, "NUM", in_len - 1) == 0)
    {
        printf("NUM\n");
    }
    else if (strncmp(command, "END", in_len - 1) == 0)
    {
        printf("END\n");
    }
    return return_value;
}