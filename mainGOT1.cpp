// Programmer: Giovanni Vecchione
// Program 1 : GOT Array and Vectors
// Course: ITSE 2331 - Adv C++
// Date:1/19/23

//Incomplete Did not have enough time:
//Character 2D array works
//Kingdom vecotrs do not work

#include "includeHeader1.h"

void createCharacter();

//void createKingdom();

int main() {
	string createCharacterTest;
	string createKingdomTest;

	cout << "Character & Dragon data entry:" << endl;
	cout << "Would you like to enter a character?(y/n)" << endl;
	getline(cin, createCharacterTest);

	if (createCharacterTest == "y")
	{
		createCharacter();

	}
	
	/*
	
	cout << "Kingdom & Size data entry:" << endl;
	cout << "Would you like to enter a kingdom? (y/n)" << endl;
	getline(cin, createKingdomTest);

	if (createKingdomTest == "y")
	{
		createKingdom();
	}
	
	*/
	
	
	return 0;
}

void createCharacter() {

	string createCharacterAgain = "y";		//Determines if user wants to create character
	string anEntry;							//Input from user
	string numberOfDragons;					//Input number of dragons from user
	int numOfDragonsInteger;				//Converts string to int version	
	string dragonName;						//Holds dragon name input from user
	string characterName;					//Holds Character name input from user
	int numberOfCharacters = 0;				//Holds number of character names
	const int maxSizeOfArray = 10;			//Max Size of the Array

	const unsigned int dragonsNames = maxSizeOfArray;
	const unsigned int characterNames = maxSizeOfArray;
	array < array < string, dragonsNames>, characterNames> GOT2DArray{};



	//Find a early exit on the create characters

	if (createCharacterAgain == "y") {

		while (numberOfCharacters < maxSizeOfArray && createCharacterAgain == "y")
		{

			cout << "Enter the character name: " << endl;
			getline(cin, characterName);

			GOT2DArray[numberOfCharacters][0] = characterName;

			cout << "How many dragons would you like to enter for the character?" << endl;
			getline(cin, numberOfDragons);

			numOfDragonsInteger = stoi(numberOfDragons);


			for (int i = 0; i < numOfDragonsInteger; i++)
			{

				cout << "Enter name of Dragon " << i << ":" << endl;

				getline(cin, dragonName);

				GOT2DArray[numberOfCharacters][i] = dragonName;

			}

			numberOfCharacters++;

			cout << "Would you like to create another character?" << endl;
			getline(cin, createCharacterAgain);


		}

	}

	//Displays the 2D Array
	cout << "Printing 2D Array:" << endl << endl;

	int cols = sizeof(GOT2DArray[0]) / sizeof(GOT2DArray[0][0]);

	for (int i = 0; i < numberOfCharacters; i++)
	{

		for (int j = 0; j < cols; j++ )
		{
			cout << GOT2DArray[i][j] << endl;
		}
	}


}



//Incomplete - didnt have enough time
//Had issues inputing values into the vecotrs

/*
* 
* void createKingdom() {
	string anEntry;							//Input from user
	string numberOfKingdomsStr;
	int numberOfKingdomsInt = 0;				//converts to int 
	int numberOfArmiesInt = 0;

	string kingdomName;						//Holds kingdom name input from user
	string sizeOfArmy;

	bool correctAmount = false;
	vector<string> kingdomName;
	vector<string> kingdomArmy;


	while (correctAmount = false) {
		cout << "How many kingdoms would you like to create? (must be 7 or greater)" << endl;
		getline(cin, numberOfKingdomsStr);

		numberOfKingdomsInt = stoi(numberOfKingdomsStr);
		numberOfArmiesInt = numberOfKingdomsInt;

		if (numberOfKingdomsInt < 7) {
			cout << "Incorrect number of kingdoms, must be 7 or greater" << endl;
			correctAmount = false;
		}

		else {
			correctAmount = true;
		}

	}


	//ISSUE AT THIS PART
	for(int i = 0; i < numberOfKingdomsInt; i++)
	{
		cout << "Enter kingdom " << i + 1 << " name: " << endl;
		cin >> anEntry;

		kingdomName.push_back(anEntry);

		cout << "What is the size of the army?" << endl;
		cin >> anEntry;

		kingdomArmy.push_back(anEntry);
		
	}
}
*/
