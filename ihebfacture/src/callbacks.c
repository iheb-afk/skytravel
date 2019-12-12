#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include"facture.h"
#include"facture1.h"


void
on_Gestion_facture_clicked             (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *treeview1;
GtkWidget *treeview2;
GtkWidget *Gestion_facture;
GtkWidget *Facture;

Facture=lookup_widget(objet,"Facture");
gtk_widget_destroy (Facture);
Gestion_facture = create_Gestion_facture ();

treeview1=lookup_widget(Gestion_facture,"treeview1");
treeview2=lookup_widget(Gestion_facture,"treeview2");
i=0;
afficher_facture(treeview1);

gtk_widget_show (Gestion_facture);
}


void
on_Retour_clicked                      (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *Gestion_facture;
GtkWidget *Facture;
Gestion_facture=lookup_widget(objet,"Gestion_facture");
gtk_widget_destroy (Gestion_facture);
Facture = create_Facture ();
gtk_widget_show (Facture);

}


void
on_Confirmer_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data)
{

FILE *f;
GtkWidget *cal1;


facture x;
int jj,mm,aa;

cal1=lookup_widget(objet,"calendar1");

strcpy(x.cin,gtk_entry_get_text(GTK_ENTRY(lookup_widget(objet,"CIN_new"))));
x.prix =gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (lookup_widget(objet,"spinbutton5")));


gtk_calendar_get_date (GTK_CALENDAR(cal1),
                       &aa,
                       &mm,
                       &jj);




f=fopen("facture.txt","a+");
fprintf(f,"%s %d %d/%d/%d\n",x.cin,x.prix,jj,mm,aa);
fclose(f);


GtkWidget *treeview1;
treeview1=lookup_widget(objet,"treeview1");
afficher_facture(treeview1);









}


void
on_Modifier_clicked                    (GtkWidget      *objet,
                                        gpointer         user_data)
{GtkTreeSelection *selection;
        GtkTreeModel     *model;
        GtkTreeIter iter;
        GtkWidget* p;
        GtkWidget *label;
        gchar* cin;
        gchar* datedeconfirmation;
        
        int prix;

        
        p=lookup_widget(objet,"treeview2");
        selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(p));
        if (gtk_tree_selection_get_selected(selection, &model, &iter))
        {  
                gtk_tree_model_get (model,&iter,0,&cin,1,&prix,2,&datedeconfirmation,-1);//recuperer les information de la ligne selectionneé

		
                gtk_spin_button_set_value (GTK_SPIN_BUTTON(lookup_widget(objet,"spinbutton6")),prix);
		
	   	
                
           	gtk_notebook_next_page(GTK_NOTEBOOK(lookup_widget(objet,"notebook1")));//redirection vers la page suivante33
}
                
}


void
on_Supprimer_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data)
{

GtkTreeSelection *selection;
        GtkTreeModel     *model;
        GtkTreeIter iter;
        GtkWidget* treeview2;
        GtkWidget *label;
        gchar* cin;

       
        treeview2=lookup_widget(objet,"treeview2");
        selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(treeview2));
        if (gtk_tree_selection_get_selected(selection, &model, &iter))
        {  gtk_tree_model_get (model,&iter,0,&cin,-1);
           gtk_list_store_remove(GTK_LIST_STORE(model),&iter);//supprimer la ligne du treeView

           supprimer_facture(cin);// supprimer la ligne du fichier

          
        }

}


void
on_Chercher_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *treeview2;
GtkWidget *entry2;



char cin[30];

treeview2=lookup_widget(objet,"treeview2");
strcpy(cin,gtk_entry_get_text(GTK_ENTRY(lookup_widget(objet,"entry2"))));
Chercherfacture(treeview2,cin);
}








void
on_Confirmer1_clicked                  (GtkWidget      *objet,
                                        gpointer         user_data)
{
facture v;
        
        strcpy(v.cin,gtk_entry_get_text(GTK_ENTRY(lookup_widget(objet,"Cin_exists"))));
        strcpy(v.datedeconfirmation,gtk_entry_get_text(GTK_ENTRY(lookup_widget(objet,"Date_exists"))));
        v.prix =gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (lookup_widget(objet,"spinbutton6")));

        supprimer_facture(v.cin);

        ajouter_facture(v);
	GtkWidget *treeview1;
        treeview1=lookup_widget(objet,"treeview1");
afficher_facture(treeview1);
        
        
       
}

