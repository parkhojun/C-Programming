/*************************************************************************
*                                                                        *
* Problem :                                                              *
*                    �౸�� ����                                         *
*                                                                        *
*************************************************************************/
/*************************************************************************
*                                                                        *
* ���δ��б� ����������Ŵ��� ��ǻ�Ͱ��к� 1 �г�                        *
* 20153183 ��ȣ��                                                        *
*                                                                        *
*************************************************************************/

#define _crt_secure_no_warnings
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_TEAM 100

typedef struct {

	int win, draw, loss;
	int point;
	char name[1];

}SOCCERTEAM;

SOCCERTEAM* europeLeague[MAX_TEAM];
int numTeams;

void inputTeams(FILE *in_file);
void compareTeam();
void printTeams();


void main(void) {

	FILE *in_file;
	int i;
	int no_cases;

	SOCCERTEAM* team;

	in_file = fopen("input.txt", "r"); /*���� ����*/
	if (in_file == NULL) exit(1);/*�� �����Ͻ� ������*/

	fscanf(in_file, "%d", &no_cases); /*���̽����� �ޱ�*/

	for (i = 0; i < no_cases; i++)
	{
		inputTeams(in_file);
		compareTeam();
		printTeams();
	}
	fclose(in_file);
}
/*�� ���� ��� �����͸� �Է��ϴ� �Լ�*/
#define MAX_LENGTH (30+1)

void inputTeams(FILE *in_file) {
	
	int i;
	int w, d, l;
	char name[MAX_LENGTH];

	fscanf(in_file, "%d", &numTeams);
	for (i = 0; i < numTeams; i++) {

		SOCCERTEAM* team;

		fscanf(in_file, "%s %d %d %d", name, &w, &d, &l);
		team = (SOCCERTEAM *)malloc(sizeof(SOCCERTEAM) + strlen(name));
		if (team != NULL) {
			team->win = w;
			team->draw = d;
			team->loss = l;
			team->point = w * 2 + d;
			strcpy(team->name, name);
			europeLeague[i] = team;
		}
		else {
			exit(1);
		}
	}
}
/*�� ���� �켱 ������ ����ϴ� �Լ�*/

void compareTeam() {

	SOCCERTEAM* team;
	int i, j, temp, num;

	for (i = 0; i < (numTeams - 1); i++) {
		for (j = 0; j < (numTeams - 1 - i); j++)
		{

			if ((europeLeague[j]->point) != (europeLeague[j + 1]->point))
			{
				if ((europeLeague[j]->point) < (europeLeague[j + 1]->point)) {
					temp = europeLeague[j];
					europeLeague[j] = europeLeague[j + 1];
					europeLeague[j + 1] = temp;
				}
			}
			else if ((europeLeague[j]->point) == (europeLeague[j + 1]->point))
			{
				if ((europeLeague[j]->win) != (europeLeague[j + 1]->win))
				{
					if ((europeLeague[j]->win) < (europeLeague[j + 1]->win))
					{
						temp = europeLeague[j];
						europeLeague[j] = europeLeague[j + 1];
						europeLeague[j + 1] = temp;
					}
				}
				else if ((europeLeague[j]->win) == (europeLeague[j + 1]->win))
				{
					if ((europeLeague[j]->draw) != (europeLeague[j + 1]->draw))
					{
						if ((europeLeague[j]->draw) < (europeLeague[j + 1]->draw))
						{
							temp = europeLeague[j];
							europeLeague[j] = europeLeague[j + 1];
							europeLeague[j + 1] = temp;
						}
					}
					else if ((europeLeague[j]->draw) == (europeLeague[j + 1]->draw))
					{
						if (((europeLeague[j]->loss) != (europeLeague[j + 1]->loss)))
						{
							if ((europeLeague[j]->loss) > (europeLeague[j + 1]->loss))
							{
								temp = europeLeague[j];
								europeLeague[j] = europeLeague[j + 1];
								europeLeague[j + 1] = temp;
							}
						}
						else if ((europeLeague[j]->loss) == (europeLeague[j + 1]->loss))
						{
							num = (strcmp((europeLeague[j]->name), (europeLeague[j + 1]->name)));
							if (num > 0)
							{
								temp = europeLeague[j];
								europeLeague[j] = europeLeague[j + 1];
								europeLeague[j + 1] = temp;
							}
							else if (num < 0) {
								europeLeague[j] = europeLeague[j];
								europeLeague[j + 1] = europeLeague[j + 1];

							}
						}
					}
				}
			}
		}
	}
}
/*�� ������ ���� ���� ����ϴ� �Լ�*/
void printTeams() {

	int i;
	SOCCERTEAM* team;

	for (i = 0; i < numTeams; i++)
	{
		printf("%s %d", europeLeague[i]->name, europeLeague[i]->point);
		printf("\n");
	}
	printf("\n");
}