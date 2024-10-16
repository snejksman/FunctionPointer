#pragma once
class clsTaskManager
{
	public:

	clsTaskManager(void);	// konstruktor
	~clsTaskManager(void);	//destruktor

	int AddTask();	// pridat ulohu
	bool Run();		// zapnout
	bool Stop();	// vypnout
};