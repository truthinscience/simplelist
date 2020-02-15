#include "include/list.h"

void List::print_menu()
{
    int choice;
    cout << "**************************" << endl;
    cout << " 1 - Print list." << endl;
    cout << " 2 - Add to list." << endl;
    cout << " 3 - Delete from list." << endl;
    cout << " 4 - Quit" << endl;
    cout << " Enter your choice and press return: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        print_list();
        break;
    case 2:
        add_item();
        break;
    case 3:
        delete_item();
        break;
    case 4:
        exit(0);
        break;
    default:
        cout << "Sorry choice not implemented yet!!!" << endl;
        break;
    }
}

void List::add_item()
{
    cout << "\n\n\n\n"
         << endl;
    cout << "*** Add Item ***" << endl;
    cout << "Type in the item and press enter: ";
    string item;
    cin >> item;
    list.push_back(item);
    cout << "Successfully added an item to the list" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cin.clear();
    print_menu();
}

void List::delete_item()
{
    cout << "\n\n\n\n"
         << endl;
    cout << "*** Delete Item ***" << endl;
    cout << "Select an item index number to delete: ";
    if (list.size())
    {
        for (size_t i = 0; i < list.size(); i++)
        {
            cout << i << ": " << list[i] << endl;
        }
        
    }
    else
    {
        cout << "No items in the list" << endl;
    }
    print_menu();
}

void List::print_list()
{
    cout << "\n\n\n\n"
         << endl;
    cout << "*** Print List ***" << endl;

    for (size_t index = 0; index < list.size(); index++)
    {
        cout << " * " << list[index] << endl;
    }
    cout << "M - Menu" << endl;
    char choice;
    cin >> choice;
    if (choice == 'M' || choice == 'm')
    {
        print_menu();
    }
    else
    {
        cout << "Invalid Choice. Quiting" << endl;
    }
    
}