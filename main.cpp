#include "57908.cpp"


int main(){
	Cook cook1;
	Cook cook2;
	Trial trial;
	
	strcpy (cook1.name,"Panos");
	strcpy (cook1.name,"Kostas");
	strcpy (cook1.spec_cuisine,"posibol");
	strcpy(cook2.spec_cuisine,"posibol");
	cook1.age=18;
	cook2.age=18;
	cook1.score = 10;
	cook2.score = 20;
	cook1.chef= true;
	cook2.chef= true;
	cook1.score = 10;
	cook2.score = 20;
	
	strcpy(trial.trial_name, "Ftiakste sushi");
	strcpy(trial.trial_cuisine, "Oxi");
	trial.dif_level = 2;
	trial.reward=5;
	
	show_level(cook1);
	show_level(cook2);
	predict_winner(cook1,cook2,trial);
	cook1.score = modify_winner (cook1,trial);
	cout<< cook1.score <<endl;
	predict_winner(cook1,cook2,trial);
	cook2.score = modify_winner (cook2,trial);
	cout<< cook2.score <<endl;
	predict_winner(cook1,cook2,trial);
	cout<< cook1.score << endl << cook2.score;
	
	//cout<<cook1.spec_cuisine<<endl<<cook2.spec_cuisine<<endl<<trial.trial_cuisine;
	return 0;
}


