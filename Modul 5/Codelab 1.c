#include <stdio.h>
#include <string.h>

int main() {
	int i;
	
	char agents[5][10] = {
		"neon",
		"gekko",
		"omen",
		"sage",
		"jett"
	};
	int totalAgent = sizeof(agents) / sizeof(agents[0]);
	printf("Daftar Agen:\n");
	
	for (i = 1; i <= totalAgent; i++) {
		printf("Agent ke-%d: %s\n", i, agents[i-1]);
	}
	
	strcpy(agents[3], "kage");

	printf("\nDaftar Agen setelah perubahan:\n");
	for (i = 1; i <= totalAgent; i++) {
		printf("Agent ke-%d: %s\n", i, agents[i-1]);
	}

	return 0;
}