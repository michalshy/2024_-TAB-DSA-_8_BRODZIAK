//
// Created by Michin on 21.04.2024.
//

#ifndef INC_2024__TAB_DSA__8_BRODZIAK_STATEFAVOURITES_HPP
#define INC_2024__TAB_DSA__8_BRODZIAK_STATEFAVOURITES_HPP

#include "StatesConf.hpp"
#include "../FSM/StateMachine.hpp"
#include "../FSM/State.hpp"
#include "..//Logic/Database/DBmanager.hpp"

#include <iostream>
#include <string>
#include "../Logic/PromptSingleton.hpp"

class StateFavourites : public State<States> {
    PromptSingleton* prompt = PromptSingleton::getInstance();
    std::string favs;
public:
    explicit StateFavourites(FiniteStateMachine<States>& fsm)
    : State<States>(fsm, States::FAVOURITES, "FAVOURITES"){}

    void onEnter() override;
    void onUpdate() override;
    void onExit() override;
};


#endif //INC_2024__TAB_DSA__8_BRODZIAK_STATEFAVOURITES_HPP
