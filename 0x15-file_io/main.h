#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

#define BUFF_SIZE 1024
/* strlen func*/
/**
 * _strlen - returns the length of a string
 * @s: string to check
 * Return: integer length of a string
 */
int _strlen(char *s);
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
