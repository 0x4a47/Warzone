char * xorencrypt(char * message, char * key) {
    size_t messagelen = strlen(message);
    size_t keylen = strlen(key);

    char * encrypted = malloc(messagelen+1);

    int i;
    for(i = 0; i < messagelen; i++) {
        encrypted[i] = message[i] ^ key[i % keylen];
    }
    encrypted[messagelen] = '\0';

    return encrypted;
}

int main(){
    char * key = "11762364890";

    char * encrypted = xorencrypt(message, key);
    printf("%s\n", encrypted);
    free(encrypted);
    return 0;

}
