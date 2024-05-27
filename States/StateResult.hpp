//
// Created by Michin on 24.04.2024.
//

#ifndef INC_2024__TAB_DSA__8_BRODZIAK_STATERESULT_HPP
#define INC_2024__TAB_DSA__8_BRODZIAK_STATERESULT_HPP


#include "StatesConf.hpp"
#include "../FSM/StateMachine.hpp"
#include "../FSM/State.hpp"

#include <iostream>
#include <string>
#include "../Logic/PromptSingleton.hpp"
#include "../Logic/StackApi/StackManager.hpp"

class StateResult : public State<States> {
    PromptSingleton* prompt = PromptSingleton::GetInstance();
    std::string question;
    std::string answer;
    StackManager sm = StackManager();
    std::vector<std::string> dict = {
            "question",
            "return"
    };
public:
    explicit StateResult(FiniteStateMachine<States>& fsm)
            : State<States>(fsm, States::RESULT, "RESULT"){}

    void OnEnter() override;
    void OnUpdate() override;
    void OnExit() override;
};


#endif //INC_2024__TAB_DSA__8_BRODZIAK_STATERESULT_HPP
