//
// Created by Michin on 23.04.2024.
//

#ifndef INC_2024__TAB_DSA__8_BRODZIAK_ALLTEXTS_HPP
#define INC_2024__TAB_DSA__8_BRODZIAK_ALLTEXTS_HPP

#include <string>

/**
 * File which contains namespaces of strings to use by all states of the program
 * Every state has its own namespace
 */

///namespace for Idle state
namespace IdleTexts
{
    static std::string title =   " ____    __                    __      ____                                                   \n"
                          "/\\  _`\\ /\\ \\__                /\\ \\    /\\  _`\\                                                 \n"
                          "\\ \\,\\L\\_\\ \\ ,_\\    __      ___\\ \\ \\/'\\\\ \\,\\L\\_\\    ___   _ __    __     _____      __   _ __  \n"
                          " \\/_\\__ \\\\ \\ \\/  /'__`\\   /'___\\ \\ , < \\/_\\__ \\   /'___\\/\\`'__\\/'__`\\  /\\ '__`\\  /'__`\\/\\`'__\\\n"
                          "   /\\ \\L\\ \\ \\ \\_/\\ \\L\\.\\_/\\ \\__/\\ \\ \\\\`\\ /\\ \\L\\ \\/\\ \\__/\\ \\ \\//\\ \\L\\.\\_\\ \\ \\L\\ \\/\\  __/\\ \\ \\/ \n"
                          "   \\ `\\____\\ \\__\\ \\__/.\\_\\ \\____\\\\ \\_\\ \\_\\ `\\____\\ \\____\\\\ \\_\\\\ \\__/.\\_\\\\ \\ ,__/\\ \\____\\\\ \\_\\ \n"
                          "    \\/_____/\\/__/\\/__/\\/_/\\/____/ \\/_/\\/_/\\/_____/\\/____/ \\/_/ \\/__/\\/_/ \\ \\ \\/  \\/____/ \\/_/ \n"
                          "                                                                          \\ \\_\\               \n"
                          "                                                                           \\/_/              ";

    static std::string helloIns = "Type login/register or about";
}

///namespace for Login state
namespace LoginTexts
{
    static std::string title =   " ____    __                    __      ____                                                   \n"
                          "/\\  _`\\ /\\ \\__                /\\ \\    /\\  _`\\                                                 \n"
                          "\\ \\,\\L\\_\\ \\ ,_\\    __      ___\\ \\ \\/'\\\\ \\,\\L\\_\\    ___   _ __    __     _____      __   _ __  \n"
                          " \\/_\\__ \\\\ \\ \\/  /'__`\\   /'___\\ \\ , < \\/_\\__ \\   /'___\\/\\`'__\\/'__`\\  /\\ '__`\\  /'__`\\/\\`'__\\\n"
                          "   /\\ \\L\\ \\ \\ \\_/\\ \\L\\.\\_/\\ \\__/\\ \\ \\\\`\\ /\\ \\L\\ \\/\\ \\__/\\ \\ \\//\\ \\L\\.\\_\\ \\ \\L\\ \\/\\  __/\\ \\ \\/ \n"
                          "   \\ `\\____\\ \\__\\ \\__/.\\_\\ \\____\\\\ \\_\\ \\_\\ `\\____\\ \\____\\\\ \\_\\\\ \\__/.\\_\\\\ \\ ,__/\\ \\____\\\\ \\_\\ \n"
                          "    \\/_____/\\/__/\\/__/\\/_/\\/____/ \\/_/\\/_/\\/_____/\\/____/ \\/_/ \\/__/\\/_/ \\ \\ \\/  \\/____/ \\/_/ \n"
                          "                                                                          \\ \\_\\               \n"
                          "                                                                           \\/_/              ";

    static std::string credentials = "We will ask you about credentials right now, okay?";
    static std::string login = "login:";
    static std::string password = "password:";
}

///namespace for Register state
namespace RegisterTexts
{
    static std::string title =   " ____    __                    __      ____                                                   \n"
                                 "/\\  _`\\ /\\ \\__                /\\ \\    /\\  _`\\                                                 \n"
                                 "\\ \\,\\L\\_\\ \\ ,_\\    __      ___\\ \\ \\/'\\\\ \\,\\L\\_\\    ___   _ __    __     _____      __   _ __  \n"
                                 " \\/_\\__ \\\\ \\ \\/  /'__`\\   /'___\\ \\ , < \\/_\\__ \\   /'___\\/\\`'__\\/'__`\\  /\\ '__`\\  /'__`\\/\\`'__\\\n"
                                 "   /\\ \\L\\ \\ \\ \\_/\\ \\L\\.\\_/\\ \\__/\\ \\ \\\\`\\ /\\ \\L\\ \\/\\ \\__/\\ \\ \\//\\ \\L\\.\\_\\ \\ \\L\\ \\/\\  __/\\ \\ \\/ \n"
                                 "   \\ `\\____\\ \\__\\ \\__/.\\_\\ \\____\\\\ \\_\\ \\_\\ `\\____\\ \\____\\\\ \\_\\\\ \\__/.\\_\\\\ \\ ,__/\\ \\____\\\\ \\_\\ \n"
                                 "    \\/_____/\\/__/\\/__/\\/_/\\/____/ \\/_/\\/_/\\/_____/\\/____/ \\/_/ \\/__/\\/_/ \\ \\ \\/  \\/____/ \\/_/ \n"
                                 "                                                                          \\ \\_\\               \n"
                                 "                                                                           \\/_/              ";

    static std::string credentials = "We will ask you about credentials right now, okay?";
    static std::string login = "login:";
    static std::string password = "password:";
    static std::string email="email:";
}

///namespace for Menu state
namespace MenuTexts
{
    static std::string title =   " ____    __                    __      ____                                                   \n"
                                 "/\\  _`\\ /\\ \\__                /\\ \\    /\\  _`\\                                                 \n"
                                 "\\ \\,\\L\\_\\ \\ ,_\\    __      ___\\ \\ \\/'\\\\ \\,\\L\\_\\    ___   _ __    __     _____      __   _ __  \n"
                                 " \\/_\\__ \\\\ \\ \\/  /'__`\\   /'___\\ \\ , < \\/_\\__ \\   /'___\\/\\`'__\\/'__`\\  /\\ '__`\\  /'__`\\/\\`'__\\\n"
                                 "   /\\ \\L\\ \\ \\ \\_/\\ \\L\\.\\_/\\ \\__/\\ \\ \\\\`\\ /\\ \\L\\ \\/\\ \\__/\\ \\ \\//\\ \\L\\.\\_\\ \\ \\L\\ \\/\\  __/\\ \\ \\/ \n"
                                 "   \\ `\\____\\ \\__\\ \\__/.\\_\\ \\____\\\\ \\_\\ \\_\\ `\\____\\ \\____\\\\ \\_\\\\ \\__/.\\_\\\\ \\ ,__/\\ \\____\\\\ \\_\\ \n"
                                 "    \\/_____/\\/__/\\/__/\\/_/\\/____/ \\/_/\\/_/\\/_____/\\/____/ \\/_/ \\/__/\\/_/ \\ \\ \\/  \\/____/ \\/_/ \n"
                                 "                                                                          \\ \\_\\               \n"
                                 "                                                                           \\/_/              ";
    static std::string helloText = "Hi! Choose question/history/tags/";
    static std::string favText = "favourites";
}

///namespace for Prompt state
namespace PromptTexts
{
    static std::string title = " ____    __                    __      ____                                                   \n"
        "/\\  _`\\ /\\ \\__                /\\ \\    /\\  _`\\                                                 \n"
        "\\ \\,\\L\\_\\ \\ ,_\\    __      ___\\ \\ \\/'\\\\ \\,\\L\\_\\    ___   _ __    __     _____      __   _ __  \n"
        " \\/_\\__ \\\\ \\ \\/  /'__`\\   /'___\\ \\ , < \\/_\\__ \\   /'___\\/\\`'__\\/'__`\\  /\\ '__`\\  /'__`\\/\\`'__\\\n"
        "   /\\ \\L\\ \\ \\ \\_/\\ \\L\\.\\_/\\ \\__/\\ \\ \\\\`\\ /\\ \\L\\ \\/\\ \\__/\\ \\ \\//\\ \\L\\.\\_\\ \\ \\L\\ \\/\\  __/\\ \\ \\/ \n"
        "   \\ `\\____\\ \\__\\ \\__/.\\_\\ \\____\\\\ \\_\\ \\_\\ `\\____\\ \\____\\\\ \\_\\\\ \\__/.\\_\\\\ \\ ,__/\\ \\____\\\\ \\_\\ \n"
        "    \\/_____/\\/__/\\/__/\\/_/\\/____/ \\/_/\\/_/\\/_____/\\/____/ \\/_/ \\/__/\\/_/ \\ \\ \\/  \\/____/ \\/_/ \n"
        "                                                                          \\ \\_\\               \n"
        "                                                                           \\/_/              ";
    static std::string promptText = "Write a question or type return to go back";
}

///namespace for Result state
namespace ResultTexts
{
    static std::string title = " ____    __                    __      ____                                                   \n"
        "/\\  _`\\ /\\ \\__                /\\ \\    /\\  _`\\                                                 \n"
        "\\ \\,\\L\\_\\ \\ ,_\\    __      ___\\ \\ \\/'\\\\ \\,\\L\\_\\    ___   _ __    __     _____      __   _ __  \n"
        " \\/_\\__ \\\\ \\ \\/  /'__`\\   /'___\\ \\ , < \\/_\\__ \\   /'___\\/\\`'__\\/'__`\\  /\\ '__`\\  /'__`\\/\\`'__\\\n"
        "   /\\ \\L\\ \\ \\ \\_/\\ \\L\\.\\_/\\ \\__/\\ \\ \\\\`\\ /\\ \\L\\ \\/\\ \\__/\\ \\ \\//\\ \\L\\.\\_\\ \\ \\L\\ \\/\\  __/\\ \\ \\/ \n"
        "   \\ `\\____\\ \\__\\ \\__/.\\_\\ \\____\\\\ \\_\\ \\_\\ `\\____\\ \\____\\\\ \\_\\\\ \\__/.\\_\\\\ \\ ,__/\\ \\____\\\\ \\_\\ \n"
        "    \\/_____/\\/__/\\/__/\\/_/\\/____/ \\/_/\\/_/\\/_____/\\/____/ \\/_/ \\/__/\\/_/ \\ \\ \\/  \\/____/ \\/_/ \n"
        "                                                                          \\ \\_\\               \n"
        "                                                                           \\/_/              ";
    static std::string answerSubtitle = "Most upvoted answered question: ";
    static std::string answer = "Example answered question: ";
    static std::string proceed = "Press enter to get back to menu";
    static std::string questionText = "Your question is: ";
    static std::string firstAnswer = "Answer 1: ";
}

///namespace for History state
namespace HistoryTexts
{
    static std::string title = " ____    __                    __      ____                                                   \n"
      "/\\  _`\\ /\\ \\__                /\\ \\    /\\  _`\\                                                 \n"
      "\\ \\,\\L\\_\\ \\ ,_\\    __      ___\\ \\ \\/'\\\\ \\,\\L\\_\\    ___   _ __    __     _____      __   _ __  \n"
      " \\/_\\__ \\\\ \\ \\/  /'__`\\   /'___\\ \\ , < \\/_\\__ \\   /'___\\/\\`'__\\/'__`\\  /\\ '__`\\  /'__`\\/\\`'__\\\n"
      "   /\\ \\L\\ \\ \\ \\_/\\ \\L\\.\\_/\\ \\__/\\ \\ \\\\`\\ /\\ \\L\\ \\/\\ \\__/\\ \\ \\//\\ \\L\\.\\_\\ \\ \\L\\ \\/\\  __/\\ \\ \\/ \n"
      "   \\ `\\____\\ \\__\\ \\__/.\\_\\ \\____\\\\ \\_\\ \\_\\ `\\____\\ \\____\\\\ \\_\\\\ \\__/.\\_\\\\ \\ ,__/\\ \\____\\\\ \\_\\ \n"
      "    \\/_____/\\/__/\\/__/\\/_/\\/____/ \\/_/\\/_/\\/_____/\\/____/ \\/_/ \\/__/\\/_/ \\ \\ \\/  \\/____/ \\/_/ \n"
      "                                                                          \\ \\_\\               \n"
      "                                                                           \\/_/              ";
    static std::string historyTheme = "Your recent questions:";
    static std::string returnText = "Type return to get back to menu";
}

///namespace for Favourites state
namespace FavouriteTexts
{
    static std::string title = " ____    __                    __      ____                                                   \n"
        "/\\  _`\\ /\\ \\__                /\\ \\    /\\  _`\\                                                 \n"
        "\\ \\,\\L\\_\\ \\ ,_\\    __      ___\\ \\ \\/'\\\\ \\,\\L\\_\\    ___   _ __    __     _____      __   _ __  \n"
        " \\/_\\__ \\\\ \\ \\/  /'__`\\   /'___\\ \\ , < \\/_\\__ \\   /'___\\/\\`'__\\/'__`\\  /\\ '__`\\  /'__`\\/\\`'__\\\n"
        "   /\\ \\L\\ \\ \\ \\_/\\ \\L\\.\\_/\\ \\__/\\ \\ \\\\`\\ /\\ \\L\\ \\/\\ \\__/\\ \\ \\//\\ \\L\\.\\_\\ \\ \\L\\ \\/\\  __/\\ \\ \\/ \n"
        "   \\ `\\____\\ \\__\\ \\__/.\\_\\ \\____\\\\ \\_\\ \\_\\ `\\____\\ \\____\\\\ \\_\\\\ \\__/.\\_\\\\ \\ ,__/\\ \\____\\\\ \\_\\ \n"
        "    \\/_____/\\/__/\\/__/\\/_/\\/____/ \\/_/\\/_/\\/_____/\\/____/ \\/_/ \\/__/\\/_/ \\ \\ \\/  \\/____/ \\/_/ \n"
        "                                                                          \\ \\_\\               \n"
        "                                                                           \\/_/              ";
    static std::string favTheme = "Your favourite questions:";
    static std::string returnText = "Type return to get back to menu";
}

///namespace for About state
namespace AboutTexts
{
    static std::string title = " ____    __                    __      ____                                                   \n"
        "/\\  _`\\ /\\ \\__                /\\ \\    /\\  _`\\                                                 \n"
        "\\ \\,\\L\\_\\ \\ ,_\\    __      ___\\ \\ \\/'\\\\ \\,\\L\\_\\    ___   _ __    __     _____      __   _ __  \n"
        " \\/_\\__ \\\\ \\ \\/  /'__`\\   /'___\\ \\ , < \\/_\\__ \\   /'___\\/\\`'__\\/'__`\\  /\\ '__`\\  /'__`\\/\\`'__\\\n"
        "   /\\ \\L\\ \\ \\ \\_/\\ \\L\\.\\_/\\ \\__/\\ \\ \\\\`\\ /\\ \\L\\ \\/\\ \\__/\\ \\ \\//\\ \\L\\.\\_\\ \\ \\L\\ \\/\\  __/\\ \\ \\/ \n"
        "   \\ `\\____\\ \\__\\ \\__/.\\_\\ \\____\\\\ \\_\\ \\_\\ `\\____\\ \\____\\\\ \\_\\\\ \\__/.\\_\\\\ \\ ,__/\\ \\____\\\\ \\_\\ \n"
        "    \\/_____/\\/__/\\/__/\\/_/\\/____/ \\/_/\\/_/\\/_____/\\/____/ \\/_/ \\/__/\\/_/ \\ \\ \\/  \\/____/ \\/_/ \n"
        "                                                                          \\ \\_\\               \n"
        "                                                                           \\/_/              ";
    static std::string aboutText = "About ";
    static std::string appText = "StackScraper";
    static std::string description = "Super CLI app to give answers about various problems!";
    static std::string returnText = "Type return to get back to menu";
}

///namespace for Tags state
namespace TagsTexts
{
    static std::string title = " ____    __                    __      ____                                                   \n"
        "/\\  _`\\ /\\ \\__                /\\ \\    /\\  _`\\                                                 \n"
        "\\ \\,\\L\\_\\ \\ ,_\\    __      ___\\ \\ \\/'\\\\ \\,\\L\\_\\    ___   _ __    __     _____      __   _ __  \n"
        " \\/_\\__ \\\\ \\ \\/  /'__`\\   /'___\\ \\ , < \\/_\\__ \\   /'___\\/\\`'__\\/'__`\\  /\\ '__`\\  /'__`\\/\\`'__\\\n"
        "   /\\ \\L\\ \\ \\ \\_/\\ \\L\\.\\_/\\ \\__/\\ \\ \\\\`\\ /\\ \\L\\ \\/\\ \\__/\\ \\ \\//\\ \\L\\.\\_\\ \\ \\L\\ \\/\\  __/\\ \\ \\/ \n"
        "   \\ `\\____\\ \\__\\ \\__/.\\_\\ \\____\\\\ \\_\\ \\_\\ `\\____\\ \\____\\\\ \\_\\\\ \\__/.\\_\\\\ \\ ,__/\\ \\____\\\\ \\_\\ \n"
        "    \\/_____/\\/__/\\/__/\\/_/\\/____/ \\/_/\\/_/\\/_____/\\/____/ \\/_/ \\/__/\\/_/ \\ \\ \\/  \\/____/ \\/_/ \n"
        "                                                                          \\ \\_\\               \n"
        "                                                                           \\/_/              ";
    static std::string tagText = "Tags: ";
    static std::string returnText = "Type return to get back to menu";
}

///namespace for List state
namespace ListState
{
    static std::string title = " ____    __                    __      ____                                                   \n"
        "/\\  _`\\ /\\ \\__                /\\ \\    /\\  _`\\                                                 \n"
        "\\ \\,\\L\\_\\ \\ ,_\\    __      ___\\ \\ \\/'\\\\ \\,\\L\\_\\    ___   _ __    __     _____      __   _ __  \n"
        " \\/_\\__ \\\\ \\ \\/  /'__`\\   /'___\\ \\ , < \\/_\\__ \\   /'___\\/\\`'__\\/'__`\\  /\\ '__`\\  /'__`\\/\\`'__\\\n"
        "   /\\ \\L\\ \\ \\ \\_/\\ \\L\\.\\_/\\ \\__/\\ \\ \\\\`\\ /\\ \\L\\ \\/\\ \\__/\\ \\ \\//\\ \\L\\.\\_\\ \\ \\L\\ \\/\\  __/\\ \\ \\/ \n"
        "   \\ `\\____\\ \\__\\ \\__/.\\_\\ \\____\\\\ \\_\\ \\_\\ `\\____\\ \\____\\\\ \\_\\\\ \\__/.\\_\\\\ \\ ,__/\\ \\____\\\\ \\_\\ \n"
        "    \\/_____/\\/__/\\/__/\\/_/\\/____/ \\/_/\\/_/\\/_____/\\/____/ \\/_/ \\/__/\\/_/ \\ \\ \\/  \\/____/ \\/_/ \n"
        "                                                                          \\ \\_\\               \n"
        "                                                                           \\/_/              ";
    static std::string tagText = "List of questions consisting of inputted tags: ";
    static std::string returnText = "Type return to get back to menu";
}


#endif //INC_2024__TAB_DSA__8_BRODZIAK_ALLTEXTS_HPP
