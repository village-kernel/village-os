//###########################################################################
// terminal_model.h
// Declarations of the terminal view model
//
// $Copyright: Copyright (C) village
//###########################################################################
#ifndef __TERMINAL_MODEL_H__
#define __TERMINAL_MODEL_H__

#include "vg_villageui.h"


/// @brief TerminalModel
class TerminalModel : public Class
{
public:
	//Data
	IData<char*>* ConsoleText;
public:
	//Methods
	TerminalModel();
	~TerminalModel();
};

#endif //!__TERMINAL_MODEL_H__
