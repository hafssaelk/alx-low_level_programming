#ifndef _MAIN_H_
#define _MAIN_H_ 

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

ssize_t my_read_textfile(const char *file_name, size_t num_letters);
int my_create_file(const char *file_name, char *content);
int my_append_text_to_file(const char *file_name, char *content);

#endif
