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
        //t_list *spisok = mx_return_spisok(dir);
        mx_gls(argc, argv);
        closedir(dir);
    }
    else if (argc >= 3) {
        for (int i = 2; i < argc; i++) {
            DIR *dir = opendir(argv[i]);

            if (!dir) {
                mx_uncreated_file(argv[i]); 
            }
            //t_list *spisok = mx_return_spisok(dir);
            mx_gls(argc, argv);
        }
    }
}


