#include <fcntl.h>

extern void exit(int code);
extern int main(int argc, char **argv, char **env);

void _start(int argc, char **argv, char **env){
	exit(main(argc, argv, env));
}
