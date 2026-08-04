//57908
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

//ERWTHMA1
struct Cook{
	char name [50];
	char spec_cuisine[50];
	unsigned short int age;
	float score;
	bool chef;
};

struct Trial{
	char trial_name[50];
	char trial_cuisine[50];
	int dif_level;
	int reward;	
};

//ERWTHMA2
void show_level(Cook cook){
	if(cook.age < 25 && cook.chef){
		cout << "Young Chef" << endl;
	}
	else if(cook.age > 25 && cook.chef){
		cout << "Old Chef" << endl;
	}
}

//ERWTHMA3
void predict_winner(Cook cook1, Cook cook2, Trial trial){
	
	int i, compare1 = 1, compare2 = 1, compare3 = 1;
	//cout<<i<<endl<<compare1<<endl<<compare2<<endl<<compare3<<endl;
	for (i=0; i<50 && compare1 && cook1.spec_cuisine[i]!=0 && trial.trial_cuisine[i]!=0; i++){
		if (cook1.spec_cuisine[i]!=trial.trial_cuisine[i]){
			compare1=0;
		}
	}
	
	for (i=0; i<50 && compare2  && cook2.spec_cuisine[i]!=0 && trial.trial_cuisine[i]!=0; i++){
		if (cook2.spec_cuisine[i]!=trial.trial_cuisine[i]){
			compare2=0;
		}
	}
	
	for (i=0; i<50 && compare3 && cook1.spec_cuisine[i]!=0 && cook2.spec_cuisine[i]!=0; i++){
		if (cook1.spec_cuisine[i]!=cook2.spec_cuisine[i]){
			compare3=0;
		}
	}
	//cout <<i<<endl<<compare1<<endl<<compare2<<endl<<compare3<<endl;	
	if (compare1 && !compare2){
		cout << "First Cook has an advantage" << endl;
	}
	else if (compare2 && !compare1){
		cout << "Second Cook has an advantage" << endl;
	}
	else if (compare3){
		cout << "Same Cuisine" << endl;
		if (cook1.score>cook2.score){
			cout << "First Cook has greater Score so far, so he might win" << endl;
		}
		else if(cook1.score<cook2.score){
			cout << "Second Cook has greater Score so far, so he might win" << endl;
		}
		else if(cook1.score=cook2.score){
			cout << "Equal Scores" << endl;
		}
	}	
}


//ERWTHMA4
int modify_winner(Cook cook, Trial trial){
	if (trial.dif_level<=3){
		cook.score+=(trial.dif_level)*(trial.reward);
	}
	else{
		cook.score+=trial.reward;
	}
	return cook.score;
}
