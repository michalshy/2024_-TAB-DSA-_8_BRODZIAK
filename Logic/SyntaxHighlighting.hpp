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
public:
        std::string RecognizeSyntax(std::string in);
        int IsInCodeSection(std::string in);
        std::string Hightlighting(std::string in,std::vector<std::string>&basic_strings, std::vector<std::string>&keyWord,
                                std::vector<std::string>&specialCharacter, std::vector<std::string>&colorSpecialCharacter);
};



#endif //SYNTAXHIGHLIGHTING_HPP
