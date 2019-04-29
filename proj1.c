/*Assignmnet one
typign a code that cyphers or decyphers a given input.
types of cyphers: Caeser (rotation) Cypher and Substitution Cypher
types of rotation cyphers:
1 rotation with key (asking for the key(shift) from the user)
2 rotation without key (where I got my own key inside the code)*/

#include <stdio.h>
#include <stdlib.h>

#define ALPHABET_SIZE  26
#define MAXCHAR 10240//this can be changed if the input text is larger than 1024 characters
#define HIDDEN_KEY 14//this can be changed without altering the code itself.

int main(void) {
	//Choosing the desired option of Cypher.
    printf ("Choose one of the following cypher options: \n");
    printf ("a)A Rotation Encryption Cypher without Key.\n");
    printf ("b)A Rotation Decrypthion Cypher without key.\n");
    printf ("c)A Rotation Encryption Cypher with key.\n");
    printf ("d)A Rotation Decryption Cypher with key.\n");
    printf ("e)A Substitution Encryption Cypher.\n");
    printf ("f)A Substitution Decryption Cypher.\n");

    char option;
    int i = 0;
	char character[MAXCHAR];
    scanf ("%c", &option);
    //Options to choose which cypher.
	if (option == 'a') {
		//Encryption without a key.	
		printf ("Enter a text to be encrypted:\n");
		scanf ("\n%[^\n]s\n", character);
		i = 0;//To start form the begining of the scanned string
		while (i < MAXCHAR) {
			if (character[i] <= 'Z' && character[i] >= 'A') {
				character[i] = 'A' + (character[i] - 'A' + HIDDEN_KEY)%ALPHABET_SIZE;
			}//A shift of 32 is the difference between the lower and upper cases in the ASCII table
			else if (character[i] <= 'z' && character[i] >= 'a') {
				character[i] = 'A' + (character[i] - 'A' - 32 + HIDDEN_KEY)%ALPHABET_SIZE;
			}
			i++;
		}
		printf ("The encrypted text is:\n%s\n", character);
	} else if (option == 'b') {
		//Decyption without a key
		printf ("Enter a text to be decrypted:\n");
		scanf ("\n%[^\n]s\n", character);
		i = 0;
		while (i < MAXCHAR) {
			if (character[i] <= 'Z' && character[i] >= 'A') {
				character[i] = 'A' + (character[i] + 'A' - HIDDEN_KEY)%ALPHABET_SIZE;
			}
			else if (character[i] <= 'z' && character[i] >= 'a') {
				character[i] = 'A' + (character[i] + 'A' - 32 - HIDDEN_KEY)%ALPHABET_SIZE;
			}
			i++;
		} 
		printf ("The decrypted text is:\n%s\n", character);
	} else if (option == 'c') {
	//The rotation cypher with key
	//Type in the key or "shift" BEFORE entering the text.
    	int KEY;
    	printf ("Please Assign the Key for the cypher:\n");
    	scanf ("%d", &KEY);
		printf ("Enter a text to be encrypted:\n");
		scanf ("\n%[^\n]s\n", character);
		i = 0;
		while (i < MAXCHAR) {
			if (character[i] <= 'Z' && character[i] >= 'A') {
				character[i] = 'A' + (character[i] - 'A' + KEY)%ALPHABET_SIZE;
			}
			else if (character[i] <= 'z' && character[i] >= 'a') {
				character[i] = 'A' + (character[i] - 'A' - 32 + KEY)%ALPHABET_SIZE;
			}
			i++;
		} 
		printf ("The encrypted text is:\n%s\n", character);
    } else if (option == 'd') {
	//The reverse of the rotation cypher 
	//Type in cyphered text to get its original.
    	int KEY;
    	printf ("Please Assign the Key for the cypher:\n");
    	scanf ("%d", &KEY);
		printf ("Enter a text to be decrypted:\n");
		scanf ("\n%[^\n]s\n", character);
		i = 0;
		while (i < MAXCHAR) {
			if (character[i] <= 'Z' && character[i] >= 'A') {
				character[i] = 'A' + (character[i] + 'A' - KEY)%ALPHABET_SIZE;
			}
			else if (character[i] <= 'z' && character[i] >= 'a') {
				character[i] = 'A' + (character[i] + 'A' - 32 - KEY)%ALPHABET_SIZE;
			}
			i++;
		} 
		printf ("The decrypted text is:\n%s\n", character);
	} else if (option == 'e') {
	//The substitution Cypher, is based on this substitution:
	//ABC DEFGH IJKL MNOPQR STUV WXYZ
	//CWM FJORD BANK GLYPHZ VEXT QUIS
		printf ("Type in text to be cyphered:\n");
		scanf("\n%[^\n]s\n",character);
		i = 0;
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
		printf ("The cyphered text is:\n");
		printf ("%s\nBased on this Substitution:\n", character);
		printf("ABC DEFGH IJKL MNOPQR STUV WXYZ\nCWM FJORD BANK GLYPHZ VEXT QUIS\n");
    } else if (option == 'f') {
	//Reverse the substitution cypher, based on the following substitution:
    //CWM FJORD BANK GLYPHZ VEXT QUIS
	//ABC DEFGH IJKL MNOPQR STUV WXYZ
	//Typing cyphered text to get its original.
    	printf ("Type in text to be decyphered: \n");
		i = 0;
		scanf("\n%[^\n]s",character);
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
		printf ("The cyphered text is:\n");
		printf ("%s\nBased on this Substitution:\n", character);
		printf("ABC DEFGH IJKL MNOPQR STUV WXYZ\nCWM FJORD BANK GLYPHZ VEXT QUIS\n");
    } else {
    	printf ("You have entered something outside the menue given\nPlease choose from the menu\n");
    }
    return 0;
}

/*the rotation Cypher given text:
1) TVU TVAOTH: AOL KHAH IYVBNOA AV BZ IF AOL IVAOHU ZWPLZ WPUWVPUAZ AOL LEHJA SVJHAPVU VM AOL LTWLYVY'Z
 ULD IHAASL ZAHAPVU. DL HSZV RUVD AOHA AOL DLHWVU ZFZALTZ VM AOPZ KLHAO ZAHY HYL UVA FLA VWLYHAPVUHS. DPAO 
 AOL PTWLYPHS MSLLA ZWYLHK AOYVBNOVBA AOL NHSHEF PU H CHPU LMMVYA AV LUNHNL BZ, PA PZ YLSHAPCLSF BUWYVALJALK.
 IBA TVZA PTWVYAHUA VM HSS, DL'CL SLHYULK AOHA AOL LTWLYVY OPTZLSM PZ WLYZVUHSSF VCLYZLLPUN AOL MPUHS ZAHNLZ 
 VM AOL JVUZAYBJAPVU VM AOPZ KLHAO ZAHY. THUF IVAOHUZ KPLK AV IYPUN BZ AOPZ PUMVYTHAPVU. 

 Its original is:
 MON MOTHMA: THE DATA BROUGHT TO US BY THE BOTHAN SPIES PINPOINTS THE EXACT LOCATION OF THE EMPEROR'S NEW
  BATTLE STATION. WE ALSO KNOW THAT THE WEAPON SYSTEMS OF THIS DEATH STAR ARE NOT YET OPERATIONAL. WITH THE
  IMPERIAL FLEET SPREAD THROUGHOUT THE GALAXY IN A VAIN EFFORT TO ENGAGE US, IT IS RELATIVELY UNPROTECTED.
   BUT MOST IMPORTANT OF ALL, WE'VE LEARNED THAT THE EMPEROR HIMSELF IS PERSONALLY OVERSEEING THE FINAL STAGES 
   OF THE CONSTRUCTION OF THIS DEATH STAR. MANY BOTHANS DIED TO BRING US THIS INFORMATION.

2) the rotation Cypher given text:
SJSFMPCRM WG O USBWIG. PIH WT MCI XIRUS O TWGV PM WHG OPWZWHM HC QZWAP O HFSS, WH KWZZ ZWJS WHG KVCZS ZWTS 
PSZWSJWBU HVOH WH WG GHIDWR. - OZPSFH SWBGHSWB

Its Original is :
EVERYBODY IS A GENIUS. BUT IF YOU JUDGE A FISH BY ITS ABILITY TO CLIMB A TREE, IT WILL LIVE ITS WHOLE LIFE
 BELIEVING THAT IT IS STUPID. - ALBERT EINSTEIN
 */

/* 
*/
