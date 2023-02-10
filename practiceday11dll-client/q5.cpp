#include <assert.h>
#include <iostream>
#include <string.h>

/* Run perfectly */

class CaesarCipher {
public:
    static int key;
    static void SetKey(int newKey) {
        key = newKey % 26;
    }
    static int GetKey() {
        return key;
    }
    static void Encrypt(char* plainText, char* cipherText, int capacity) {
        int i;
        for (i = 0; i < capacity - 1 && plainText[i] != '\0'; i++) {
            if (plainText[i] >= 'A' && plainText[i] <= 'Z') {
                cipherText[i] = (plainText[i] - 'A' + key) % 26 + 'A';
            }
            else {
                cipherText[i] = plainText[i];
            }
        }
        cipherText[i] = '\0';
    }
    static void Decrypt(char* cipherText, char* plainText, int capacity) {
        int i;
        for (i = 0; i < capacity - 1 && cipherText[i] != '\0'; i++) {
            if (cipherText[i] >= 'A' && cipherText[i] <= 'Z') {
                plainText[i] = (cipherText[i] - 'A' + 26 - key) % 26 + 'A';
            }
            else {
                plainText[i] = cipherText[i];
            }
        }
        plainText[i] = '\0';
    }

};

int CaesarCipher::key = 0;

#define CAPACITY 32

int main() {

    // Following test checks
    // - SetKey method of CaesarCipher class
    CaesarCipher::SetKey(3);
    assert(CaesarCipher::GetKey() == 3);

    // Following test case checks
    // - Encrypt method of  CaesarCipher class
    char plainText[CAPACITY] = "ATTACK AT DAWN";
    char cipherText[CAPACITY] = { 0 };
    CaesarCipher::Encrypt(plainText, cipherText, CAPACITY);
    assert(strcmp(cipherText, "DWWDFN DW GDZQ") == 0);

    // Following test case checks
    // - Decrypt method of  CaesarCipher class
    strcpy_s(cipherText, CAPACITY, "WKLV LV IXQ");
    CaesarCipher::Decrypt(cipherText, plainText, CAPACITY);
    assert(strcmp(plainText, "THIS IS FUN") == 0);
}
