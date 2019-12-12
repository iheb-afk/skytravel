/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_Facture (void)
{
  GtkWidget *Facture;
  GtkWidget *fixed1;
  GtkWidget *Gestion_facture;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *image1;
  GtkWidget *label1;

  Facture = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (Facture), _("Facture"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (Facture), fixed1);

  Gestion_facture = gtk_button_new ();
  gtk_widget_show (Gestion_facture);
  gtk_fixed_put (GTK_FIXED (fixed1), Gestion_facture, 224, 192);
  gtk_widget_set_size_request (Gestion_facture, 152, 48);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (Gestion_facture), alignment1);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  image1 = gtk_image_new_from_stock ("gtk-execute", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, FALSE, 0);

  label1 = gtk_label_new_with_mnemonic (_("Gestion facture"));
  gtk_widget_show (label1);
  gtk_box_pack_start (GTK_BOX (hbox1), label1, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) Gestion_facture, "clicked",
                    G_CALLBACK (on_Gestion_facture_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (Facture, Facture, "Facture");
  GLADE_HOOKUP_OBJECT (Facture, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (Facture, Gestion_facture, "Gestion_facture");
  GLADE_HOOKUP_OBJECT (Facture, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (Facture, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (Facture, image1, "image1");
  GLADE_HOOKUP_OBJECT (Facture, label1, "label1");

  return Facture;
}

GtkWidget*
create_Gestion_facture (void)
{
  GtkWidget *Gestion_facture;
  GtkWidget *notebook1;
  GtkWidget *fixed2;
  GtkWidget *CIN_new;
  GtkWidget *calendar1;
  GtkWidget *DATE_DE_CONFIRMATION;
  GtkWidget *CIN;
  GtkWidget *label15;
  GtkWidget *Retour;
  GtkWidget *alignment6;
  GtkWidget *hbox6;
  GtkWidget *image6;
  GtkWidget *label14;
  GtkWidget *Confirmer;
  GtkWidget *alignment2;
  GtkWidget *hbox2;
  GtkWidget *image2;
  GtkWidget *label8;
  GtkWidget *Prix;
  GtkObject *spinbutton5_adj;
  GtkWidget *spinbutton5;
  GtkWidget *scrolledwindow2;
  GtkWidget *treeview1;
  GtkWidget *Ajouter_facture;
  GtkWidget *fixed3;
  GtkWidget *scrolledwindow1;
  GtkWidget *treeview2;
  GtkWidget *entry2;
  GtkWidget *Entrez_CIN;
  GtkWidget *Supprimer;
  GtkWidget *alignment4;
  GtkWidget *hbox4;
  GtkWidget *image4;
  GtkWidget *label12;
  GtkWidget *Chercher;
  GtkWidget *alignment5;
  GtkWidget *hbox5;
  GtkWidget *image5;
  GtkWidget *label13;
  GtkWidget *Liste_des_Factures;
  GtkWidget *Modifier;
  GtkWidget *alignment3;
  GtkWidget *hbox3;
  GtkWidget *image3;
  GtkWidget *label11;
  GtkWidget *Modifier_Supprimer;
  GtkWidget *fixed4;
  GtkWidget *Cin_exists;
  GtkWidget *Date_exists;
  GtkWidget *CIN1;
  GtkWidget *Prix1;
  GtkWidget *Date_de_confirmation1;
  GtkObject *spinbutton6_adj;
  GtkWidget *spinbutton6;
  GtkWidget *Confirmer1;
  GtkWidget *alignment7;
  GtkWidget *hbox7;
  GtkWidget *image7;
  GtkWidget *label19;
  GtkWidget *Modifier1;

  Gestion_facture = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (Gestion_facture), _("Gestion_facture"));

  notebook1 = gtk_notebook_new ();
  gtk_widget_show (notebook1);
  gtk_container_add (GTK_CONTAINER (Gestion_facture), notebook1);

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed2);

  CIN_new = gtk_entry_new ();
  gtk_widget_show (CIN_new);
  gtk_fixed_put (GTK_FIXED (fixed2), CIN_new, 712, 32);
  gtk_widget_set_size_request (CIN_new, 144, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (CIN_new), 8226);

  calendar1 = gtk_calendar_new ();
  gtk_widget_show (calendar1);
  gtk_fixed_put (GTK_FIXED (fixed2), calendar1, 640, 192);
  gtk_widget_set_size_request (calendar1, 261, 168);
  gtk_calendar_display_options (GTK_CALENDAR (calendar1),
                                GTK_CALENDAR_SHOW_HEADING
                                | GTK_CALENDAR_SHOW_DAY_NAMES);

  DATE_DE_CONFIRMATION = gtk_label_new (_("DATE DE CONFIRMATION"));
  gtk_widget_show (DATE_DE_CONFIRMATION);
  gtk_fixed_put (GTK_FIXED (fixed2), DATE_DE_CONFIRMATION, 664, 160);
  gtk_widget_set_size_request (DATE_DE_CONFIRMATION, 201, 16);

  CIN = gtk_label_new (_("CIN"));
  gtk_widget_show (CIN);
  gtk_fixed_put (GTK_FIXED (fixed2), CIN, 648, 40);
  gtk_widget_set_size_request (CIN, 41, 17);

  label15 = gtk_label_new (_("Liste des Factures"));
  gtk_widget_show (label15);
  gtk_fixed_put (GTK_FIXED (fixed2), label15, 136, 80);
  gtk_widget_set_size_request (label15, 169, 16);

  Retour = gtk_button_new ();
  gtk_widget_show (Retour);
  gtk_fixed_put (GTK_FIXED (fixed2), Retour, 32, 472);
  gtk_widget_set_size_request (Retour, 128, 48);

  alignment6 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment6);
  gtk_container_add (GTK_CONTAINER (Retour), alignment6);

  hbox6 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox6);
  gtk_container_add (GTK_CONTAINER (alignment6), hbox6);

  image6 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image6);
  gtk_box_pack_start (GTK_BOX (hbox6), image6, FALSE, FALSE, 0);

  label14 = gtk_label_new_with_mnemonic (_("Retour"));
  gtk_widget_show (label14);
  gtk_box_pack_start (GTK_BOX (hbox6), label14, FALSE, FALSE, 0);

  Confirmer = gtk_button_new ();
  gtk_widget_show (Confirmer);
  gtk_fixed_put (GTK_FIXED (fixed2), Confirmer, 672, 384);
  gtk_widget_set_size_request (Confirmer, 216, 45);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (Confirmer), alignment2);

  hbox2 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox2);

  image2 = gtk_image_new_from_stock ("gtk-apply", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (hbox2), image2, FALSE, FALSE, 0);

  label8 = gtk_label_new_with_mnemonic (_("Confirmer"));
  gtk_widget_show (label8);
  gtk_box_pack_start (GTK_BOX (hbox2), label8, FALSE, FALSE, 0);

  Prix = gtk_label_new (_("Prix"));
  gtk_widget_show (Prix);
  gtk_fixed_put (GTK_FIXED (fixed2), Prix, 648, 104);
  gtk_widget_set_size_request (Prix, 41, 17);

  spinbutton5_adj = gtk_adjustment_new (1, 0, 200000, 1, 10, 10);
  spinbutton5 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton5_adj), 1, 0);
  gtk_widget_show (spinbutton5);
  gtk_fixed_put (GTK_FIXED (fixed2), spinbutton5, 712, 96);
  gtk_widget_set_size_request (spinbutton5, 116, 27);

  scrolledwindow2 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_show (scrolledwindow2);
  gtk_fixed_put (GTK_FIXED (fixed2), scrolledwindow2, 56, 128);
  gtk_widget_set_size_request (scrolledwindow2, 424, 288);

  treeview1 = gtk_tree_view_new ();
  gtk_widget_show (treeview1);
  gtk_container_add (GTK_CONTAINER (scrolledwindow2), treeview1);

  Ajouter_facture = gtk_label_new (_("Ajouter facture"));
  gtk_widget_show (Ajouter_facture);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 0), Ajouter_facture);

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed3);

  scrolledwindow1 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_show (scrolledwindow1);
  gtk_fixed_put (GTK_FIXED (fixed3), scrolledwindow1, 32, 88);
  gtk_widget_set_size_request (scrolledwindow1, 400, 248);

  treeview2 = gtk_tree_view_new ();
  gtk_widget_show (treeview2);
  gtk_container_add (GTK_CONTAINER (scrolledwindow1), treeview2);

  entry2 = gtk_entry_new ();
  gtk_widget_show (entry2);
  gtk_fixed_put (GTK_FIXED (fixed3), entry2, 608, 112);
  gtk_widget_set_size_request (entry2, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry2), 8226);

  Entrez_CIN = gtk_label_new (_("Entrez CIN"));
  gtk_widget_show (Entrez_CIN);
  gtk_fixed_put (GTK_FIXED (fixed3), Entrez_CIN, 496, 112);
  gtk_widget_set_size_request (Entrez_CIN, 97, 24);

  Supprimer = gtk_button_new ();
  gtk_widget_show (Supprimer);
  gtk_fixed_put (GTK_FIXED (fixed3), Supprimer, 248, 392);
  gtk_widget_set_size_request (Supprimer, 104, 29);

  alignment4 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (Supprimer), alignment4);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment4), hbox4);

  image4 = gtk_image_new_from_stock ("gtk-delete", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_box_pack_start (GTK_BOX (hbox4), image4, FALSE, FALSE, 0);

  label12 = gtk_label_new_with_mnemonic (_("Supprimer"));
  gtk_widget_show (label12);
  gtk_box_pack_start (GTK_BOX (hbox4), label12, FALSE, FALSE, 0);

  Chercher = gtk_button_new ();
  gtk_widget_show (Chercher);
  gtk_fixed_put (GTK_FIXED (fixed3), Chercher, 624, 168);
  gtk_widget_set_size_request (Chercher, 136, 32);

  alignment5 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment5);
  gtk_container_add (GTK_CONTAINER (Chercher), alignment5);

  hbox5 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox5);
  gtk_container_add (GTK_CONTAINER (alignment5), hbox5);

  image5 = gtk_image_new_from_stock ("gtk-find", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image5);
  gtk_box_pack_start (GTK_BOX (hbox5), image5, FALSE, FALSE, 0);

  label13 = gtk_label_new_with_mnemonic (_("Chercher"));
  gtk_widget_show (label13);
  gtk_box_pack_start (GTK_BOX (hbox5), label13, FALSE, FALSE, 0);

  Liste_des_Factures = gtk_label_new (_("Liste des Factures"));
  gtk_widget_show (Liste_des_Factures);
  gtk_fixed_put (GTK_FIXED (fixed3), Liste_des_Factures, 88, 48);
  gtk_widget_set_size_request (Liste_des_Factures, 169, 16);

  Modifier = gtk_button_new ();
  gtk_widget_show (Modifier);
  gtk_fixed_put (GTK_FIXED (fixed3), Modifier, 80, 392);
  gtk_widget_set_size_request (Modifier, 96, 29);

  alignment3 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment3);
  gtk_container_add (GTK_CONTAINER (Modifier), alignment3);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment3), hbox3);

  image3 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image3);
  gtk_box_pack_start (GTK_BOX (hbox3), image3, FALSE, FALSE, 0);

  label11 = gtk_label_new_with_mnemonic (_("Modifier"));
  gtk_widget_show (label11);
  gtk_box_pack_start (GTK_BOX (hbox3), label11, FALSE, FALSE, 0);

  Modifier_Supprimer = gtk_label_new (_("Modifier/Supprimer"));
  gtk_widget_show (Modifier_Supprimer);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 1), Modifier_Supprimer);

  fixed4 = gtk_fixed_new ();
  gtk_widget_show (fixed4);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed4);

  Cin_exists = gtk_entry_new ();
  gtk_widget_show (Cin_exists);
  gtk_fixed_put (GTK_FIXED (fixed4), Cin_exists, 352, 72);
  gtk_widget_set_size_request (Cin_exists, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (Cin_exists), 8226);

  Date_exists = gtk_entry_new ();
  gtk_widget_show (Date_exists);
  gtk_fixed_put (GTK_FIXED (fixed4), Date_exists, 352, 208);
  gtk_widget_set_size_request (Date_exists, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (Date_exists), 8226);

  CIN1 = gtk_label_new (_("CIN"));
  gtk_widget_show (CIN1);
  gtk_fixed_put (GTK_FIXED (fixed4), CIN1, 288, 80);
  gtk_widget_set_size_request (CIN1, 49, 17);

  Prix1 = gtk_label_new (_("Prix"));
  gtk_widget_show (Prix1);
  gtk_fixed_put (GTK_FIXED (fixed4), Prix1, 288, 144);
  gtk_widget_set_size_request (Prix1, 49, 17);

  Date_de_confirmation1 = gtk_label_new (_("Date de confirmation"));
  gtk_widget_show (Date_de_confirmation1);
  gtk_fixed_put (GTK_FIXED (fixed4), Date_de_confirmation1, 184, 216);
  gtk_widget_set_size_request (Date_de_confirmation1, 168, 16);

  spinbutton6_adj = gtk_adjustment_new (1, 0, 100, 1, 10, 10);
  spinbutton6 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton6_adj), 1, 0);
  gtk_widget_show (spinbutton6);
  gtk_fixed_put (GTK_FIXED (fixed4), spinbutton6, 360, 136);
  gtk_widget_set_size_request (spinbutton6, 152, 24);

  Confirmer1 = gtk_button_new ();
  gtk_widget_show (Confirmer1);
  gtk_fixed_put (GTK_FIXED (fixed4), Confirmer1, 376, 264);
  gtk_widget_set_size_request (Confirmer1, 128, 48);

  alignment7 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment7);
  gtk_container_add (GTK_CONTAINER (Confirmer1), alignment7);

  hbox7 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox7);
  gtk_container_add (GTK_CONTAINER (alignment7), hbox7);

  image7 = gtk_image_new_from_stock ("gtk-apply", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image7);
  gtk_box_pack_start (GTK_BOX (hbox7), image7, FALSE, FALSE, 0);

  label19 = gtk_label_new_with_mnemonic (_("Confirmer"));
  gtk_widget_show (label19);
  gtk_box_pack_start (GTK_BOX (hbox7), label19, FALSE, FALSE, 0);

  Modifier1 = gtk_label_new (_("Modifier"));
  gtk_widget_show (Modifier1);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 2), Modifier1);

  g_signal_connect ((gpointer) Retour, "clicked",
                    G_CALLBACK (on_Retour_clicked),
                    NULL);
  g_signal_connect ((gpointer) Confirmer, "clicked",
                    G_CALLBACK (on_Confirmer_clicked),
                    NULL);
  g_signal_connect ((gpointer) Supprimer, "clicked",
                    G_CALLBACK (on_Supprimer_clicked),
                    NULL);
  g_signal_connect ((gpointer) Chercher, "clicked",
                    G_CALLBACK (on_Chercher_clicked),
                    NULL);
  g_signal_connect ((gpointer) Modifier, "clicked",
                    G_CALLBACK (on_Modifier_clicked),
                    NULL);
  g_signal_connect ((gpointer) Confirmer1, "clicked",
                    G_CALLBACK (on_Confirmer1_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (Gestion_facture, Gestion_facture, "Gestion_facture");
  GLADE_HOOKUP_OBJECT (Gestion_facture, notebook1, "notebook1");
  GLADE_HOOKUP_OBJECT (Gestion_facture, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (Gestion_facture, CIN_new, "CIN_new");
  GLADE_HOOKUP_OBJECT (Gestion_facture, calendar1, "calendar1");
  GLADE_HOOKUP_OBJECT (Gestion_facture, DATE_DE_CONFIRMATION, "DATE_DE_CONFIRMATION");
  GLADE_HOOKUP_OBJECT (Gestion_facture, CIN, "CIN");
  GLADE_HOOKUP_OBJECT (Gestion_facture, label15, "label15");
  GLADE_HOOKUP_OBJECT (Gestion_facture, Retour, "Retour");
  GLADE_HOOKUP_OBJECT (Gestion_facture, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (Gestion_facture, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (Gestion_facture, image6, "image6");
  GLADE_HOOKUP_OBJECT (Gestion_facture, label14, "label14");
  GLADE_HOOKUP_OBJECT (Gestion_facture, Confirmer, "Confirmer");
  GLADE_HOOKUP_OBJECT (Gestion_facture, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (Gestion_facture, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (Gestion_facture, image2, "image2");
  GLADE_HOOKUP_OBJECT (Gestion_facture, label8, "label8");
  GLADE_HOOKUP_OBJECT (Gestion_facture, Prix, "Prix");
  GLADE_HOOKUP_OBJECT (Gestion_facture, spinbutton5, "spinbutton5");
  GLADE_HOOKUP_OBJECT (Gestion_facture, scrolledwindow2, "scrolledwindow2");
  GLADE_HOOKUP_OBJECT (Gestion_facture, treeview1, "treeview1");
  GLADE_HOOKUP_OBJECT (Gestion_facture, Ajouter_facture, "Ajouter_facture");
  GLADE_HOOKUP_OBJECT (Gestion_facture, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (Gestion_facture, scrolledwindow1, "scrolledwindow1");
  GLADE_HOOKUP_OBJECT (Gestion_facture, treeview2, "treeview2");
  GLADE_HOOKUP_OBJECT (Gestion_facture, entry2, "entry2");
  GLADE_HOOKUP_OBJECT (Gestion_facture, Entrez_CIN, "Entrez_CIN");
  GLADE_HOOKUP_OBJECT (Gestion_facture, Supprimer, "Supprimer");
  GLADE_HOOKUP_OBJECT (Gestion_facture, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (Gestion_facture, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (Gestion_facture, image4, "image4");
  GLADE_HOOKUP_OBJECT (Gestion_facture, label12, "label12");
  GLADE_HOOKUP_OBJECT (Gestion_facture, Chercher, "Chercher");
  GLADE_HOOKUP_OBJECT (Gestion_facture, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (Gestion_facture, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (Gestion_facture, image5, "image5");
  GLADE_HOOKUP_OBJECT (Gestion_facture, label13, "label13");
  GLADE_HOOKUP_OBJECT (Gestion_facture, Liste_des_Factures, "Liste_des_Factures");
  GLADE_HOOKUP_OBJECT (Gestion_facture, Modifier, "Modifier");
  GLADE_HOOKUP_OBJECT (Gestion_facture, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (Gestion_facture, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (Gestion_facture, image3, "image3");
  GLADE_HOOKUP_OBJECT (Gestion_facture, label11, "label11");
  GLADE_HOOKUP_OBJECT (Gestion_facture, Modifier_Supprimer, "Modifier_Supprimer");
  GLADE_HOOKUP_OBJECT (Gestion_facture, fixed4, "fixed4");
  GLADE_HOOKUP_OBJECT (Gestion_facture, Cin_exists, "Cin_exists");
  GLADE_HOOKUP_OBJECT (Gestion_facture, Date_exists, "Date_exists");
  GLADE_HOOKUP_OBJECT (Gestion_facture, CIN1, "CIN1");
  GLADE_HOOKUP_OBJECT (Gestion_facture, Prix1, "Prix1");
  GLADE_HOOKUP_OBJECT (Gestion_facture, Date_de_confirmation1, "Date_de_confirmation1");
  GLADE_HOOKUP_OBJECT (Gestion_facture, spinbutton6, "spinbutton6");
  GLADE_HOOKUP_OBJECT (Gestion_facture, Confirmer1, "Confirmer1");
  GLADE_HOOKUP_OBJECT (Gestion_facture, alignment7, "alignment7");
  GLADE_HOOKUP_OBJECT (Gestion_facture, hbox7, "hbox7");
  GLADE_HOOKUP_OBJECT (Gestion_facture, image7, "image7");
  GLADE_HOOKUP_OBJECT (Gestion_facture, label19, "label19");
  GLADE_HOOKUP_OBJECT (Gestion_facture, Modifier1, "Modifier1");

  return Gestion_facture;
}
