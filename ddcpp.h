#include <iostream>
#include <sstream>
#include <string>
#include <cctype>

using namespace std;

class MainMenu
{
	public:
		int GetOption;
		int GetUserOption();
};

class Character
{
	private:
		string PlayerName;	
		string PlayerPhoneNumber;
		string PlayerEmail;
		string PlayerPhysicalAddress;
		string PlayerPostalAddress;
		int PlayerModeOfTransportaion;
		bool PlayerHasInternetAccess;
		string PlayerGender;
		string PlayerAdditionalInformation;
		string CharacterClass;
		string CharacterRace;
		
	public:
	
		void GenerateNew();		
		bool ContinueGeneration(int part);
		void WelcomeToCharacterGenerator();
		void Instructions();
		void SetPlayerName();
		void SetPlayerPhoneNumber();
		void SetPlayerEmail();
		void SetPlayerPhysicalAddress();
		void SetPlayerPostalAddress();
		void SetPlayerModeOfTransportation();
		void SetPlayerHasInternetAccess();
		void SetPlayerGender();
		void SetPlayerAdditionalInformtion();
		void SetCharacterClass();
		void SetCharacterRace();
		void SetCharacterAlignment();
};

class Exit
{
	public:
		bool Exiting();
};

class UserInput
{
	private:
		int ValidInt;
	
	public:
		string GetString ();
		
		int GetInt (int NumberOfChoices);
		int ValidateInt (string Input, int maxNumber);
		bool ValidateInput (int Input);
		bool ValidateInput (string Input);
};