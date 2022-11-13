#include <sys/stat.h>
#include <sys/types.h>
#include <sys/fcntl.h>
#include <sys/times.h>
#include <sys/errno.h>
#include <sys/time.h>
#include <stdio.h>

#include "syscall.h"

void _exit() {
	asm volatile("int $0x80" :: "a"(SYS_EXIT));
}


int close(int file) {
	return 0; //TODO
}

char **environ = 0; //TODO

int execve(char *name, char **argv, char **env) {
	return 0; //TODO
}

int fork() {
        int ret = 0;
	asm volatile("int $0x80" :: "a"(SYS_FORK));
        asm volatile("mov %%eax, %0" : "=r"(ret));
        return ret;
}

int fstat(int file, struct stat *st) {
	return 0; //TODO
}


int getpid() {
	return 0; //TODO
}

int isatty(int file) {
	return 0; //TODO
}

int kill(int pid, int sig) {
	return 0; //TODO
}

int link(char *old, char *new) {
	return 0; //TODO
}

int lseek(int file, int ptr, int dir) {
	return 0; //TODO
}

int open(const char *name, int flags, ...) {
	return 0; //TODO
}

int read(int file, char *ptr, int len) {
	int ret = 0;
        asm volatile("int $0x80" :: "a"(SYS_READ), "b"(file), "c"(ptr), "d"(len));
        asm volatile("mov %%eax, %0" : "=r"(ret));
        return ret;
}

caddr_t sbrk(int incr) {
	return 0; //TODO
};

int stat(const char *file, struct stat *st) {
	return 0; //TODO
}

clock_t times(struct tms *buf) {
	return 0; //TODO
}

int unlink(char *name) {
	return 0; //TODO
}

int wait(int *status) {
	return 0; //TODO
}

int write(int file, char *ptr, int len) {
	int ret = 0;
        asm volatile("int $0x80" :: "a"(SYS_WRITE), "b"(file), "c"(ptr), "d"(len));
        asm volatile("mov %%eax, %0" : "=r"(ret));
        return ret;
}

int gettimeofday(struct timeval *p, void *tz) {
	return 0; //TODO
}

typedef void (*sighandler_t)(int);

sighandler_t signal(int sig, sighandler_t handler) {
	//TODO
}
