// Gage Greenhouse
// ENSC 3213
//
// Error Codes:
//		-5, returned when adding a player that already exits.
//		-6, returned when trying to get the score for a player that doesnt exit


#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

class Player
{
	int rating;
	string firstname;
	string lastname;
	int wins;
	int losses;
	long date;
	int number;
	public:
	Player(int num, string first,string last,int rate,long time)
	{
		number=num;
		firstname=first;
		lastname=last;
		rating=rate;
		date=time;
		wins=0;
		losses=0;
	}
	Player(int num, string first,string last,int rate, int win,int loss,long time)
	{
		number=num;
		firstname=first;
		lastname=last;
		rating=rate;
		wins=win;
		losses=loss;
		date=time;
	}
	string getName()
	{
		return lastname+", "+firstname;
	}
	int getScore()
	{
		return rating;
	}
	void setRating(int score)
	{
		rating=score;
	}
	int getWins()
	{
		return wins;
	}
	void setWins(int win)
	{
		wins=win;
	}
	int getLosses()
	{
		return losses;
	}
	void setLosses(int loss)
	{
		losses=loss;
	}
	string toString()
	{
		string ret=to_string(number) + ", " + firstname + ", " + lastname + ", " + to_string(rating);
		return ret;
	}
	string toCSV()
	{
		string ret=to_string(number) + "," + firstname + "," + lastname + "," + to_string(rating);
	}
};
class ChessRate
{
	vector<Player> players;
	map<int,Player> references;
	int i=1;
	public:
	ChessRate(string file)
	{
		ifstream inFile;
		inFile.open(file);
		if(!inFile)
		{
			printf("Error: File Not Found\n");
			exit(1);
		}
		while(inFile>>x)
		{
			// I Need to split a string
			this.addPlayer(
		}
	}
	int addPlayer(string firstName,string lastName,int rating,long time)
	{
		// Add ME!!!
		return 0;
	}
	int addPlayer(string firstName,string lastName,long time)
	{
		// Add ME!
		return 0;
	}
	int addPlayer(string fistName,string lastName, int rating)
	{
		// ADD ME!!!
		return 0;
	}
	int addPlayer(string firstName,string lastName)
	{
		//ADD ME !!!
		return 0;
	}
	int getRating(string s)
	{
		return 0;

	}
	int getNumPlayers()
	{
		return 0;
	}
	int import(string file)
	{
		return 0;
	}
	int exportCSV(string file)
	{
		return 0;
	}
};
int main()
{
        return 0;
}
