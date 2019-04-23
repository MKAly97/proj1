//shifting the order of the alphabet based on th input argument

/*What else I need to do is:
1) modify the code to be in the file I/O form
2) add the substitution Cypher
3) Have teh deycription for both cyphers made
4) Have the programming running a window of menu options:
...A) a rotation Encryption with Key
...B) a rotation Decryption with Key
...C) a rotation Encryption without key
...D) a rotation Decryption without key
...E) a substitution Encryption
...F) a substitution Deycription.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ALPHABET_SIZE  26
#define MAXCHAR 1024
#define HIDDEN_KEY 32

//Types of cyphers:
int encrypt(int character, int shift);
int decrypt(int character, int shift);
//char substitute(char character [MAXCHAR]);//TODO
//int desubstitute(int character, int shift);//TODO

int main(void) {
	//Choosing the desired option of Cypher.
    printf ("Choose one of the following cypher options: \n");
    printf ("1)A Rotation Encryption Cypher with key.\n");
    printf ("2)A Rotation Decryption Cypher with key.\n");
    printf ("3)A Rotation Encryption Cypher without Key.\n");
    printf ("4)A Rotation Decrypthion Cypher without key.\n");
    printf ("5)A Substitution Encryption Cypher.\n");
    printf ("6)A Substitution Decryption Cypher.\n");

    int option;
    scanf ("%d", &option);
    if (option == 1) {
	//the rotation cypher with the key
	//type in the key or "shift" to make the rotation
	// then type in text to be cyphered.
    	int shift;
    	printf ("Assign a value for the Key: \n");
    	scanf ("%d", &shift);
    	//Making sure that the key is not Zero
    	if (shift == 0) {
    		printf ("You have entered a zero value for the Key\nTry Again\n");
    		return 0;
    	}
    	printf ("Type the text to cypher it:\n");
    	scanf ("\n");
	    int character = getchar();
	    while (character != EOF) {
	        int encrypted_character = encrypt(character, shift);
	        //printf ("Cyphered text:\n");
	        putchar(encrypted_character);
	        //printf ("\n");
	        character = getchar();
	    }
    } else if (option == 2) {
	//the reverse of the rotation cypher 
	//typing cyphered text to get its original.
		int shift = 0;
		printf ("Assign a value for the Key: \n");
		scanf ("%d", &shift);
    	if (shift == 0) {
			printf ("You have entered a zero value for the key\nTry Again\n");
			return 0;
		}
		printf ("Type text to be Decypghered:\n");
	    int character = getchar();
	    while (character != EOF) {
	        int decrypted_character = decrypt(character, shift);
	        //printf ("Cyphered text:\n");
	        putchar(decrypted_character);
	        character = getchar();
	    }
	} else if (option == 3) {
    	int shift = HIDDEN_KEY;
    	//printf ("assign the value of the shift: \n");
    	//scanf ("%d", &shift);
    	printf ("Type the text to cypher it:\n");
	    int character = getchar();
	    while (character != EOF) {
	        int encrypted_character = encrypt(character, shift);
	       // printf ("Cyphered text:\n");
	        putchar(encrypted_character);
	        character = getchar();
	    }
	} else if (option == 4) {
		int shift = HIDDEN_KEY;
		//printf ("assign the value of the shift: \n");
		//scanf ("%d", &shift);
		printf ("Type text to be Decypghered:\n");
	    int character = getchar();
	    while (character != EOF) {
	        int decrypted_character = decrypt(character, shift);
	        //printf ("Cyphered text:\n");
	        putchar(decrypted_character);
	        character = getchar();
        }
	} else if (option == 5) {
	//the substitution Cypher
		printf ("Type in text to be cyphered: \n");
		scanf ("\n");
		char character [MAXCHAR];
		scanf("%[^\n]s\n",character);
		int i = 0;
		while (i < MAXCHAR) {
			if (character [i] == 'A' ||character [i] == 'a') {
				character [i] = 'C';
			} else if (character [i] == 'B' || character [i] == 'b') {
				character [i] = 'W';
			} else if (character [i] == 'C' || character [i] == 'c') {
				character [i] = 'M';
			} else if (character [i] == 'D' || character [i] == 'd') {
				character [i] = 'F';
			} else if (character [i] == 'E' || character [i] == 'e') {
				character [i] = 'J';
			} else if (character [i] == 'F' || character [i] == 'f') {
				character [i] = 'O';
			} else if (character [i] == 'G' || character [i] == 'g') {
				character [i] = 'R';
			} else if (character [i] == 'H' || character [i] == 'h') {
				character [i] =  'D';
			} else if (character [i] == 'I' || character [i] == 'i') {
				character [i] =  'B';
			} else if (character [i] == 'J' || character [i] == 'j') {
				character [i] =  'A';
			} else if (character [i] == 'K' || character [i] == 'k') {
				character [i] =  'N';
			} else if (character [i] == 'L' || character [i] == 'l') {
				character [i] =  'K';
			} else if (character [i] == 'M' || character [i] == 'm') {
				character [i] =  'G';
			} else if (character [i] == 'N' || character [i] == 'n') {
				character [i] =  'L';
			} else if (character [i] == 'O' || character [i] == 'o') {
				character [i] =  'Y';
			} else if (character [i] == 'P' || character [i] == 'p') {
				character [i] =  'P';
			} else if (character [i] == 'Q' || character [i] == 'q') {
				character [i] =  'H';
			} else if (character [i] == 'R' || character [i] == 'r') {
				character [i] =  'Z';
			} else if (character [i] == 'S' || character [i] == 's') {
				character [i] =  'V';
			} else if (character [i] == 'T' || character [i] == 't') {
				character [i] =  'E';
			} else if (character [i] == 'U' || character [i] == 'u') {
				character [i] =  'X';
			} else if (character [i] == 'V' || character [i] == 'v') {
				character [i] =  'T';
			} else if (character [i] == 'W' || character [i] == 'w') {
				character [i] =  'Q';
			} else if (character [i] == 'X' || character [i] == 'x') {
				character [i] =  'U';
			} else if (character [i] == 'Y' || character [i] == 'y') {
				character [i] =  'I';
			} else if (character [i] == 'Z' || character [i] == 'z') {
				character [i] =  'S';
			}
			i++;
		}
		//printf ("Cyphered text:\n");
		printf ("%s\n", character);
    } else if (option == 6) {
	//reverse the substitution cypher.
	//typing cyphered text to get its original.
    	printf ("Type in text to be decyphered: \n");
		scanf ("\n");
		char character [MAXCHAR];
		int i = 0;
		scanf("%[^\n]s",character);
		while (i < MAXCHAR) {
			if (character [i] == 'C' ||character [i] == 'c') {
				character [i] = 'A';
			} else if (character [i] == 'W' || character [i] == 'w') {
				character [i] = 'B';
			} else if (character [i] == 'M' || character [i] == 'm') {
				character [i] = 'C';
			} else if (character [i] == 'F' || character [i] == 'f') {
				character [i] = 'D';
			} else if (character [i] == 'J' || character [i] == 'j') {
				character [i] = 'E';
			} else if (character [i] == 'O' || character [i] == 'o') {
				character [i] = 'F';
			} else if (character [i] == 'R' || character [i] == 'r') {
				character [i] = 'G';
			} else if (character [i] == 'D' || character [i] == 'd') {
				character [i] = 'H';
			} else if (character [i] == 'B' || character [i] == 'b') {
				character [i] =  'I';
			} else if (character [i] == 'A' || character [i] == 'a') {
				character [i] =  'J';
			} else if (character [i] == 'N' || character [i] == 'n') {
				character [i] =  'K';
			} else if (character [i] == 'K' || character [i] == 'k') {
				character [i] =  'L';
			} else if (character [i] == 'G' || character [i] == 'g') {
				character [i] =  'M';
			} else if (character [i] == 'L' || character [i] == 'l') {
				character [i] =  'N';
			} else if (character [i] == 'Y' || character [i] == 'y') {
				character [i] =  'O';
			} else if (character [i] == 'P' || character [i] == 'p') {
				character [i] =  'P';
			} else if (character [i] == 'H' || character [i] == 'h') {
				character [i] =  'Q';
			} else if (character [i] == 'Z' || character [i] == 'z') {
				character [i] =  'R';
			} else if (character [i] == 'V' || character [i] == 'v') {
				character [i] =  'S';
			} else if (character [i] == 'E' || character [i] == 'e') {
				character [i] =  'T';
			} else if (character [i] == 'X' || character [i] == 'x') {
				character [i] =  'U';
			} else if (character [i] == 'T' || character [i] == 't') {
				character [i] =  'V';
			} else if (character [i] == 'Q' || character [i] == 'q') {
				character [i] =  'W';
			} else if (character [i] == 'U' || character [i] == 'u') {
				character [i] =  'X';
			} else if (character [i] == 'I' || character [i] == 'i') {
				character [i] =  'Y';
			} else if (character [i] == 'S' || character [i] == 's') {
				character [i] =  'Z';
			}
			i++;
		}
		//printf ("Cyphered text:\n");
		printf ("%s\n", character);
    } else {
    	printf ("You have entered something outside the menue given\n please choose from the menu\n");
    }
    return 0;
}

// Encrypt letters with a caesar(rotation)cipher with the specified shift
// the specified characters is returned shifted the specified number of positions
// characters other than letters are returned unchanged

int encrypt(int character, int shift) {
    if (character >= 'A' && character <= 'Z') {
        return 'A' + (character - 'A' + shift) % ALPHABET_SIZE;
    } else if (character >= 'a' && character <= 'z') {
        return 'A' + (character - 32 - 'A' + shift) % ALPHABET_SIZE;
    } else {
        return character;
    }
}

int decrypt(int character, int shift) {
	if (character >= 'A' && character <= 'Z') {
		return 'A' + (character + 'A' - shift) % ALPHABET_SIZE;
	} else if (character >= 'a' && character <= 'z'){
			return 'A' + (character - 32 + 'A' - shift) % ALPHABET_SIZE;
	} 
	else {
		return character;
	}
}
