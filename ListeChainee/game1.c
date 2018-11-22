#include <stdio.h>
#include <string.h>

typedef struct 	Player
{
	int index;
	signed char username[256];
	int hp;
	int mp;
}				Joueur;

void	ft_create_player(Joueur *p)
{
	strcpy((char*)(*p).username, "Wizard");
	(*p).hp = 70;
	p->mp = 140;
}

void	ft_show_player(Joueur *p)
{
	printf("Nom du joueur %d : %s\n", (*p).index, (*p).username);
	printf("PV : %d | PM : %d\n\n", (*p).hp, (*p).mp);
}

int	main(void)
{
	Joueur p1 = {1, "Bob", 100, 50};
	Joueur p2 = {};
	Joueur tableau[5];

	tableau[2].index = 3;
	strcpy((char*)tableau[2].username, "Faible");
	tableau[2].hp = 20;
	tableau[2].mp = 10;

	printf("Nom du joueur %d : %s\n", p1.index, p1.username);
	printf("PV : %d | PM : %d\n", p1.hp, p1.mp);

	strcpy((char*)p1.username, "Tata");
	p1.hp -= 50;

	ft_show_player(&p1);
	ft_create_player(&p2);
	ft_show_player(&p2);
	ft_show_player(&tableau[2]);

	return (0);


}

