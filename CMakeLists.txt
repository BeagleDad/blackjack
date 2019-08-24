cmake_minimum_required(VERSION 3.14.3)
add_compile_options(-Wall -Wextra -Wpedantic)
add_executable(blackjack main.cpp deck.cpp menu.cpp BlackJack.cpp hand.cpp)
