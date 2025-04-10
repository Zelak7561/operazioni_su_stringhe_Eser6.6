#include <iostream>

using namespace std;

void lettura(char *s1 , char *s2);
void calcLunghezza(char *s1 , char *s2 , int *len1 , int *len2);
void confronto(int len1 , int len2 , int *risultato_confronto);
void copia_stringhe(char *s1 , char *s2 , char *s3 , char *s4);
void concatena_stringhe(char *s3 , char *s4 , char *s5);

int main() {
    char str1[20] = "";
    char str2[20] = "";
    char str3_1[20] = "";
    char str4_2[20] = "";
    char str5[40] = "";

    int len1 = 0;
    int len2 = 0;
    int risultato_confronto = 0;

    lettura(str1 , str2);
    calcLunghezza(str1 , str2 , &len1 , &len2);
    confronto(len1 , len2 , &risultato_confronto);
    copia_stringhe(str1 , str2 , str3_1 , str4_2);
    concatena_stringhe(str3_1 , str4_2 , str5);

    cout << "|------------------------------------------------------|" << endl;
    cout << "la stringa str1: " << str1 << " | Dimensione: " << len1 << endl;
    cout << "la stringa str2: " << str2 << " | Dimensione: " << len2 << endl;
    cout << "|------------------------------------------------------|" << endl;
    switch (risultato_confronto) {
        case -1:
            cout << "La stringa str2 e maggiore di str1" << endl;
            break;
        case 0:
            cout << "La stringa str1 e uguale a str1" << endl;
            break;
        case 1:
            cout << "La stringa str1 e maggiore di str2" << endl;
            break;
    }
    cout << "|------------------------------------------------------|" << endl;
    cout << "la stringa copia str1: " << str3_1 << endl;
    cout << "la stringa copia str2: " << str4_2 << endl;
    cout << "|------------------------------------------------------|" << endl;
    cout << "la stringa concatenata str5: " << str5 << endl;
    cout << "|------------------------------------------------------|" << endl;

    return 0;
}

void lettura(char *s1 , char *s2) {
    cout << "Inserire la str1: ";
    cin.getline(s1, 20);
    cout << "Inserire la str2: ";
    cin.getline(s2, 20);
}

void calcLunghezza(char *s1 , char *s2 , int *len1, int *len2) {

    for (int i = 0; s1[i] != '\0'; i++) {
        (*len1)++;
    }

    for (int i = 0; s2[i] != '\0'; i++) {
        (*len2)++;
    }

}

void confronto(int len1 , int len2 , int *risultato_confronto){
    if (len2 > len1) {
        *risultato_confronto = -1;
    }
    if (len2 == len1) {
        *risultato_confronto = 0;
    }
    if (len1 > len2) {
        *risultato_confronto = 1;
    }
}

void copia_stringhe(char *s1 , char *s2 , char *s3 , char *s4) {
    for (int i = 0; s1[i] != '\0'; i++) {
        s3[i] = s1[i];
    }

    for (int i = 0; s2[i] != '\0'; i++) {
        s4[i] = s2[i];
    }

}

void concatena_stringhe(char *s3 , char *s4 , char *s5) {
    int i , j;
    for (i = 0; s3[i] != '\0'; i++) {
        s5[i] = s3[i];
    }

    for (j = 0; s4[j] != '\0'; j++) {
        s5[i + j] = s4[j];
    }
}
