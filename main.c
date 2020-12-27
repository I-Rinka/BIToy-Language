#include "include/Interpreter.h"
VARI_REG *HEAD;
int main(int argc, char const *argv[])
{
    int next_line;
    Exe("OP A=1+1", HEAD, 0, &next_line);
    Exe("NUM B", HEAD, 0, &next_line);
    Exe("JMP 10", HEAD, 0, &next_line);
    Exe("PRT B", HEAD, 0, &next_line);
    Exe("END 0", HEAD, 0, &next_line);
    Exe("IF B", HEAD, 0, &next_line);
    return 0;
}
