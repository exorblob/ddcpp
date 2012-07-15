#include "ddcpp.h"

void Character::GenerateNew()
{
	Exit Exit;
	UserInput UserInput;
	
	bool Continue = true;
	bool Correct = false;
	
	int part = 1;
	int Choice = 0;
	
	while (Continue == true)
	{
		Choice = 0;
		Correct = false;
		switch (part)
		{
			case 1:
				WelcomeToCharacterGenerator();
				break;
			case 2:
				Instructions();
				break;
			case 3:
				SetPlayerName();
				break;
			case 4:
				SetPlayerPhoneNumber();					
				break;
			case 5:
				SetPlayerEmail();
				break;
			case 6:
				SetPlayerPhysicalAddress();
				break;
			case 7:
				SetPlayerPostalAddress();
				break;
			case 8:
				SetPlayerModeOfTransportation();
				break;
			case 9:
				SetPlayerHasInternetAccess();
				break;
			case 10:
				SetPlayerGender();
				break;
			case 11:
				SetPlayerAdditionalInformtion();
				break;
		}

		while (Correct == false)
		{
			cout << "Continue generation or exit to main menu?" << endl;
			cout << "Continue  = 1 Exit = 2" << endl;
						
			Choice = UserInput.GetInt(2);
			Correct = UserInput.ValidateInput(Choice);
			if (Correct == true)
			{
				if (Choice == 1)
				{
					part = part + 1;
					Continue = true;
				}
				else if (Choice == 2)
				{
					Continue = false;
				}
			}
		}
	}
}

void Character::WelcomeToCharacterGenerator()
{
	cout << endl << endl << endl
		  << "Welcome to the D&D character generator. this program will guid you through all" << endl 
	     << "the steps that are part of creating a character to use in First and second" << endl 
	     << "edition games of D&D. the first section of this is personal information" << endl 
	     << "so that the DM has a way to contact you as well as some other mostly important" << endl 
	     << "information. you can skip entering any of the inforamtion" << endl 
	     << "at any time at the prompts." << endl << endl
	     << "enjoy!" << endl << endl << endl;
}

void Character::Instructions()
{
	cout << endl << endl
	     << "the instructions are simple enter values as requested and the program will ask " << endl 
	     << "for confirmation. if you enter a value that is not of the right type the program" << endl 
	     << "will ask you to re-enter the data in the correct type." << endl << endl;
}

void Character::SetPlayerName()
{
	UserInput UserInput;
	
	bool Correct = false;
	
	string Input = "";
	
	while (Correct == false)
	{	
		cout << "Please enter your name: ";
	
		Input = UserInput.GetString();
		
		Correct = UserInput.ValidateInput(Input);	
	}
	PlayerName = Input;
}

void Character::SetPlayerPhoneNumber()
{
	UserInput UserInput;
	
	bool Correct = false;
	
	string Input = "";
	
	while (Correct == false)
	{
		cout << "Enter your phone number: ";
		
		Input = UserInput.GetString();
		
		Correct = UserInput.ValidateInput(Input);
	}
	PlayerPhoneNumber = Input;
}

void Character::SetPlayerEmail()
{
	UserInput UserInput;
	
	bool Correct = false;
	
	string Input = "";
	
	while (Correct == false)
	{
		cout << "Enter your Email: ";
		
		Input = UserInput.GetString();
		
		Correct = UserInput.ValidateInput(Input);
	}
	PlayerEmail = Input;
}

void Character::SetPlayerPhysicalAddress()
{
	UserInput UserInput;
	
	bool Correct = false;
	
	string Input = "";
	
	while (Correct == false)
	{
		cout << "Enter your street address: ";
		
		Input = UserInput.GetString();
		
		Correct = UserInput.ValidateInput(Input);
	}
	PlayerPhysicalAddress = Input;
}

void Character::SetPlayerPostalAddress()
{
	UserInput UserInput;
	
	bool Correct = false;
	
	string Input = "";
	
	while (Correct == false)
	{
		cout << "Enter your postal address: ";
		
		Input = UserInput.GetString();
		
		Correct = UserInput.ValidateInput(Input);
	}
	PlayerPostalAddress = Input;
}

void Character::SetPlayerModeOfTransportation()
{
	UserInput UserInput;
	
	bool Correct = false;
	
	int Choice = 0;
	
	string Input = "";
	
	while (Correct == false)
	{
		cout << "What form of transportation do you use?" << endl << endl;
		
		cout << "1. Car" << endl
			  << "2. Bus" << endl
			  << "3. Taxi" << endl
			  << "4. Bike" << endl
			  << "5. Walking" << endl;
		
		while (Correct == false)
		{
			cout << "Type the number beside mode of transportaion you use the most" <<  endl;
		
			Choice = UserInput.GetInt(5);
			Correct = UserInput.ValidateInput(Choice);

			if (Correct == true)
			{
				PlayerModeOfTransportaion = Choice;
			}
			else if (Correct == false)
			{
				break;
			}
			
		}
	}
}

void Character::SetPlayerHasInternetAccess()
{
	UserInput UserInput;
	
	bool Correct = false;
	
	int Choice = 0;
	
	cout << "Do you have acces to the internet at home?" << endl;
	cout << "Yes = 1 No = 2" << endl;
	
	while (Correct == false)
	{
		Choice = UserInput.GetInt(2);
		Correct = UserInput.ValidateInput(Choice);
		
	}
	
	if (Choice == 1)
	{
		PlayerHasInternetAccess = true;
	}
	else if (Choice == 2)
	{
		PlayerHasInternetAccess = false;
	}
}

void Character::SetPlayerGender()
{
	UserInput UserInput;
	
	string Input = "";
	
	bool Correct = false;
	
	cout << "What is your gender?" << endl;
	cout << "type Male or Female" << endl;
	
	while (Correct == false)
	{
		Input = UserInput.GetString();
		
		Correct = UserInput.ValidateInput(Input);
	
	
		if (Input == "Male")
		{
			PlayerGender = Input;
		}
		else if (Input == "female")
		{
			PlayerGender = Input;
		}
		else if (Input == "Female")
		{
			PlayerGender = Input;
		}else if (Input == "male")
		{
			PlayerGender = Input;
		}
		else
		{
			cout << "Please enter a real gender with correct spelling." << endl; 
			Correct = false;
		}
	}
}

void Character::SetPlayerAdditionalInformtion()
{
	UserInput UserInput;
	
	string Input = "";
	
	bool Correct = false;
	
	while (Correct == false)
	{
		cout << "You can now enter any additional information that you may find important" << endl
		     << "for the DM to know. for example any times where it is more convinent to " << endl
		     << "play games or preferences towards a specific play style ect." << endl;
		
		Input = UserInput.GetString();
		
		Correct = UserInput.ValidateInput(Input);
	}
	PlayerAdditionalInformation = Input;
}