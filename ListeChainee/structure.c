#include <stdio.h>
#include <string.h>

struct Books
{
	int		index;
	char	title[50];
	char	author[50];
	char	subject[300];
	struct Books *nextbook;
};

void	ft_printbook(struct Books *ptr)
{
	printf("Titre du livre %d : %s\n", ptr->index, ptr->title);
	printf("Auteur : %s\n", ptr->author);
	printf("Sujet : %s\n\n", ptr->subject);
}

int main(void)
{
	struct Books book1;
//	struct Books book2;
//	struct Books book3;

	book1.index = 1;
	strcpy(book1.title, "Titre du 1er livre");
	strcpy(book1.author, "Auteur 1");
	strcpy(book1.subject, "Sujet du premier livre.");
	ft_printbook(&book1);
	return (0);
}
