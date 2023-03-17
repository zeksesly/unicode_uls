#pragma once

#include "../libmx/inc/libmx.h"
#include <dirent.h> 
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>



//errors
void mx_uls_errors_checker(int argc);
void mx_uncreated_file(char* oshibka);

//void mx_format_error(void);

//additional functions
//int mx_find_last_argument(int argc);

//ls
void mx_ls(char* argv[]);



