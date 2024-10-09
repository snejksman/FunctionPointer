
#include <iostream>
#include <Windows.h>
#include "clsTaskManager.h"

clsTaskManager * objTManager;

void(*fce1)(void);
void(*fce2)(void);

void MojeFce1(void)
{
	printf("b");
}

void MojeFce2()
{
	printf("a");
}

void MyLoop() 
{
	for (;;)
	{
		if (fce1 != NULL) fce1();
		
		if (fce2 != NULL) fce2();
		
		//Sleep(1);
	}
}

int main()
{
	objTManager = new clsTaskManager();
	fce1 = MojeFce1;
	fce2 = MojeFce2;
}
