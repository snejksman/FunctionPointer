
#include <iostream>
#include <Windows.h>
#include "clsTaskManager.h"

clsTaskManager * objTManager;

void Task1(void)
{
	printf("hhkj");
}

void Task2(void)
{
	printf("hikeagk");
}

void Loop(void) 
{
	
}

int main()
{
	objTManager = new clsTaskManager();

	objTManager->AddTask(Task1);
	objTManager->AddTask(Task2);

	objTManager->Run(Loop);
}

