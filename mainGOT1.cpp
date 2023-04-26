#include "includeHeader1.h"

void printArr(std::string arr[10][10]);



int main() {
	//part 1:
	bool exitLoop = false;
	std::string inputVal;
	std:: string characterArr[10][10];
	int count = 0;
	int count2 = 0;
	
	std::cout << "Character & Dragon Data Entry:\n";

	do {
		
		std::cout << "Would you like to enter a character? (y/n)\n";
		std::getline(std::cin, inputVal);
		
		if (inputVal == "y") {

			std::cout << "Enter Character Name: \n";
			std::getline(std::cin, inputVal);
			characterArr[count][0] = inputVal;

			std::cout << "How many dragons would you like to enter for the character?\n";
			std::getline(std::cin, inputVal);

			count2 = stoi(inputVal);

			for (int i = 0; i < count2; i++) {
				std::cout << "Enter the name of the dragon " << i + 1<< ":\n";
				std::getline(std::cin, inputVal);

				characterArr[count][i + 1] = inputVal;
			}
		}

		std::cout << "Would you like to enter another character?(y/n)\n";
		std::getline(std::cin, inputVal);

		if (inputVal == "y") {
			exitLoop = false;
		}

		else {
			std::cout << "Exiting Character & Dragon Array...\n";
			printArr(characterArr);
			exitLoop = true;
		}

		count++;

	} while (exitLoop != true);


	bool exitLoop2 = false;

	


	return 0;
}


void printArr(std::string arr[10][10]) {
	std::cout << "Printing Character & Dragons Array...\n";

	for (int i = 0; i < 10; i++){
		std::cout << "Name of Character: ";
		std::cout << arr[i][0] << std::endl;
		
		for (int j = 1; j < 10; j++) {

			std::cout << "Name of Dragon " << j + 1 << ": ";

			if (!arr[i][j].empty()) {
				std::cout << arr[i][j] << std::endl;
			}

			else {
				std::cout << "NULL\n";
			}
			
		}

		std:: cout << std:: endl;
	}


}