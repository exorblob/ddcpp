#include "ddcpp.h"

void Character::GenerateNew()
{
	Exit Exit;
	UserInput UserInput;
	
	bool Continue = true;
	bool Correct = false;
	
	int part = 1;
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
				SetPlayerAdditionalInformtion();
				break;
			case 11:
				SetCharacterClass();
				break;
			case 12:
				SetCharacterRace();
			case 13:
				SetCharacterAlignment();
			case 14:
				SetCharacterAbilityScoresMain();	
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
	
	int Choice = 0;
	
	while (Correct == false) {
		while (Correct == false) {
			Correct = false;
			string Input = "";
			string temp1 = "";	
			string temp2 = "";
			
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

		if (CharacterClass.compare("cleric") == 0){
			if (temp1 == "neutral" && temp2 == "neutral") {
				Correct = true;
				cout <<"Clerics are not really supposed to be true neutral." << endl;
			}
		}
		else if (CharacterClass.compare("druid") == 0) {
			if (temp1 != "neutral" || temp2 != "neutral") {
				Correct = true;
				cout << "Druids are really supposed to be true neutral" << endl;
			}
		}
		else if (CharacterClass.compare("fighter") == 0){
			
		}
		else if (CharacterClass.compare("paladin") == 0){
			if (temp1 == "chaotic") {
				Correct == true;
				cout << "Paladins are really supposed to be lawful" << endl;
			}
		}
		else if (CharacterClass.compare("ranger") == 0){
			if (temp2 == "evil") {
				Correct = true;
				cout << "Rangers should really be good characters" << endl;
			}
		}
		else if (CharacterClass.compare("magicuser") == 0){
		
		}
		else if (CharacterClass.compare("illusionist") == 0){
		
		}
		else if (CharacterClass.compare("thief") == 0){
			if (temp1 == "lawful" && temp2 == "good"){
				Correct = true;
				cout << "Thiefs really shouldn't be lawfull good" << endl;}
		}
		else if (CharacterClass.compare("assassin") == 0){
			if (temp2 != "evil") {
				Correct = true;
				cout << "Assassins really should be evil characters" << endl;
			}
		}
		else if (CharacterClass.compare("monk") == 0){
			if (temp1 == "chaotic") {
				Correct = true;
				cout << "Monks really should be lawfull characters" << endl;
			}
		}
		
		while (Correct == true) {
			cout << "Would you like to change your alignment choice?" << endl;
			cout << "Yes = 1 No = 2" << endl;
			
			Choice = UserInput.GetInt(2);
			Correct = UserInput.ValidateInput(Choice);
						
			if (Correct == true){
				Correct = false;
			}
			else {
				Correct = true;
			}
		}
		
		if (Choice == 1){
			Correct = false;
		}
		else if (Choice == 2){
			Correct = true;
		}
	}
}

void Character::SetCharacterAbilityScoresMain()
{
	UserInput UserInput;
	
	bool Correct = false;
	
	int Choice = 0;
	
	while (Correct == false){
		Choice = 0;
	
		cout << "there are four differnet ways to generate ability scores." << endl
			  << "Ask your DM wich He/She want s you to use when generating your character." << endl
			  << endl << endl;
		cout << "In method 1 you roll 4d6 and keep the highest 3 values." << endl
		 	  << "you do this six times to generate your ability scores." << endl
		 	  << "you may then arrange them as you would like." << endl << endl;
		cout << "In method 2 you roll 3d6 twelve times keeping" << endl
		     << "the best six results. you may then arrange them" << endl
		     << "as you would like." << endl << endl;
		cout << "In method 3 you roll 3d6 six times for each ability score." << endl
			  << "keeping the best result for each ability" << endl << endl;
		cout << "In method 4 you roll 3d6 one for each ability score." << endl
			  << "you do this enough times to generate twelve characters." << endl 
			  << "you may then pick the best one." << endl << endl;
	
		cout << "wich method would you like to use? type the number" << endl
			  << "corresponding to the method you re DM has decided to use" << endl;
	
		Choice = UserInput.GetInt(4);
		Correct = UserInput.ValidateInput(Choice);
	}
	
	switch (Choice)
	{
		case 1:
			SetCharacterAbilityScoresMethodOne();
			break;
		case 2:
			SetCharacterAbilityScoresMethodTwo();
			break;
		case 3:
			SetCharacterAbilityScoresMethodThree();
			break;
		case 4:
			SetCharacterAbilityScoresMethodFour();
			break;
		default:
			break;
	}
}

void Character::SetCharacterAbilityScoresMethodOne()
{
	
	int scores [6];
	cout << "Method one entered" << endl;
	
	cout << "the program will now roll the dice to generate your ability scores." << endl;

}
		
void Character::SetCharacterAbilityScoresMethodTwo()
{
	cout << "Mehtod two entered" << endl;
}
		
void Character::SetCharacterAbilityScoresMethodThree()
{
	cout << "Method three entered" << endl;
}
		
void Character::SetCharacterAbilityScoresMethodFour()
{
	cout << "Method four entered" << endl;
}
