﻿
#include <iostream>
#include <Windows.h>
#include "clsTaskManager.h"

clsTaskManager * objTManager;

void Task1(void)
{
	printf("hej %+");
}

void Task2(void)
{
	printf("ty %+");
}

void Loop(void) 
{
	
}

int main()
{
	objTManager = new clsTaskManager();

	objTManager->AddTask(Task1);
	objTManager->AddTask(Task2);
	objTManager->PrintTaskArray();

	objTManager->Run(Loop);
}

