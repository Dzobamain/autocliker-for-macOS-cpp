#ifndef AUTOCLIKERMENU_H
#define AUTOCLIKERMENU_H

#include <iostream>
#include <ncurses.h>

char AutoclikerMenu() // Autocliker menu
{
    initscr(); 
    noecho();
    cbreak();
    keypad(stdscr, TRUE);

    clear();
    printw("Menu:\n");
    printw("1. Start clicker\n");
    printw("2. Display settings\n");
    printw("3. Change number of clicks\n");
    printw("4. Change delay between clicks\n");
    printw("5. Change click execution time\n");
    printw("6. Change time to start\n");
    printw("Press 'q' key to exit...");

    char menuKey;
    do
    {
        menuKey = getch();

        if (menuKey == '1' || menuKey == '2' || menuKey == '3' || menuKey == '4' || menuKey == '5' || menuKey == '6')
        {
            endwin(); 
            std::cout << "Your choice: " << menuKey << std::endl;
            return menuKey;
        }
        else if (menuKey == 'q' || menuKey == 'Q')
        {
            endwin();
            return menuKey;
        }
    } while (true);
}

char SetClickMode() // Click mode menu
{
    initscr(); 
    noecho();
    cbreak();
    keypad(stdscr, TRUE); 

    clear();
    printw("Menu:\n");
    printw("1. Click area at cursor\n");
    printw("Press 'q' key to back...");

    char menuKey;
    do
    {
        menuKey = getch(); 

        if (menuKey == '1')
        {
            endwin(); 
            std::cout << "Your choice click mode: " << menuKey << std::endl;
            return menuKey;
        }
        else if (menuKey == 'q' || menuKey == 'Q')
        {
            endwin();
            return '\0';
        }
    } while (true);
}

#endif // AUTOCLIKERMENU_H