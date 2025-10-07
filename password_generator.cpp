#include <iostream>
#include <cstdlib>
#include <ctime>

void pwd_generator();

int main(){
	printf("Here is a password's generator:");
	printf("\nEnter 0 to generate or 1 to leave : ");
	
	int choice;
	scanf("%1d", &choice);	
	while (choice != 1){
		printf("\nPassword : ");
		pwd_generator();
		
		printf("\nEnter 0 to generate or 1 to leave : ");
		scanf("%1d", &choice);
	}
	exit(0);
	return 0;
}

void pwd_generator(){
	char password[8];
	std :: string pwd = "";
	
	srand(time(NULL));
	for (int i = 0 ; i < 8 ; i++){
		int random = 33 + rand() % 93;
		int dont_contains[] = {34, 35, 36, 39, 44, 47, 58, 59, 64, 92, 94,96};
		for (int j = 0 ; j < 11 ; j++){
			if (random == dont_contains[j]){
				random = 33 + rand() % 111;
				break;
			}
		}
		password[i] = char(random);
		pwd += password[i];
	}
	std :: cout << pwd;
}
