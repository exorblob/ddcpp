#include "ddcpp.h"

int main()
{
	MainMenu MainMenu;
	Character Character;
	Exit Exit;
	
	bool Running = true;
	
	int Choice = 0;
	
	while (Running == true)
	{
		int Option = 0;
		
		Choice = MainMenu.GetUserOption();
		
		if (Choice == 1)
		{
			Character.GenerateNew();
		}
		if (Choice == 3)
		{
			
		}
		if (Choice == 3)
		{
			
		}
		if (Choice == 4)
		{
			
		}
		if (Choice == 5)
		{
						
			if (Exit.Exiting() == false)
			{	
						
				Running = false;
			}
		}
	}
}