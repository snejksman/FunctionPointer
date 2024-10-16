#include "clsTaskManager.h"

#include <Windows.h>

clsTaskManager::clsTaskManager(void)
{
	for (int i = 0; i < 10; i++)
		p_TaskArray[i] = NULL;
}

clsTaskManager::~clsTaskManager(void)
{

}

int clsTaskManager::AddTask(void (*p_TaskWrite)(void))
{	
	for (int i = 0; i < 10; i++)
		if (p_TaskArray[i] = NULL)
		{
			p_TaskArray[i] = *p_TaskWrite;
		}

	return true;
}

//-----------------------------------
// spusteni taskmanageru
//-----------------------------------
bool clsTaskManager::Run(void (*p_TaskFce)(void))
{

	do 
	{
		//pozastavit
		Sleep(1000);

		p_TaskFce();

	} while (true);
}

bool clsTaskManager::Stop()
{
	return true;
}