#include "shell.h"
int main (__attribute__((unused)) int argc, char **argv,__attribute__((unused))char *env[])
{
int mode;
mode = isatty(STDIN_FILENO);
mode == 0? non_inter(argv): inter(argv);
return (0);
}
void non_inter(char **argv)
{
printf("%s non-interactive", argv[0]);
}
void inter(char **argv)
{
printf("%s interactive\n", argv[0]);
}
