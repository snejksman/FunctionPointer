#include "clsTaskManager.h"
#include <iostream>
#include <Windows.h>

clsTaskManager::clsTaskManager(void)
{
	for (int i = 0; i < 10; i++)
	{
		p_TaskArray[i] = NULL;
	}

}

clsTaskManager::~clsTaskManager(void)
{

}

int clsTaskManager::AddTask(void (*p_TaskWrite)(void))
{	
	for (int i = 1; i < 10; i++)
		if (p_TaskArray[i] = NULL)

		{
			p_TaskArray[i] = *p_TaskWrite;
			break;
		}
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
		for (int i = 0; i < 10; i++)
		{
			if (p_TaskArray[i] != NULL)
			{
				p_TaskArray[i]();
			}
		}
		//pozastavit
		Sleep(1000);

		

	} while (true);
}

int clsTaskManager::PrintTaskArray()
{
	for (int i = 0; i < 10; i++)
		 printf("%p", p_TaskArray[i]);

	return true;
}

bool clsTaskManager::Stop()
{
	return true;
}