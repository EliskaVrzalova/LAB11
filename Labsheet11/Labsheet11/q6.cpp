// name: eliska vrzalova
// login: c00301768
// date: 12/02/2024
// program description: Two arrays are initialized, both are passed as an argument with their size to the function findPlayerName().
// This function finds the first player thats matches the name entered in main() and return a string of the players name and their score.
// If there is not such a name, it should return a string that no player was found in the array

#include <iostream>
#include <string>

const int MAX_PLAYERS = 10; // global data
void initializeArrays(std::string t_nameArray[], int t_scoreArray[]);
std::string findPlayerName(std::string t_aName, std::string t_playerNames[], int t_scoresArray, int t_noOfPlayers);
std::string findPlayerScore(std::string t_aScore, std::string t_playerNames[], int t_scoresArray, int t_noOfPlayers);

int main6()
{
	std::string playerNames[MAX_PLAYERS]; // local array, names of players
	int playerScores[MAX_PLAYERS]; // local array, scores of players
	int noOfPlayers = 8; // the number of active players

	std::string aName = "Ki";
	int aScore = 40;
	std::string messageName = "";
	std::string messageScore = "";
	initializeArrays(playerNames, playerScores);
	messageName = findPlayerName(aName, playerNames, playerScores, noOfPlayers);
	std::cout << messageName << std::endl;
	messageScore = findPlayerScore(aScore, playerNames, playerScores, noOfPlayers);
	std::cout << messageScore << std::endl;

	system("Pause");
	return 0;
}

void initializeArrays(std::string t_nameArray[], int t_scoreArray[])
// Initialize the two arrays
{
	t_nameArray[0] = "David";
	t_nameArray[1] = "Jake";
	t_nameArray[2] = "Aoife";
	t_nameArray[3] = "Ki";
	t_nameArray[4] = "Joe";
	t_nameArray[5] = "Ray";
	t_nameArray[6] = "Dave";
	t_nameArray[7] = "Sue";

	t_scoreArray[0] = 75;
	t_scoreArray[1] = 65;
	t_scoreArray[2] = 25;
	t_scoreArray[3] = 35;
	t_scoreArray[4] = 40;
	t_scoreArray[5] = 80;
	t_scoreArray[6] = 55;
	t_scoreArray[7] = 65;
}

std::string findPlayerName(std::string t_aName, std::string t_playerNames[], int t_scoresArray, int t_noOfPlayers)
// The function should find the first player in the array which has the same name as aName. If there are more than one player with the same name in the array, it should only return details about the first player.
// The function should return a string stating what score that player has.
//  If no player is found with that name, the function should return a string “No player found with that name”.
{
	std::string message = "Player not found in the array";
	int count = 0;
	bool playerFound = false;
	for (; count < t_noOfPlayers; count++)
	{
		if (t_playerNames[count] == t_aName)
		{
			playerFound = true;
			break;
		} // end if
	} // end for
	if (playerFound == true)
	{
		message = "Player" + t_playerNames[count] + ", score: " + std::to_string(t_scoresArray[count]);
	}
	return message;
}

std::string findPlayerScore(std::string t_aScore, std::string t_playerNames[], int t_scoresArray, int t_noOfPlayers)
// The function then searches for the last occurrence of that particular score in the player scores array.
// If it finds it, it should return the name of the player with that score in the array. If it is not in the array the function should return the empty string. 
{
	std::string message = "";
	int count = 0;
	bool scoreFound = false;

	for (count = t_noOfPlayers - 1; count >= 0; count--)
	{
		if (t_scoresArray[count] == t_aScore)
		{
			scoreFound = true;
			break;
		} // end if
	} // end for
	if (scoreFound == true)
	{
		message = "The score of " + std::to_string(t_scoresArray[count]) + " is the core of player" + t_playerNames[count];
	}
	return message;
}
