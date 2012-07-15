#include "ddcpp.h"

string UserInput::GetString()
{
	string Input = "";
	
	while (Input == "")
	{
	getline (cin, Input);
	}
	
	return Input;
}


int UserInput::GetInt(int NumberOfChoices)
{
	string Input = "";
	
	int MaxNumber = 0;
	int IsValidInt = 0;

	while (IsValidInt == 0)
	{
		Input = "";
		
		IsValidInt = 0;
		
		MaxNumber = NumberOfChoices;
		
		while (Input == "")
		{
			getline (cin, Input);
		}
		
		IsValidInt = ValidateInt (Input, MaxNumber);
		
		if (IsValidInt == 0)
		{
			cout << "Invalid Number please try again" << endl;
		}
	}
	
	return ValidInt;
}


int UserInput::ValidateInt(string Input, int MaxNumber)
{
	string InputToValidate = "";
	
	int MaxValidNumber = 0;
	int InputInt = 0;
	int Valid = 3;
	
	InputToValidate = Input;
	
	MaxValidNumber = MaxNumber;
	
	stringstream MyStream (InputToValidate);
	
	while (Valid == 3)
	{
		
		if (MyStream >> InputInt)
		{
			Valid = 2;
			
			while (Valid == 2)
			{
				
				if ((InputInt > MaxValidNumber) || (InputInt < 0))
				{
					Valid = 0;
				}
				if ((InputInt <= MaxValidNumber) && (InputInt > 0))
				{
					Valid = 1;
					ValidInt = InputInt;
				}
			}
		}
		else
		{
			Valid = 0;
		}
	} 
	return Valid;
}

bool UserInput::ValidateInput(int Input)
{
	
	int InputInt = Input;	
	int Choice = 0;

	bool Correct = false;
	
	while(Correct == false)
	{
		
		cout << "You entered: " << InputInt << endl;
		cout << "Is this correct?" <<endl;
		cout << "Yes = 1 No = 2" << endl;
		
		Choice = GetInt(2);
		
		if (Choice == 1)
		{
			Correct = true;
		}
		else if (Choice == 2)
		{
			Correct = true;
		}		
	}
	
	if (Choice == 1)
	{
		return true;
	}
	if (Choice == 2)
	{
		return false;
	}
}

bool UserInput::ValidateInput(string Input)
{
	UserInput UserInput;
	
	string InputString = Input;
	
	int Choice = 0;

	bool Correct = false;
	
	while(Correct == false)
	{
		
		cout << "You entered: " << InputString << endl;
		cout << "Is this correct?" <<endl;
		cout << "Yes = 1 No = 2" << endl;
		
		Choice = UserInput.GetInt(2);
		
		if (Choice == 1)
		{
			Correct = true;
		}
		else if (Choice == 2)
		{
			Correct = true;
		}
	}
	
	if (Choice == 1)
	{
		return true;
	}
	if (Choice == 2)
	{
		return false;
	}
}