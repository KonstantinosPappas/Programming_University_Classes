//57908
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Chef {
	
	string name;
	int score;
	
	public :
		Chef(string X,int Z);
		int getScore();
		string getName();
		void setScore(int Z);
		void setName(string X);
		
		~Chef();
};

Chef :: Chef(string X,int Z)
{
	name = X;
	score = Z;
	cout << "Name : " << X << "Score : " << Z <<endl;
}

class Team {
	
	string team_name;
	vector<string> chefs;
	vector<int> chef_scores
	
	public :
		string leader;
};

Team :: Team(string N,string L)
{
	team_name = N;
	leader = L;
}

