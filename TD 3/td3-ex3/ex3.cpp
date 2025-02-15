#include<iostream>
#include<string.h>
using namespace std;
class voiture
{
	private:
		string couleur,marque;
	public:
	voiture(){cout<<"je suis le constructeur de la classe voiture"<<endl;};	
	~voiture(){cout<<"je suis le destructeur de la classe voiture"<<endl;};
};
int main(){
	//etape 1
	voiture *tab =new voiture[2];
	cout <<"*********"<<endl;
	/*etape 2
	delete [] tab;
	*/
	return 0;
}
	