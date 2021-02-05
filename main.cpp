#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void printvector(vector <char> nuevo){
	  for(int k=0;k<nuevo.size();k++){
        	cout<<"["<<nuevo[k]<<"]";
		}
		cout<<endl;
}
vector <char> ex1 (string palabra){
        vector <char> nuevo;
        string espejo;
        char verd = 's';
        for(int i = 0; i < palabra.length();i++){
            for(int j = 1; j < espejo.length(); j++ ){
                if(palabra.at(i)==espejo.at(j)){
                    verd='n';
                }
            }
            if(verd == 's'){
                espejo += palabra.at(i);
                nuevo.push_back(palabra.at(i));
            }
            verd=='s';
        }
        return nuevo;
    }
void ex2(string palabra, vector <char> vect){
	int num=0;
	int num2=vect.size();
	cout<<num2<<endl;
	int array[num2];
	string remp=" ";
	int cont=0;
	//char array =[num2];

	for(int i=0;i<palabra.length();i++){
		for(int j=0;j<vect.size();j++){
			if(palabra.at(i)==vect[j]){
				cont++;
				cout<<"si"<<endl;
				cout<<cont<<endl;
				int c=0;
				array[0]+=cont;
				c++;
			}
		}
	}
	cout<<array<<endl;
	//return punt;
}  
int main (){
	int main=0;
	while(main!=5) {
		cout<<"1. Ejercisio 1 "<<endl<<"2. Ejercisio 2"<<endl<<"3. Ejercisio 3"<<endl<<"4. Ejercisio 4"<<endl<<"5.Salir"<<endl<<"Escoja: ";
		cin>>main;
		if(main==1){
			vector <char> imprimir;
			string palabra;
			cout<<"Ingrese String: ";
			cin>> palabra;
			printvector(ex1(palabra));
		}
		if(main==2){
			string word;
			string word2;
			vector <char> vect;
			cout<<"Ingrese String: ";
			cin>> word;
			cout<<"Porfavor ingresar el vector en una sola linea: "<<endl;
			cout<<"Ingrese Vector: [ ] :";
			cin>>word2;
			for(int i=0;i<word2.length();i++){
				vect.push_back(word2.at(i));
			}
			//printvector(vect);
			ex2(word,vect);
		}
		if(main==3){
			
		}
	}

	return 0;
}
