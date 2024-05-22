//
// Created by Michin on 21.04.2024.
//

#include "StateIdle.hpp"
#include "../Texts/AllTexts.hpp"
#include "../Logic/TextFormatter.hpp"



void StateIdle::onEnter(){
    State<States>::onEnter();
    system("cls");
    TextFunctions::changeTextColor(TextColors::BEIGE);
    TextFunctions::print(IdleTexts::title);
}

void StateIdle::onUpdate() {

    State<States>::onUpdate();
    TextFunctions::setCursor(40, 9);
    TextFunctions::typeWriteMessage(IdleTexts::helloIns, 50);
    TextFunctions::setCursor(40, 11);
    prompt->getPromptAuto(dict);
    if(prompt->retValues() == "login")
    {
        mFsm.setCurrentState(States::LOGIN);
    }
    else if(prompt->retValues() == "register")
    {
        mFsm.setCurrentState(States::REGISTER);
    }
    else if(prompt->retValues() == "about")
    {
        mFsm.setCurrentState(States::ABOUT);
    }
    else
    {
        onEnter();
        mFsm.setCurrentState(States::IDLE);
    }
}

void StateIdle::onExit() {
    State<States>::onExit();
}
