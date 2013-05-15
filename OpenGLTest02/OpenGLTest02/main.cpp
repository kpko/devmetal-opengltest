#include <stdio.h>
#include <stdlib.h>

#include "GameWindow.h"

int main()
{
	GameWindow *gw = new GameWindow();
	
	if(!gw->Init())
		return -1;
	
	gw->Start();
	
	return 0;
}