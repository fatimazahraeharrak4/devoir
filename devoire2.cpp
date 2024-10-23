#include <iostream>

using namespace std ;
class voiture {
	public:
	std::string marque;
    std::string modele;
	int annee ;
	float kilometrage;
	float vitesse;
	voiture():marque (),modele(),annee(),kilometrage(00),vitesse(0)
	{}
	voiture (std::string ma,std::string mo,int an ,float ki,float vi)
	{
	marque =ma;
	modele=mo;
	annee=ki;
	kilometrage=ki;
	vitesse=vi;
	}
	double accelerer(float valeur){
		vitesse+=valeur;
		cout<<"\n" ;
		return vitesse;
	}
	double freiner(float valeur1){
		if(valeur1>0){
			vitesse-=valeur1;
		} 
		else 
		  vitesse=0 ;
		return vitesse ;
	}
	void afficherinfo(){
		cout <<"\t" <<"marque "<<marque <<"\t"<< "modele " <<modele <<"\n \t" <<"annee " << annee <<"\t" <<"kilometrage "<<kilometrage<<"\n \t" <<"vitesse "<<vitesse <<"\n" ;
	}
	 double avancer (float distance ){
		kilometrage+=distance;
	return kilometrage ;
	}
	~voiture (){
		cout <<"\n"<<"la voiture est detruite";
	}
};
int main() {
   voiture v1 ;
   v1 .afficherinfo();
	cout <<v1.accelerer(5);
	cout <<"\n"<<v1.freiner(5);
	voiture v2("AUDI" ,"A8",2024,50,100) ;
	v2 .afficherinfo();
	cout <<v2.accelerer(10);
	cout <<"\n"<<v2.freiner(10);
	return 0;
}
