#include "include/list.h"
int main(int argc, char const *argv[])
{
    
    if (argc > 1)
    {
        List simpleList;
        simpleList.name = string(argv[0]);
        simpleList.print_menu();
    }
    else
    {
        cout << "Username not supplied... exiting the program" << endl;
    }

    return 0;
}
