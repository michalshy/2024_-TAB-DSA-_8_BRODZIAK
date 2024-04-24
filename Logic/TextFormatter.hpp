//
// Created by Michin on 24.04.2024.
//

#ifndef INC_2024__TAB_DSA__8_BRODZIAK_TEXTFORMATTER_HPP
#define INC_2024__TAB_DSA__8_BRODZIAK_TEXTFORMATTER_HPP

#include <windows.h>
#include <iostream>
#include <thread>
#include <iomanip>
#include "../Globals.hpp"

namespace TextColors
{
    static int BLUE = 1;
    static int GREEN = 2;
    static int LIGHTBLUE = 3;
    static int RED = 4;
    static int PURPLE = 5;
    static int YELLOW = 6;
    static int WHITE = 7;
    static int GREY = 8;
    static int BLUEBERRY = 9;
    static int LIGHTGREEN = 10;
    static int CYAN = 11;
    static int COTOJEST = 12;
    static int PINK = 13;
    static int BEZOWYXD = 14;
}

namespace TextFunctions{
    static void changeTextColor(int color)
    {
        SetConsoleTextAttribute(cmd::hOutput, color);
    }

    static void typeWriteMessage(std::string& s, int time)
    {
        for (const auto c : s) {
            std::cout << c << std::flush;
            std::this_thread::sleep_for(std::chrono::milliseconds(time));
        }
        printf("\n");
    }

    static void print(std::string& message)
    {
        std::cout<<message<<std::endl;
    }

    bool setCursor(short x, short y)
    {
        return SetConsoleCursorPosition(cmd::hOutput, {x, y});
    }
}



#endif //INC_2024__TAB_DSA__8_BRODZIAK_TEXTFORMATTER_HPP
