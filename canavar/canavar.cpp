#include<iostream>
#include<string.h>
#include<ctime>
#include<stdlib.h>

using namespace std;

enum CanavarListesi{
	Dragon,
	Goblin,
	Ogre, 
	Orc, 
	Skeleton, 
	Troll, 
	Vampire, 
	Zombie
};

class Canavar{
	//private olarak tanýmlý zaten!!
	int can;
	string isim;
	CanavarListesi tur{};
	
	
	public:
		void uretec(string canavarIsim){
			srand(time(0));
			tur = static_cast<CanavarListesi>(rand()%8);
			//int tur;
			can=rand()%100 + 5;
			tur= static_cast <CanavarListesi>(tur);
			isim=canavarIsim;
		}
		
		void yazdir(){
			switch(tur)
			{
				case Ogre:
				    cout<<"Canavarin turu: Ogre(Dev)"<<endl;
					break;
				
				case Goblin:
					cout<<"Canavarin turu: Goblin"<<endl;
					break;
				case Orc:
					cout<<"Canavarin turu: Orc(Ork)"<<endl;
					break;
				case Skeleton:
					cout<<"Canavarin turu: Skeleton(Iskelet)"<<endl;
					break;
				case Troll:
					cout<<"Canavarin turu: Troll(Trol)"<<endl;
					break;
				case Vampire:
					cout<<"Canavarin turu: Vampire(Vampir)"<<endl;
					break;
				case Zombie:
					cout<<"Canavarin turu: Zombie(Zombi)"<<endl;
					break;
				default:
					cout<<"Boyle bir canavar turu bulunmamaktadir!"<<endl;
					break;						
			}
			
			cout<<"Canavarin ismi:"<<isim<<" ve cani "<<can<<" olarak verilmistir."<<endl;
		}
};

int main(){
	string canavarIsim;
	
	cout<<"Rastgele canavar ureticisine Hosgeldiniz!"<<endl;
	cout<<"Lutfen Canavariniza bir isim veriniz:";
	cin>>canavarIsim;
	cout<<endl;
	
	Canavar canavar;
	canavar.uretec(canavarIsim);
	canavar.yazdir();
	
	cout<<"Bekir Burak SAKA//221030910008"<<endl;
	
	return 0;
}
