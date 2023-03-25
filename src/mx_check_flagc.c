#include "../inc/uls.h"

void mx_check_l(int argc, char* argv[]) {
	if (argc == 2){
            DIR *dir = opendir(".");

            if (!dir) {
                mx_uncreated_file("."); 
            }

            t_list *spisok = mx_return_spisok(dir);
            mx_lls(spisok, ".");
            closedir(dir);
        }
        else if (argc > 3){
            for (int i = 2; i < argc; i++){
                DIR *dir = opendir(argv[i]);

                if (!dir) {
                    mx_uncreated_file(argv[i]); 
                }

                t_list *spisok = mx_return_spisok(dir);
                mx_lls(spisok, argv[i]);
                closedir(dir);
            }
        }
}

void mx_check_G(int argc, char* argv[]) {
    if (argc == 2) {
        DIR *dir = opendir(".");
        if (!dir) {
            mx_uncreated_file("."); 
        }
        t_list *spisok = mx_return_spisok(dir);
        mx_bubble_list_sort(spisok);
        //mx_gls(argc, argv);
        mx_print_G(spisok, ".");
        closedir(dir);
    }
    else if (argc >= 3) {
        t_list *file_spisok = mx_list_file(argc, argv, 2);
        t_list *dir_spisok = mx_list_dir(argc, argv, 2); 
        mx_print_G(file_spisok, ".");
        mx_print_dir_G(dir_spisok);
    }
}


