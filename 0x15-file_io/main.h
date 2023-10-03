#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h> 
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#define BUFFER_SIZE 1024
int _putchar(char c);
void err_98(int fd_from, char *buffer, char *argv);
void err_99(int fd_from, char *buffer, char *argv);
void err_100(int fd_from, char *buffer);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
