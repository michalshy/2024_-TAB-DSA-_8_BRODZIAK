//
// Created by jakub on 28.05.2024.
//

#ifndef STATELISTTAGS_HPP
#define STATELISTTAGS_HPP
#include "StatesConf.hpp"
#include "../FSM/StateMachine.hpp"
#include "../FSM/State.hpp"
#include "../Logic/PromptSingleton.hpp"
#include "../Logic/StackApi/StackManager.hpp"

#include "../Logic/TagList/TagsList.hpp"



/**
 * State which provides list of questions found by tags provided in Tags state
 */

class StateListTags: public State<States>  {
	std::string question;
	std::vector<TagsList> questionsList;
	StackManager sm = StackManager();
	PromptSingleton* prompt = PromptSingleton::GetInstance();
	std::vector<std::string> dict = {
		"return"
};

public:
	explicit StateListTags(FiniteStateMachine<States>& fsm)
	: State<States>(fsm, States::LISTTAGS, "LISTTAGS"){}
	void OnEnter() override;
	void OnUpdate() override;
	void OnExit() override;
	void ManageList();
	bool ChoosingTitle(std::string in);
};



#endif //STATELISTTAGS_HPP
