#include <gtk/gtk.h>

typedef struct voiture voiture;
struct voiture{
char matricule[30];
char marque[30];
char date_location[30];
char date_retour[30];
int prix;
};
  int i,j;
  GtkWidget *Acceuil;
  GtkWidget *gestion_voiture;
void
on_AcceuilgestionVoiture_clicked       (GtkButton       *button,
                                        gpointer         user_data);

void
on_gestionAcceuil_clicked              (GtkButton       *button,
                                        gpointer         user_data);

void
on_Ajouter_clicked                     (GtkButton       *button,
                                        gpointer         user_data);


void
on_Supprimer_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_Modifier_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_ConfirmerModification_clicked       (GtkButton       *button,
                                        gpointer         user_data);

void
on_Louer_clicked                       (GtkButton       *button,
                                        gpointer         user_data);

void
on_ChercherVoiture_clicked             (GtkButton       *button,
                                        gpointer         user_data);
