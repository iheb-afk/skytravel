#include <stdlib.h>
#include <stdio.h>
#include<string.h>
#include <gtk/gtk.h>
#include "interface.h"
#include "callbacks.h"
#include "facture1.h"
GtkListStore *adstore;/*creation du modele de type liste*/
GtkTreeViewColumn *adcolumn;/*visualisation des colonnes*/
GtkCellRenderer *cellad;/*afficheur de cellule(text,image..)*/
FILE *f;
int Chercherfacture(GtkWidget* treeview1,char*cin1)
{
facture x;


int nb=0;

        /* Creation du modele */
        adstore = gtk_list_store_new(3,
                                     G_TYPE_STRING,
                                     G_TYPE_INT,
                                     G_TYPE_STRING);
        /* Insertion des elements */
        f=fopen("facture.txt","r");
while(fscanf(f,"%s %d %s\n",x.cin,&x.prix,x.datedeconfirmation)!=EOF)
        {
	if(strcmp(x.cin,cin1)==0){nb++;
	GtkTreeIter pIter;

         /* Creation de la nouvelle ligne */
         gtk_list_store_append(adstore, &pIter);
         /* Mise a jour des donnees */
         gtk_list_store_set(adstore, &pIter,
                            0,x.cin,
                            1,x.prix,
                            2,x.datedeconfirmation,
                              -1);}
}
        fclose(f);


if(j==0)
	{



        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("CIN",
                                                            cellad,
                                                            "text", 0,
                                                            NULL);

	gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);


        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("PRIX",
                                                            cellad,
                                                            "text", 1,
                                                            NULL);

	gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);


        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("DATE DE CONFIRMATION",
                                                            cellad,
                                                            "text", 2,
                                                            NULL);

	gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);


        


	j++;}


 	gtk_tree_view_set_model ( GTK_TREE_VIEW (treeview1),
                                  GTK_TREE_MODEL(adstore)  );
return nb;

}
