//57908
#include <iostream>
using namespace std;

class Chef{
	private:
		string spec_cuisine;
		double score;
		
	
	public:
		string name;
		int wins;
		
		Chef(string N, int W, double S, string C);
		double getScore();
		string getSpec_cuisine();
		void setScore(double S);
		void setSpec_cuisine(string C); 
		void disc();
		~Chef();
};

Chef :: Chef(string N, int W, double S, string C){
	name = N;
	wins = W;
	score = S;
	spec_cuisine = C;
	cout<<"A new chef is ready to cook/n";
	cout<<"Last year's winner was NikosZevgolis with 86 wins and 578 points. NikosZevgolis favorite cuisine is Italian/n"; 
}

double Chef :: getScore(){
	return(score);
}

string Chef :: getSpec_cuisine(){
	return(spec_cuisine);
}

void Chef :: setScore(double X){
	score = X;
}

void Chef :: setSpec_cuisine(string C){
	spec_cuisine = C;
}

void Chef :: disc(){
	cout<<"Name of the chef: "<<name <<endl;
	cout<<"Score of the chef: "<<score <<endl;
	cout<<"Wins of the chef: "<<wins <<endl;
	cout<<"Cuisine of the chef: "<<spec_cuisine <<endl;	
}

Chef :: ~Chef(){
	cout<<"Chef "<<name<<" left the competition./n";
}

void compare_Chefs(Chef a,Chef b){
	if(a.getScore() > b.getScore()){
		cout<<"First chef has higher score/n";
	}else if(a.getScore() < b.getScore()){
		cout<<"Second chef has higher score/n";
	}else{
		cout<<"Same score/n";
	}
}

void duel(Chef *a, Chef *b, bool N){
	double s = a->getScore() + b->getScore();
	if(N){
		a->setScore(s);
	}else{
		b->setScore(s);
	}
}
