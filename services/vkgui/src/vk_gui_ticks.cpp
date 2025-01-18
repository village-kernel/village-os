//###########################################################################
// vk_gui_ticks.cpp
// Definitions of the functions that manage ticks
//
// $Copyright: Copyright (C) village
//###########################################################################
#include "vk_gui_ticks.h"
#include "vk_kernel.h"


/// @brief 
void VkTicks::Setup(VgDevices* devices)
{

}


/// @brief 
void VkTicks::Exit()
{

}


/// @brief 
/// @return 
int VkTicks::GetTicks()
{
	return kernel->system.GetSysClkCounts();
}
