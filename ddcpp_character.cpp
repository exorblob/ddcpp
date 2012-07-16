#include "ddcpp.h"

void Character::GenerateNew()
{
	Exit Exit;
	UserInput UserInput;
	
	bool Continue = true;
	bool Correct = false;
	
	int part = 12;
	int Choice = 0;
	
	while (Continue == true) {
		Choice = 0;
		Correct = false;
		switch (part) {
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
			case 12:
				SetCharacterClass();
				break;
			case 13:
				SetCharacterRace();
			case 14:
				SetCharacterAlignment();
			case 15:
				Continue = false;
				Correct = true;
		}

		while (Correct == false) {
			cout << "Continue generation or exit to main menu?" << endl;
			cout << "Continue  = 1 Exit = 2" << endl;
						
			Choice = UserInput.GetInt(2);
			Correct = UserInput.ValidateInput(Choice);
			if (Correct == true) {
				if (Choice == 1) {
					part = part + 1;
					Continue = true;
				}
				else if (Choice == 2) {
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
	
	while (Correct == false) {	
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
	
	while (Correct == false) {
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
	
	while (Correct == false) {
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
	
	while (Correct == false) {
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
	
	while (Correct == false) {
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
	
	while (Correct == false) {
		cout << "What form of transportation do you use?" << endl << endl;
		
		cout << "1. Car" << endl
			  << "2. Bus" << endl
			  << "3. Taxi" << endl
			  << "4. Bike" << endl
			  << "5. Walking" << endl;
		
		while (Correct == false) {
			cout << "Type the number beside mode of transportaion you use the most" <<  endl;
		
			Choice = UserInput.GetInt(5);
			Correct = UserInput.ValidateInput(Choice);

			if (Correct == true) {
				PlayerModeOfTransportaion = Choice;
			}
			else if (Correct == false) {
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
	
	while (Correct == false) {
		Choice = UserInput.GetInt(2);
		Correct = UserInput.ValidateInput(Choice);
		
	}
	
	if (Choice == 1) { PlayerHasInternetAccess = true; }
	else if (Choice == 2) { PlayerHasInternetAccess = false; }
}

void Character::SetPlayerGender()
{
	UserInput UserInput;
	
	string Input = "";
	
	bool Correct = false;
	
	cout << "What is your gender?" << endl;
	cout << "type Male or Female" << endl;
	
	while (Correct == false) {
		Input = UserInput.GetString();
		
		Correct = UserInput.ValidateInput(Input);
	
		if (Input.compare("Male") == 0) { PlayerGender = Input; }
		else if (Input.compare("male") == 0) { PlayerGender = Input; }
		else if (Input.compare("Female") == 0) { PlayerGender = Input; }
		else if (Input.compare("female") == 0) { PlayerGender = Input; }
		else {
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
	
	while (Correct == false) {
		cout << "You can now enter any additional information that you may find important" << endl
		     << "for the DM to know. for example any times where it is more convinent to " << endl
		     << "play games or preferences towards a specific play style ect." << endl;
		
		Input = UserInput.GetString();
		
		Correct = UserInput.ValidateInput(Input);
	}
	PlayerAdditionalInformation = Input;
}

void Character::SetCharacterClass()
{
	UserInput UserInput;
	
	bool Correct = false;
	
	string Input = "";
	while (Correct == false) {
		while (Correct == false){
		cout << "You may choose from the following class types:" << endl << endl;
		
		cout << "1. Cleric" << endl
		     << "2. Druid" << endl
		     << "3. Fighter" << endl
		     << "4. Paladin" << endl
		     << "5. Ranger" << endl
		     << "6. MagicUser" << endl
		     << "7. Illusionist" << endl
		     << "8. thief" << endl
		     << "9. Assassin" << endl
		     << "10. Monk" << endl;
		     
		cout << "type the class name you would like to pick" << endl;
	
		
			Input = UserInput.GetString();
			Correct = UserInput.ValidateInput(Input);
		}
		for (int i = 0; i < Input.size(); i++) { Input[i] = tolower (Input[i]); }
		
		if (Input.compare("cleric") == 0) { CharacterClass = Input; }
		else if(Input.compare("druid") == 0) { CharacterClass = Input; }
		else if(Input.compare("fighter") == 0) { CharacterClass = Input; }
		else if(Input.compare("paladin") == 0) { CharacterClass = Input; }
		else if(Input.compare("ranger") == 0) { CharacterClass = Input; }
		else if(Input.compare("magicuser") == 0) { CharacterClass = Input; }
		else if(Input.compare("illusionist") == 0) { CharacterClass = Input; }
		else if(Input.compare("thief") == 0) { CharacterClass = Input; }
		else if(Input.compare("assassin") == 0) { CharacterClass = Input; }
		else if(Input.compare("monk") == 0) {CharacterClass = Input;}
		else{
			Correct = false;
			cout << "Please enter a valid class." << endl << endl;
		}
	}
}

void Character::SetCharacterRace()
{
	UserInput UserInput;
	
	bool Correct = false;
	
	string Input = "";
	
	while (Correct == false) {
		while (Correct == false) {
			cout << "You are a: " << CharacterClass << ". You may be any of the following" << endl << endl;
	
			if (CharacterClass.compare("cleric") == 0) {
				cout << "1. Dwarven" << endl
					  << "2. Elven" << endl
					  << "3. Gnome" << endl
				  	  << "4. HalfElven" << endl
					  << "5. HalfOrc" << endl
					  << "6. Human" << endl;
			}
			else if(CharacterClass.compare("druid") == 0) {
				cout << "1. HalfElven" << endl
					  << "2. Halfling" << endl
					  << "3. Human" << endl;
			}
			else if(CharacterClass.compare("fighter") == 0) {
				cout << "1. Dwarven" << endl
					  << "2. Elven" << endl
					  << "3. Gnome" << endl
					  << "4. HalfElven" << endl
					  << "5. Halfling" << endl
					  << "6. HalfOrc" << endl
					  << "7. Human" << endl;
			}
			else if(CharacterClass.compare("paladin") == 0) { cout << "1. Human" << endl; }
			else if(CharacterClass.compare("ranger") == 0) {	
				cout << "1. HalfElven" << endl
					  << "2. Human" << endl;
			}
			else if(CharacterClass.compare("magicuser") == 0) {
				cout << "1. Elven" << endl
					  << "2. HalfElven" << endl
					  << "3. Human" << endl;
			}
			else if(CharacterClass.compare("illusionist") == 0) {
				cout << "1. Gnome" << endl
					  << "2. Human" << endl;
			}
			else if(CharacterClass.compare("thief") == 0) {
				cout << "1. Dwarven" << endl
					  << "2. Elven" << endl
					  << "3. Gnome" << endl
					  << "4. HalfElven" << endl
					  << "5. Halfling" << endl
					  << "6. HalfOrc" << endl
					  << "7. Human" << endl;
			}
			else if(CharacterClass.compare("assassin") == 0) {
					cout << "1. Dwarven" << endl
					  << "2. Elven" << endl
					  << "3. Gnome" << endl
					  << "4. HalfElven" << endl
					  << "5. HalfOrc" << endl
					  << "6. Human" << endl;
			}
			else if(CharacterClass.compare("monk") == 0) { cout << "1. Human" << endl; }
	
			cout << "What race would you like to be?" << endl << endl;

			Input = UserInput.GetString();
			Correct = UserInput.ValidateInput(Input);
		}
		for (int i = 0; i < Input.size(); i++) { Input[i] = tolower (Input[i]); }
		
		if (CharacterClass.compare("cleric") == 0) {			
			if(Input.compare("dwarven") ==0 ) { CharacterRace = Input; }
			else if (Input.compare("elven") == 0) { CharacterRace = Input; }
			else if (Input.compare("gnome") == 0) { CharacterRace = Input; }
			else if (Input.compare("halfelven") == 0) { CharacterRace = Input;  }
			else if (Input.compare("halforc") == 0) { CharacterRace = Input; }
			else if (Input.compare("human") == 0) { CharacterRace = Input; }
			else {
				Correct = false;
				cout << "Please enter a valid race." << endl << endl; 
			}									
		}
		else if(CharacterClass.compare("druid") == 0) {
			if (Input.compare("halfelven") == 0) { CharacterRace = Input; }
			else if (Input.compare("halfling") == 0) { CharacterRace = Input; }
			else if (Input.compare("human") == 0) { CharacterRace = Input; }
			else {
				Correct = false;
				cout << "Please enter a valid race." << endl << endl; 
			}
		}
		else if(CharacterClass.compare("fighter") == 0) {
			if(Input.compare("dwarven") ==0 ) { CharacterRace = Input; }
			else if (Input.compare("elven") == 0) { CharacterRace = Input; }
			else if (Input.compare("gnome") == 0) { CharacterRace = Input; }
			else if (Input.compare("halfelven") == 0) { CharacterRace = Input; }
			else if (Input.compare("halfling") == 0) { CharacterRace = Input; }
			else if (Input.compare("halforc") == 0) { CharacterRace = Input; }
			else if (Input.compare("human") == 0) { CharacterRace = Input; }
			else { 
				Correct = false;
				cout << "Please enter a valid race." << endl << endl; 
			}
		}
		else if(CharacterClass.compare("paladin") == 0) {
			if (Input.compare("human") == 0) { CharacterRace = Input; }
			else {
				Correct = false;
				cout << "Please enter a valid race." << endl << endl; 
			}
		}
		else if(CharacterClass.compare("ranger") == 0) {
			if (Input.compare("halfelven") == 0) { CharacterRace = Input; }
			else if (Input.compare("human") == 0) { CharacterRace = Input; }
			else {
				Correct = false;
				cout << "Please enter a valid race." << endl << endl; 
			}
		}
		else if(CharacterClass.compare("magicuser") == 0) { 
			if (Input.compare("elven") == 0) { CharacterRace = Input; }
			else if (Input.compare("halfelven") == 0) { CharacterRace = Input; }
			else if (Input.compare("human") == 0) { CharacterRace = Input; }
			else {
				Correct = false;
				cout << "Please enter a valid race." << endl << endl; 
			}
		}
		else if(CharacterClass.compare("illusionist") == 0) {
			if (Input.compare("gnome") == 0) { CharacterRace = Input; }
			else if (Input.compare("human") == 0) { CharacterRace = Input; }
			else {
				Correct = false;
				cout << "Please enter a valid race." << endl << endl; 
			}
		}
		else if(CharacterClass.compare("thief") == 0) { 
			if(Input.compare("dwarven") ==0 ) { CharacterRace = Input; }
			else if (Input.compare("elven") == 0) { CharacterRace = Input; }
			else if (Input.compare("gnome") == 0) { CharacterRace = Input; }
			else if (Input.compare("halfelven") == 0) { CharacterRace = Input; }
			else if (Input.compare("halfling") == 0) { CharacterRace = Input; }
			else if (Input.compare("halforc") == 0) { CharacterRace = Input; }
			else if (Input.compare("human") == 0) { CharacterRace = Input; }
			else {
				Correct = false;
				cout << "Please enter a valid race." << endl << endl;  
			}
		}
		else if(CharacterClass.compare("assassin") == 0) {
			if(Input.compare("dwarven") ==0 ) { CharacterRace = Input; }
			else if (Input.compare("elven") == 0) { CharacterRace = Input; }
			else if (Input.compare("gnome") == 0) { CharacterRace = Input; }
			else if (Input.compare("halfelven") == 0) { CharacterRace = Input; }
			else if (Input.compare("halforc") == 0) { CharacterRace = Input; }
			else if (Input.compare("human") == 0) { CharacterRace = Input; }
			else {
				Correct = false;
				cout << "Please enter a valid race." << endl << endl; 
			}
		}
		else if(CharacterClass.compare("monk") == 0)  {
			if (Input.compare("human") == 0) { CharacterRace = Input;}
			else {
				Correct = false;
				cout << "Please enter a valid race." << endl << endl; 
			}
		}
	}	
}

void Character::SetCharacterAlignment()
{
	UserInput UserInput;
	
	bool Correct = false;
	
	string Input = "";
	string temp1 = "";
	string temp2 = "";
	
	size_t found;
	
	while (Correct == false) {
		while (Correct == false) {
			Correct = false;
			
			cout << endl << "Enter your desired alignment. if it is not allowed for the class you chose" << endl
			     << "the program will let you know. the format for entering alignment" << endl
			     << "is lawful/chaotic/neutral good/evil/neutral" << endl;
		
			Input = UserInput.GetString();
			Correct = UserInput.ValidateInput(Input);
			
			for (int i = 0; i < Input.size(); i++) { Input[i] = tolower (Input[i]); }
		
			found = Input.find(' ');
		
			if (found != string::npos){
				temp1.append(Input,0,found);
				found++;
				temp2.append(Input,found,Input.size());
			}
			if (temp1 == "lawful" || temp1 == "chaotic" || temp1 == "neutral"){ Correct == true; }
			else {
				cout << "your lawful/chaotic choice was incompatible please try again" << endl;
				Correct = false;
			}
			if (temp2 == "good" || temp2 == "evil" || temp2 == "neutral"){
				Correct = true;
			}
			else {
				cout << "your good/evil choice was incompatible please try again" << endl;
				Correct = false;
			}
		}
		cout << "it made it out alright" << temp1 << temp2 << endl;
		if (CharacterClass.compare("cleric") == 0){
			if (temp1 == "neutral" && temp2 == "neutral") {
				Correct = false;
				cout <<"wrong try again" << endl;
			}
		}
		else if (CharacterClass.compare("druid") == 0) {
			if (temp1 != "neutral" || temp2 != "neutral") {
				Correct = false;
				cout << "wrong try again" << endl;
			}
		}
		else if (CharacterClass.compare("fighter") == 0){
		
		}
		else if (CharacterClass.compare("paladin") == 0){
		
		}
		else if (CharacterClass.compare("ranger") == 0){
		
		}
		else if (CharacterClass.compare("magicuser") == 0){
		
		}
		else if (CharacterClass.compare("illusionist") == 0){
		
		}
		else if (CharacterClass.compare("thief") == 0){
		
		}
		else if (CharacterClass.compare("assassin") == 0){
		
		}
		else if (CharacterClass.compare("monk") == 0){
		
		}
	}
}