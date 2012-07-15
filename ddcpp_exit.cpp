#include "ddcpp.h"

bool Exit::Exiting()
{
	UserInput UserInput;
	
	bool Correct = false;
	
	int Choice = 0;
	 while (Correct == false)
	 {
			
		cout << "Are you sure you want to exit?" << endl;
		cout << "Yes = 1 No = 2" << endl;
	
		Choice = UserInput.GetInt(2);
	
		Correct = UserInput.ValidateInput(Choice);
	
		if (Correct == true)
		{	
			if (Choice == 1)
			{
				return false;
			}
			if (Choice == 2)
			{
				return true;
			}
		}
	}
}