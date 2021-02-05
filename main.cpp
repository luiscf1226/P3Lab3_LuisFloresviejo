#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
string x4(string cad){
	string fin="",fin2="";
	for(int i=0;i<cad.length();i++){
		fin+=cad[i];
		for(int j=1;j<cad.length();j++){
			if(fin[j]==cad[i]){
				char let=cad.at(i);
		int a1=0,b1=0,c1=0,d1=0,e1=0,f1=0,g1=0,h1=0,i1=0,j1=0,k1=0,l1=0,m1=0,n1=0,o1=0,p1=0,q1=0,r1=0,s1=0,t1=0,u1=0,v1=0,w1=0,x1=0,y1=0,z1=0;
		switch(let) {
			case 'a': {
				a1++;
				if(a1>0)
				fin2+='a';
				break;
			}
			case 'b': {
				b1++;
				if(b1>0)
				fin2+='b';
				break;
			}
			case 'c': {
				c1++;
				if(c1>0)
				fin2+='d';
				break;
			}
			case 'd': {
				d1++;
				if(d1>0)
				fin2+='d';
				break;
			}
			case 'e': {
				e1++;
				if(e1>0)
				fin2+='e';
				break;
			}
			case 'f': {
				f1++;
				if(f1>0)
				fin2+='f';
				break;
			}
			case 'g': {
				g1++;
				if(g1>0)
				fin2+='g';
				break;
			}
			case 'h': {
				h1++;
				if(h1>0)
				fin2+='h';
				break;
			}
			case 'i': {
				i1++;
				if(i1>0)
				fin2+='i';
				break;
			}
			case 'j': {
				j1++;
				if(j1>0)
				fin2+='j';
				break;
			}
			case 'k': {
				k1++;
				if(k1>0)
				fin2+='k';
				break;
			}
			case 'l': {
				l1++;
				if(l1>0)
				fin2+='l';
				break;
			}
			case 'm': {
				m1++;
				if(m1>0)
				fin2+='m';
				break;
			}
			case 'n': {
				n1++;
				if(n1>0)
				fin2+='n';
				break;
			}
			case 'o': {
				o1++;
				if(o1>0)
				fin2+='o';
				break;
			}
			case 'p': {
				p1++;
				if(p1>0)
				fin2+='p';
				break;
			}
			case 'q': {
				q1++;
				if(q1>0)
				fin2+='1';
				break;
			}
			case 'r': {
				r1++;
				if(r1>0)
				fin2+='r';
				break;
			}
			case 's': {
				s1++;
				if(s1>0)
				fin2+='s';
				break;
			}
			case 't': {
				t1++;
				if(t1>0)
				fin2+='t';
				break;
			}
			case 'u': {
				u1++;
				if(u1>0)
				fin2+='ua';
				break;
			}
			case 'w': {
				w1++;
				if(w1>0)
				fin2+='w';
				break;
			}
			case 'x': {
				x1++;
				if(x1>0)
				fin2+='x';
				break;
			}
			case 'y': {
				y1++;
				if(y1>0)
				fin2+='y';
				break;
			}
			case 'z': {
				z1++;
				if(z1>0)
				fin2+='z';
				break;
			}
		}

			}
		}
		
	}
	return fin2;
}
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
		if(main==4){
			string cad;
			cout<<"Ingrese la cadena: ";
			cin>>cad;
			cout<<x4(cad)<<endl;
		}
	}

	return 0;
}
