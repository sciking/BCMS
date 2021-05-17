#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main() {
	char titoloa[50],nomefile[40], testo[500], copy[100], text[40], html[2000];
	int a;
  	FILE *fd;
  	FILE *art;
	printf("Inserire nome del file: \n");
	scanf("%s",nomefile);
	fd=fopen(nomefile, "w");
	printf("Inserire titolo pagina: \n");
	scanf("%s",titoloa);
	printf("Inserire footer: \n");
	scanf("%s",copy);
	printf("Inserire l'articolo: \n");
	scanf("%s",testo);
	fputs ("<h1>", fd);
	fputs (titoloa, fd);
	fputs ("</h1>", fd);
	fputs ("<hr>", fd);
	fputs (testo, fd);
	fputs ("<hr>", fd);
	fputs ("<small>", fd);
	fputs (copy, fd);
	fputs ("</small>", fd);
	
	
	
}
