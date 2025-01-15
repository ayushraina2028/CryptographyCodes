#include <bits/stdc++.h>
using namespace std;

// Caesar's Cipher Encryption Technique, No Key Required and this is a drawback for this.

string EncryptionUsingCaesarCipher(string m) {

    string encryptedString = "";

    for(char x : m) {
        int k = ((int)x + 3) % 127;
        if(k < 32) k += 32;
        encryptedString += (char)(k);
    }

    return encryptedString;
}

string decryption(string encryptedString) {
    string message = "";

    for(char x : encryptedString) {
        int k = ((int)x - 3) % 127;
        if(k < 32) k = 127 - 32 + k;
        message += (char)(k);
    }

    return message;

}

int main() {

    string m;
    getline(cin,m);

    string encrptedString = EncryptionUsingCaesarCipher(m);

    cout << "Original Message: " << m << endl;
    cout << "Encrypted Message: " << encrptedString << endl;

    string decryptedMessage = decryption(encrptedString);
    cout << "Decrypted Message: " << decryptedMessage << endl;

}