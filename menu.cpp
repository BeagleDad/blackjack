#include <iostream>
#include "menu.h"

void Menu::addMenuItem(const std::string &text, MenuFunction menuFunction)
{
    ++itemCount;
    MenuItem item = {text, menuFunction};
    items.emplace(itemCount, item);
}

void Menu::displayMenu()
{
    std::cout << "\n\n\t" << title_ << "\n\n";
    for (auto item : items)
    {
        std::cout << "    " << item.first << ". " << item.second.text << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Enter selection: ";
    while (1)
    {
        userInput();
        displayMenu();
    }
}

int Menu::userInput()
{
    unsigned int selection;
    std::cin >> selection;
    processSelection(selection);
    return selection;
}
int Menu::processSelection(int selection)
{

    // Check selection and run function if correct
    auto search = items.find(selection);
    if (search != items.end())
    {
        search->second.menuFunction();
    }
    else
    {
        std::cout << "Not found\n";
    }

    return selection;
}
