#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
	int opcion;
	cout << "Encryptor and decryptor for rot13, what do you want to do?\n\n1: Encrypt\n2: Decrypt >> ";
	do {
		cin>>opcion;
		if (opcion!=1 && opcion!=2) {
			cout << "Error, try again";
			opcion=0;
		} 
	} while (opcion!=1 && opcion!=2);
	
	cin.ignore(); 
	
	if (opcion==1) {
		string text1, cifrado;
		cout<<"\nWrite the text you want to encrypt >> ";
		getline(cin, text1);
		for (int i=0; i<text1.length(); i++) {
			switch (text1[i]) {
				case 'A': cifrado+='N'; break; case 'a': cifrado+='n'; break;
				case 'B': cifrado+='O'; break; case 'b': cifrado+='o'; break;
				case 'C': cifrado+='P'; break; case 'c': cifrado+='p'; break;
				case 'D': cifrado+='Q'; break; case 'd': cifrado+='q'; break;
				case 'E': cifrado+='R'; break; case 'e': cifrado+='r'; break;
				case 'F': cifrado+='S'; break; case 'f': cifrado+='s'; break;
				case 'G': cifrado+='T'; break; case 'g': cifrado+='t'; break;
				case 'H': cifrado+='U'; break; case 'h': cifrado+='u'; break;
				case 'I': cifrado+='V'; break; case 'i': cifrado+='v'; break;
				case 'J': cifrado+='W'; break; case 'j': cifrado+='w'; break;
				case 'K': cifrado+='X'; break; case 'k': cifrado+='x'; break;
				case 'L': cifrado+='Y'; break; case 'l': cifrado+='y'; break;
				case 'M': cifrado+='Z'; break; case 'm': cifrado+='z'; break;
				case 'N': cifrado+='A'; break; case 'n': cifrado+='a'; break;
				case 'O': cifrado+='B'; break; case 'o': cifrado+='b'; break;
				case 'P': cifrado+='C'; break; case 'p': cifrado+='c'; break;
				case 'Q': cifrado+='D'; break; case 'q': cifrado+='d'; break;
				case 'R': cifrado+='E'; break; case 'r': cifrado+='e'; break;
				case 'S': cifrado+='F'; break; case 's': cifrado+='f'; break;
				case 'T': cifrado+='G'; break; case 't': cifrado+='g'; break;
				case 'U': cifrado+='H'; break; case 'u': cifrado+='h'; break;
				case 'V': cifrado+='I'; break; case 'v': cifrado+='i'; break;
				case 'W': cifrado+='J'; break; case 'w': cifrado+='j'; break;
				case 'X': cifrado+='K'; break; case 'x': cifrado+='k'; break;
				case 'Y': cifrado+='L'; break; case 'y': cifrado+='l'; break;
				case 'Z': cifrado+='M'; break; case 'z': cifrado+='m'; break;
				default: cifrado+=text1[i]; break;
			}
			
		}
		cout << "Original text: "<<text1<<endl;
		cout << "Ciphertext: "<<cifrado<<endl;
	} else if (opcion==2) {
		string text2, descifrado;
		cout << "Escribe el texto que quieras decifrar: ";
		getline(cin, text2);
		for (int i=0; i<text2.length(); i++) {
			switch (text2[i]) {
				case 'A': descifrado+='N'; break; case 'a': descifrado+='n'; break;
				case 'B': descifrado+='O'; break; case 'b': descifrado+='o'; break;
				case 'C': descifrado+='P'; break; case 'c': descifrado+='p'; break;
				case 'D': descifrado+='Q'; break; case 'd': descifrado+='q'; break;
				case 'E': descifrado+='R'; break; case 'e': descifrado+='r'; break;
				case 'F': descifrado+='S'; break; case 'f': descifrado+='s'; break;
				case 'G': descifrado+='T'; break; case 'g': descifrado+='t'; break;
				case 'H': descifrado+='U'; break; case 'h': descifrado+='u'; break;
				case 'I': descifrado+='V'; break; case 'i': descifrado+='v'; break;
				case 'J': descifrado+='W'; break; case 'j': descifrado+='w'; break;
				case 'K': descifrado+='X'; break; case 'k': descifrado+='x'; break;
				case 'L': descifrado+='Y'; break; case 'l': descifrado+='y'; break;
				case 'M': descifrado+='Z'; break; case 'm': descifrado+='z'; break;
				case 'N': descifrado+='A'; break; case 'n': descifrado+='a'; break;
				case 'O': descifrado+='B'; break; case 'o': descifrado+='b'; break;
				case 'P': descifrado+='C'; break; case 'p': descifrado+='c'; break;
				case 'Q': descifrado+='D'; break; case 'q': descifrado+='d'; break;
				case 'R': descifrado+='E'; break; case 'r': descifrado+='e'; break;
				case 'S': descifrado+='F'; break; case 't': descifrado+='g'; break;
				case 'U': descifrado+='H'; break; case 'u': descifrado+='h'; break;
				case 'V': descifrado+='I'; break; case 'v': descifrado+='i'; break;
				case 'W': descifrado+='J'; break; case 'w': descifrado+='j'; break;
				case 'X': descifrado+='K'; break; case 'x': descifrado+='k'; break;
				case 'Y': descifrado+='L'; break; case 'y': descifrado+='l'; break;
				case 'Z': descifrado+='M'; break; case 'z': descifrado+='m'; break;
				default: descifrado+=text2[i]; break;
			}
		}
		cout << "Ciphertext: "<<text2<<endl;
		cout << "Deciphered text: "<<descifrado<<endl;
	}
	
	return 0;
}
