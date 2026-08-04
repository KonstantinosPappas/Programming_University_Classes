//57908
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Chef{

    private :
    string name;
    int Score;

    public:

        //Chef's Constructor
        Chef(string chef_name, int chef_score) {
            setName(chef_name);
            setScore(chef_score);

            cout<<"Name: "<<this->getName()<< " Score: "<<this->getScore()<<endl;
        }

        //Chef's Setters
        void setName(string chef_name){this->name = chef_name;}

        void setScore(int chef_score){this->Score = chef_score;}

        //Chef's Getters
        string getName() {return name;}

        int getScore(){return Score;}
    };

class Team{

    private:
    string team_name;
    vector <string> chefs;
    vector <int> chef_scores;

    public:
    string leader;

    //Team's Constructor
    Team(string name, string leader_name){
        this->team_name=name;
        this->leader=leader_name;
    }

    //Team's Setters
    void set_all_names(vector <string> names){
        for (int i = 0; i < names.size(); i++){
            chefs.push_back(names.at(i));
        }
    }

    vector <int> set_all_scores(vector <int> scores){
        for (int i = 0; i < scores.size(); i++){
            chef_scores.push_back(scores.at(i));
        }
    }

    //Team's Getters
    vector <string> get_all_names(vector <string> chefs){return chefs;}
    vector <int> get_all_scores(vector <int> chef_scores){return chef_scores;}


    void add_new_chef(string name){chefs.push_back(name);}

    void add_new_score(int score){chef_scores.push_back(score);}

    void Team_Score(Team team1, Team team2){
        int sum1=0; int sum2=0;

        for (int i = 0; i < team1.chef_scores.size(); i++){
            sum1=+team1.chef_scores.at(i);
        }

        for (int i = 0; i < team2.chef_scores.size(); i++){
            sum2=+team2.chef_scores.at(i);
        }
        if (sum1>sum2){
            cout<<"First Team will Win, Total Score: "<< sum1<<endl;
        }
        else if(sum1<sum2){
            cout<<"Second Team will Win, Total Score "<< sum2<<endl;
        }
        else{
            cout<<"Equal Teams, Total Score: "<< sum1+sum2<<endl;
        }
    }
    friend void members(Team team, Chef chef);
};

void members(Team team, Chef chef){
    if (find(chefs.begin(), chefs.end(), chef) != chefs.end()) {
        cout << chef.getName() << "Already a member" << endl;
    }else{
        chefs.push_back(chef.getName());
        cout<<chef.getName() << "Added as a Member to Team: "<< team_name<<endl;
    }
}
