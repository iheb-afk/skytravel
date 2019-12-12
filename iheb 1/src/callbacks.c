#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include"affichage.h"
#include"crud.h"


void
on_AcceuilgestionVoiture_clicked       (GtkButton       *button,
                                        gpointer         user_data)
{
/*preparation du treeView*/
GtkWidget *p;
GtkWidget *p1;
voiture v;
gtk_widget_hide (Acceuil);
gestion_voiture = create_gestion_voiture ();
p=lookup_widget(gestion_voiture,"treeview1");
p1=lookup_widget(gestion_voiture,"treeview2");

i=0;
j=0;

Afficher_Voiture(p,"voitures.txt");
Afficher_Client(p1,"clients.txt");
gtk_widget_show (gestion_voiture);

}


void
on_gestionAcceuil_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{
 	gtk_widget_show (Acceuil);
        gtk_widget_destroy (gestion_voiture);

}


void
on_Ajouter_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

GtkWidget *cal1;
GtkWidget *cal2;
GtkWidget *comboboxMarque;



GtkWidget *labelsuccess;
GtkWidget *labelMarque;
GtkWidget *labelMatricule;
GtkWidget *labelExist;
FILE*f=NULL;
voiture v;
int jj1,mm1,aa1,jj2,mm2,aa2,b=1;


labelMarque=lookup_widget(gestion_voiture,"label64");

labelMatricule=lookup_widget(gestion_voiture,"label11");
labelExist=lookup_widget(gestion_voiture,"label10");
labelsuccess=lookup_widget(gestion_voiture,"label9");



comboboxMarque=lookup_widget(gestion_voiture,"combobox7");




cal1=lookup_widget(gestion_voiture,"calendar1");
cal2=lookup_widget(gestion_voiture,"calendar2");
           gtk_widget_hide (labelsuccess);


strcpy(v.matricule,gtk_entry_get_text(GTK_ENTRY(lookup_widget(gestion_voiture,"entry1"))));


if(strcmp(v.matricule,"")==0){
                gtk_widget_show (labelMatricule);
b=0;

}else
{
           gtk_widget_hide (labelMatricule);
}




if(gtk_combo_box_get_active (GTK_COMBO_BOX(comboboxMarque))==-1){
                gtk_widget_show (labelMarque);
b=0;
}
else{

           gtk_widget_hide (labelMarque);
}



if(b==1){
v.prix =gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (lookup_widget(gestion_voiture,"spinbutton2")));
strcpy(v.marque,gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxMarque)));


gtk_calendar_get_date (GTK_CALENDAR(cal1),
                       &aa1,
                       &mm1,
                       &jj1);
gtk_calendar_get_date (GTK_CALENDAR(cal2),
                       &aa2,
                       &mm2,
   
                    &jj2);




if(exist_voiture(v.matricule)==1) {

                gtk_widget_show (labelExist);

}
else{
           gtk_widget_hide (labelExist);

f=fopen("voitures.txt","a+");
fprintf(f,"%s %s %d/%d/%d %d/%d/%d %d\n",v.matricule,v.marque,jj1,mm1+1,aa1,jj2,mm2+1,aa2,v.prix);
fclose(f);
                gtk_widget_show (labelsuccess);


//mise a jour du treeView
GtkWidget *p;
p=lookup_widget(gestion_voiture,"treeview1");
Afficher_Voiture(p,"voitures.txt");



}

}
















}




void
on_Supprimer_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
        GtkTreeSelection *selection;
        GtkTreeModel     *model;
        GtkTreeIter iter;
        GtkWidget* p;
        GtkWidget *label;
        gchar* matricule;

        label=lookup_widget(gestion_voiture,"label32");
        p=lookup_widget(gestion_voiture,"treeview1");
        selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(p));
        if (gtk_tree_selection_get_selected(selection, &model, &iter))
        {  gtk_tree_model_get (model,&iter,0,&matricule,-1);
           gtk_list_store_remove(GTK_LIST_STORE(model),&iter);//supprimer la ligne du treeView

           supprimer_voiture(matricule);// supprimer la ligne du fichier

           gtk_widget_hide (label);}else{
                gtk_widget_show (label);
        }




}


void
on_Modifier_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

  GtkTreeSelection *selection;
        GtkTreeModel     *model;
        GtkTreeIter iter;
        GtkWidget* p;
        GtkWidget *label;
        gchar* matricule;
        gchar* marque;
        gchar* date_location;
        gchar* date_retour;
        int prix,x1;

        label=lookup_widget(gestion_voiture,"label32");
        p=lookup_widget(gestion_voiture,"treeview1");
        selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(p));
        if (gtk_tree_selection_get_selected(selection, &model, &iter))
        {  
                gtk_tree_model_get (model,&iter,0,&matricule,1,&marque,2,&date_location,3,&date_retour,4,&prix,-1);//recuperer les information de la ligne selectionneé

		gtk_label_set_text(GTK_LABEL(lookup_widget(gestion_voiture,"label30")),matricule);
                gtk_entry_set_text(GTK_ENTRY(lookup_widget(gestion_voiture,"entry2")),date_location);
                gtk_entry_set_text(GTK_ENTRY(lookup_widget(gestion_voiture,"entry3")),date_retour);
                gtk_spin_button_set_value (GTK_SPIN_BUTTON(lookup_widget(gestion_voiture,"spinbutton4")),prix);
		/* comparer la valeur du marque et sauvegarder lindice du combobox pour l'activer (1er choix ==> indice 0)*/
	   	if(strcmp(marque,"BMW")==0)	x1=0;		
                if(strcmp(marque,"Audi")==0) x1=1;                
                if(strcmp(marque,"Chevrolet")==0)  x1=2 ; 
                if(strcmp(marque,"Citroen")==0)  x1=3 ; 
                gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(gestion_voiture,"combobox8")),x1);
           	gtk_notebook_next_page(GTK_NOTEBOOK(lookup_widget(gestion_voiture,"notebook1")));//redirection vers la page suivante33
                gtk_widget_show(lookup_widget(gestion_voiture,"button7"));//afficher le bouton confirmer
           gtk_widget_hide (label);}else{
                gtk_widget_show (label);
        }





}


void
on_ConfirmerModification_clicked       (GtkButton       *button,
                                        gpointer         user_data)
{
	voiture v;
        strcpy(v.matricule,gtk_label_get_text(GTK_LABEL(lookup_widget(gestion_voiture,"label30"))));
        strcpy(v.marque,gtk_combo_box_get_active_text(GTK_COMBO_BOX(lookup_widget(gestion_voiture,"combobox8"))));
        strcpy(v.date_location,gtk_entry_get_text(GTK_ENTRY(lookup_widget(gestion_voiture,"entry2"))));
        strcpy(v.date_retour,gtk_entry_get_text(GTK_ENTRY(lookup_widget(gestion_voiture,"entry3"))));
        v.prix =gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (lookup_widget(gestion_voiture,"spinbutton4")));

        supprimer_voiture(v.matricule);
        ajouter_voiture(v);
        Afficher_Voiture(lookup_widget(gestion_voiture,"treeview1"),"voitures.txt");
        GtkWidget* msg=lookup_widget(gestion_voiture,"label33");
        gtk_widget_show(msg);
}


void
on_Louer_clicked                       (GtkButton       *button,
                                        gpointer         user_data)
{

 GtkTreeSelection *selection;
        GtkTreeModel     *model;
        GtkTreeIter iter;
        GtkWidget* p;
        GtkWidget *labelCin;
        GtkWidget *label;
        GtkWidget *labelsuccess;
        gchar* matricule;
        gchar* marque;
        gchar* date_location;
        gchar* date_retour;
	char cin[9];
	FILE*f=NULL;
        int prix;
        label=lookup_widget(gestion_voiture,"label32");
        labelsuccess=lookup_widget(gestion_voiture,"label78");
        labelCin=lookup_widget(gestion_voiture,"label77");
        p=lookup_widget(gestion_voiture,"treeview1");
        selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(p));
						gtk_widget_hide (labelsuccess);
        if (gtk_tree_selection_get_selected(selection, &model, &iter))
        {  
						gtk_widget_hide (label);

	strcpy(cin,gtk_entry_get_text(GTK_ENTRY(lookup_widget(gestion_voiture,"entry7"))));	

		if(strcmp(cin,"")==0){
			  gtk_widget_show (labelCin);return;

		}
		else{
			
		gtk_widget_hide (labelCin);}
                gtk_tree_model_get (model,&iter,0,&matricule,1,&marque,2,&date_location,3,&date_retour,4,&prix,-1);//recuperer les information de la ligne selectionneé

			f=fopen("locations.txt","a+");
						
			fprintf(f,"%s %s %s %s %d %s\n",matricule,marque,date_location,date_retour,prix,cin);
	                 fclose(f);
							  gtk_widget_show (labelsuccess);	
			}

 else{
				  gtk_widget_show (label);

	}

	}

 












void
on_ChercherVoiture_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{


GtkWidget *p1;
GtkWidget *entry;
GtkWidget *labelnom;
GtkWidget *nbResultat;
GtkWidget *message;
char nom[30];
char chnb[30];
int b=0,nb;
entry=lookup_widget(gestion_voiture,"entry6");
labelnom=lookup_widget(gestion_voiture,"label72");
p1=lookup_widget(gestion_voiture,"treeview2");

strcpy(nom,gtk_entry_get_text(GTK_ENTRY(entry)));
if(strcmp(nom,"")==0){
  gtk_widget_show (labelnom);b=0;
}else{
b=1;
gtk_widget_hide (labelnom);}

if(b==0){return;}else{

nb=ChercherClient(p1,"clients.txt",nom);
/* afficher le nombre de resultats obtenue par la recherche */
sprintf(chnb,"%d",nb);
nbResultat=lookup_widget(gestion_voiture,"label73");
message=lookup_widget(gestion_voiture,"label74");
gtk_label_set_text(GTK_LABEL(nbResultat),chnb);

gtk_widget_show (nbResultat);
gtk_widget_show (message);


}



}

