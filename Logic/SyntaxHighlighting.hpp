//
// Created by jakub on 20.05.2024.
//

#ifndef SYNTAXHIGHLIGHTING_HPP
#define SYNTAXHIGHLIGHTING_HPP

#include <iostream>
#include <string>
#include <vector>

class SyntaxHighlighting {

        std::string syntax;
        std::vector<std::string>keyWord;
        std::vector<std::string>basicSyntax;
        bool startOfCode = false;

public:
        std::vector<std::string> RecognizeSyntax(std::string in);

        std::string Hightlighting(std::string in,std::vector<std::string>&basic_strings, std::vector<std::string>&keyWord,
                                std::vector<std::string>&specialCharacter, std::vector<std::string>&colorSpecialCharacter);
        std::vector<std::string> splitWithWhiteSpaces(const std::string& str);

};



#endif //SYNTAXHIGHLIGHTING_HPP
