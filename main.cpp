#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int* ex3(int*point,int n){
	int array[n];
	int array2[n];
	for(int i=0;i<n;i++){
		array[i]=point[i];
		cout<<array[i]<<endl;
	}
	int mayor=0;
	for(int k=0;k<n;k++){
		if(array[k]>mayor){
			mayor=array[k];
		}else{
			mayor=mayor;
		}
		array2[k]=mayor;	
	}
	int array3[n];
	for(int j=0;j<n;j++){
		array2[j]=array3[j];
	}
	return array3;
	
	
}
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
int*  ex2(string palabra, vector <char> vect){
	
	int num=0;
	int num2=vect.size();
	int array[num2];
	string remp=" ";
	int cont=0;
	char letter;
	string acum="";
	//char array =[num2];
	for(int i=97;i<=122;i++){
		for(int k=0;k<palabra.length();k++){
		letter =palabra.at(k);
			if(i==(int)letter){
				acum+=letter;
			}
		}
	}

	//cout<<acum<<endl;
	for(int i=0;i<palabra.length();i++){
		for(int j=0;j<vect.size();j++){
			if(palabra.at(i)==acum[j]){
				cont++;	
			}
		}
	}
	for(int g=0;g<num2;g++){
		array[g]=cont;
	
	}
	int* point= array;
	return point;
	delete point;
	//cout<<cont<<endl;
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
		
			cout<<"["<<*ex2(word,vect)<<"]";
			//solo pude imprimir la cantidad de veces repoetida de todas
			cout<<endl;


		}
		if(main==3){
			int n;
			cout<<"Ingrese tamano arreglo deseado:";
			cin>>n;
			int *point;
			point = new int[n];
			for(int i=0;i<n;i++){
				cout<<" Ingrese numero para rellanar: ";
				cin>>point[i];
			}
			/*
			for(int j=0;j<n;j++){
				cout<<point[j]<<endl;
			}*/
			cout<<*ex3(point,n);
			delete[]point;
		}
	}

	return 0;
}
