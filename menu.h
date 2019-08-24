#ifndef MENU_H
#define MENU_H

#include <map>
#include <vector>
#include <string>

typedef void (*MenuFunction)();

struct MenuItem
{
    const std::string text;
    MenuFunction menuFunction;
};

class Menu
{
public:
    Menu(const std::string &title)
        : itemCount(0), title_(title) {}

    void addMenuItem(const std::string &text, MenuFunction menuFunction);
    void displayMenu();
    int processSelection(int selection);
    int userInput();

private:
    int itemCount;
    std::map<int, MenuItem> items;
    const std::string title_;
};

#endif // MENU_H