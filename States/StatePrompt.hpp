//
// Created by Michin on 21.04.2024.
//

#ifndef INC_2024__TAB_DSA__8_BRODZIAK_STATEPROMPT_HPP
#define INC_2024__TAB_DSA__8_BRODZIAK_STATEPROMPT_HPP

#include "StatesConf.hpp"
#include "../FSM/StateMachine.hpp"
#include "../FSM/State.hpp"

#include <iostream>
#include <string>
#include "../Logic/PromptSingleton.hpp"
#include "../Logic/StackManager.hpp"


class StatePrompt : public State<States> {
    PromptSingleton* prompt = PromptSingleton::getInstance();
    StackManager sm = StackManager();
public:
    explicit StatePrompt(FiniteStateMachine<States>& fsm)
    : State<States>(fsm, States::PROMPT, "PROMPT"){}

    void onEnter() override;
    void onUpdate() override;
    void onExit() override;
};


#endif //INC_2024__TAB_DSA__8_BRODZIAK_STATEPROMPT_HPP
