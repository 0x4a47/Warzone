void win(){

	system("/bin/sh");

}

int check_username(char *username){

	printf("Checking username...\n");
	return strncmp(username, "0x4a47", 6);

}

int check_password(char *password){

	return strncmp(password, a, 21);

}

int main(){
	char password[30];
	char username[20];

	printf("------------ 0x4a47's Secret Login ------------\n");
	printf("Username: ");
	if(fgets(username, 50, stdin)!= NULL){
		if(check_username(username) == 0){
			printf("Correct!\n");
		}else{
			printf("Incorrect User. Exiting.\n");
			exit(1);
		}
		printf("Password: ");
		if(fgets(password, 50, stdin)!= NULL){
			if(check_password(password) == 0){
				printf("Correct ! Access 'Grant'- ed\n");
				win();
			}
		}else
			exit(1);
	}else
		exit(1);

	return 0;

}
