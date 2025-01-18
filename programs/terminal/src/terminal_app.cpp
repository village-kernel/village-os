//###########################################################################
// TerminalAPP.cpp
// Definitions of the functions that manage terminal app
//
// $Copyright: Copyright (C) village
//###########################################################################
#include "terminal_app.h"
#include "vk_kernel.h"


/// @brief Constructor
TerminalAPP::TerminalAPP()
	:vkgui(NULL),
	mainwin(NULL)
{
}


/// @brief Destructor
TerminalAPP::~TerminalAPP()
{
}


/// @brief Setup
void TerminalAPP::Setup()
{
	//Gets the vkgui module
	Module* module = kernel->feature.GetModule("vkgui");
	if (NULL == module) return;

	//Gets the vkgui pointer
	vkgui = (VillageGUI*)module->GetData();
	if (NULL == vkgui) return;
	
	//Create mainwin
	mainwin = vkgui->mainwins.Create();
	if (NULL == mainwin) return;

	//Setup mainwin size
	mainwin->SetSize(600, 400);
	mainwin->SetTitle((char*)"terminal");
	mainwin->SetBgColor(kernel->system.GetSysClkCounts());
	mainwin->ShowOnCenter();

	//Init view component
	view.InitComponent(mainwin);
}


/// @brief Execute
void TerminalAPP::Execute()
{
	//Show main window
	mainwin->Show();
}


/// @brief Exit
void TerminalAPP::Exit()
{
	//Wait for mainwin close
	while (vkgui->mainwins.IsExist(mainwin)) 
	{
		kernel->thread.Sleep(1);
	}
}


/// @brief main
int main(void)
{
	TerminalAPP terminal;
	terminal.Setup();
	terminal.Execute();
	terminal.Exit();
	return 0;
}
