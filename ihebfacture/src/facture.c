#include <gtk/gtk.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include "callbacks.h"
#include<string.h>
#include"facture.h"


void ajouter_facture(facture x)
{
FILE *f;
f=fopen("facture.txt","a+");
if(f!=NULL)
{
fprintf(f,"%s %d %s\n",x.cin,x.prix,x.datedeconfirmation);
fclose(f);
}
}

void afficher_facture(GtkWidget* treeview1){

GtkListStore *adstore;/*creation du modele de type liste*/
GtkTreeViewColumn *adcolumn;/*visualisation des colonnes*/
GtkCellRenderer *cellad;/*afficheur de cellule(text,image..)*/
FILE *f;


facture x ;


 adstore = gtk_list_store_new(3,
                                     G_TYPE_STRING,
				     G_TYPE_INT,
                                     G_TYPE_STRING);
                                   

f=fopen("facture.txt","r");

while(fscanf(f,"%s %d %s \n",x.cin,&x.prix,x.datedeconfirmation)!=EOF){


	GtkTreeIter pIter;
         /* Creation de la nouvelle ligne */
         gtk_list_store_append(adstore, &pIter);
         /* Mise a jour des donnees */
         gtk_list_store_set(adstore, &pIter,
                            0,x.cin,
                            1,x.prix,
                            2,x.datedeconfirmation,-1);}

			  
                           

                          
        fclose(f);

if (i==0){/* Creation de la 1er colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("CIN",
                                                            cellad,
                                                            "text", 0,
                                                            NULL);
	/* Ajouter la 1er colonne à la vue */
	gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

	/* Creation de la 2eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("PRIX",
                                                            cellad,
                                                            "text", 1,
                                                            NULL);
	/* Ajouter la 2emme colonne à la vue */
	gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);


        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("DATE DE CONFIMATION",
                                                            cellad,
                                                            "text", 2,
                                                            NULL);

	gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);
i++;}




gtk_tree_view_set_model ( GTK_TREE_VIEW (treeview1),
                                  GTK_TREE_MODEL(adstore)  );
}

void supprimer_facture(char*cin){
FILE*f=NULL;
FILE*f1=NULL;
 facture v;
f=fopen("facture.txt","r");

f1=fopen("ancien.txt","w+");
while(fscanf(f,"%s %d %s\n",v.cin,&v.prix,v.datedeconfirmation)!=EOF)
{
if(strcmp(cin,v.cin)!=0)fprintf(f1,"%s %d %s\n",v.cin,&v.prix,v.datedeconfirmation);
}
fclose(f);
fclose(f1);
remove("facture.txt");
rename("ancien.txt","facture.txt");
}




