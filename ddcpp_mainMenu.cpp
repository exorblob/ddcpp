#include "ddcpp.h"

int MainMenu::GetUserOption()
{
	UserInput UserInput;
	
	bool Correct = false;
	
	int Choice = 0;
	
	while (Correct == false) {
		cout << "Select the option you would like by typing the corresponding number and pressing enter" << endl;
		
		cout << "1. Generate new character" << endl
			  << "2. Edit existing character" << endl
			  << "3. Print character sheet" << endl
			  << "4. delete character" << endl
			  << "5. exit the program" << endl;			  	  
			  
		Choice = UserInput.GetInt(5);	
		
		Correct = UserInput.ValidateInput(Choice);
	}	
	return Choice;
}