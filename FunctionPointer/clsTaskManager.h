#pragma once

#include <Windows.h>

// pointer na task funkci

typedef void (*p_Tasks)(void);

class clsTaskManager
{
	public:

	p_Tasks p_TaskArray[10];

	clsTaskManager(void);	// konstruktor
	~clsTaskManager(void);	//destruktor

	int AddTask(void (*p_Task)(void));	// pridat ulohu
	int PrintTaskArray(void); // vypise co je v TaskArray
	bool Run(void (*p_TaskFce)(void));		// zapnout
	bool Stop();	// vypnout
};