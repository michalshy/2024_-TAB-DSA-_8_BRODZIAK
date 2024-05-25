//
// Created by Michin on 24.04.2024.
//

#include "StateResult.hpp"
#include "../Texts/AllTexts.hpp"
#include "../Logic/TextFormatter.hpp"
#include "../Logic/StackApi/SyntaxHighlighting.hpp"
#include <vector>



void StateResult::onEnter() {
    State::onEnter();
    system("cls");
    TextFunctions::print(ResultTexts::title);
}

void StateResult::onUpdate() {
    State::onUpdate();
    TextFunctions::setCursor(32, 10);
    TextFunctions::typeWriteMessage(ResultTexts::questionText, 30);
    TextFunctions::setCursor(50, 10);
    TextFunctions::changeTextColor(TextColors::CYAN);
    question = prompt->retValues();
    TextFunctions::print(question);

    sm.setQuestion(prompt->retValues());
    std::string JsonQuestion = sm.askQuestion();

    std::string question = sm.changeJsonToString(JsonQuestion);
    //TextFunctions::typeWriteMessage(question, 30);

    std::cout << "Question:"<< std::endl;

    TextFunctions::changeTextColor(TextColors::WHITE);

    std::string questionWithoutHtml = sm.RemoveHtmlTags(question);
    std::string finalQuestion = sm.ReturnNiceCode(questionWithoutHtml);
    SyntaxHighlighting sh = SyntaxHighlighting();
    sh.RecognizeSyntax(finalQuestion);
    std::cout << finalQuestion;


    sm.getAnswer(JsonQuestion);
    std::cout << "Answer 1:" << std::endl;

    const std::string tescik = sm.bestAnswer[0];
    std::string withOutHtmlTags = sm.RemoveHtmlTags(tescik);
    std::string finalAnswer = sm.ReturnNiceCode(withOutHtmlTags);


    sh.RecognizeSyntax(finalAnswer);
    std::cout << finalAnswer;
    prompt->getPromptAuto(dict);
    if(prompt->retValues() == "return")
    {
        mFsm.setCurrentState(States::MENU);
    }
    else {
        mFsm.setCurrentState(States::PROMPT);
    }
}

void StateResult::onExit() {
    State::onExit();
    TextFunctions::changeTextColor(TextColors::CYAN);

}
