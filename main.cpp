#include "include/list.h"

int main(int arg_count, char *args[]) {
    if( arg_count > 1 ) {
        List Welcome;
        Welcome.name = string(args[1]);
        Welcome.print_menu();
    }
    else {
        cout << "Usernane not supplied.. exiting the program" << endl; 
    }
    return 0;
}

