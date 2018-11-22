#include <stdio.h>
#include <stdlib.h>

typedef struct 	Player
{
	char name[256] ;
	int hp;
	int mp;
}				Player;

void	print_list(int *list)
{
	int i;

	i = 0;
	while (list[i] != -42)
	{
		printf("list index %d, number %d.\n", i + 1, list[i]);
		i++;
	}
}


int	main(void)
{
	int		nbofplayers;
	int		*player_list = NULL;
	int i;	

	nbofplayers = 0;
	i = 0;
	printf("How many players ?\n");
	scanf("%d", &nbofplayers);

	player_list = malloc(sizeof(nbofplayers) * nbofplayers + 1);
	if (player_list == NULL)
		return (0);
	printf("%d players.\n", nbofplayers);


	while (i < nbofplayers)
	{
//		printf("Player %d -> number %d\n", i + 1, i * 3 - 7 + i / 2);
		player_list[i] = i * 3 - 7 + i / 2;
		i++;
	}
	player_list[i] = -42;
	print_list(player_list);
	free (player_list);
	if(!(player_list = malloc(sizeof(nbofplayers) * nbofplayers + 1)))
		return (0);
	i = 0;
	while (i++ < nbofplayers)
		player_list[i - 1] = 0;
	print_list(player_list);
	

	return (0);
}
