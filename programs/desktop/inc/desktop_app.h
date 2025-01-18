//###########################################################################
// desktop_app.h
// Declarations of the desktop app
//
// $Copyright: Copyright (C) village
//###########################################################################
#ifndef __DESKTOP_APP_H__
#define __DESKTOP_APP_H__

#include "desktop_view.h"

/// @brief DesktopApp
class DesktopApp
{
private:
	//Members
	VillageGUI*  vkgui;
	VgWindow*      mainwin;

	//Members
	DesktopView  view;
public:
	//Methods
	DesktopApp();
	~DesktopApp();
	void Setup();
	void Execute();
	void Exit();
};

#endif //!__DESKTOP_APP_H__
