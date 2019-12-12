#include <gtk/gtk.h>
#include <stdio.h>

typedef struct  {
 
char cin[30];
int prix;
char datedeconfirmation[30] ;
}facture;
GtkWidget *Gestion_facture;
int i,j;

void
on_Gestion_facture_clicked             (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_Confirmer_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_Retour_clicked                      (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_Modifier_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_Supprimer_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_Chercher_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_Confirmer1_clicked                  (GtkWidget       *objet,
                                        gpointer         user_data);
