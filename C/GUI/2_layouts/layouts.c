/*
* layouts.c
? -- Testes com os tipos de layouts do GTK.

* Tipos:

* GtkBox: Organiza os widgets (elementos) em linha horizontal ou vertical.
* GtkWidget *box = gt_box_new(GTK_ORIENTATION_VERTICAL, 5)

* GTK_ORIENTATION_VERTICAL ou GTK_ORIENTATION_HORIZONTAL — direção.

* Argumentos:
* Espaçamento (spacing) entre widgets.
* Alinhamento (halign, valign).
* Expandir/preencher (gtk_box_append() para adicionar widgets).
* --------------------------------------------------------------------------

* GtkGrid: Organiza os itens em uma grade com linhas e colunas:
* GtkWidget *grid = gtk_grid_new();
* gtk_grid_attach(GTK_GRID(grid), widget, coluna, linha, largura, altura);

* Argumentos:
* row-spacing / column-spacing.
* Expandir células individualmente.
* --------------------------------------------------------------------------

* GtkFlowBox: Organiza os widgets automaticamente na janela conforme o espaço necessário (responsividade):
* GtkWidget *flow = gtk_flow_box_new();
* gtk_flow_box_append(GTK_FLOW_BOX(flow), widget);

* Direção de fluxo.
* Espaçamento.
* Seleção de itens (gtk_flow_box_set_selection_mode()).
* --------------------------------------------------------------------------

* GtkNotebook: Organiza a interface em abas:

* GtkWidget *notebook = gtk_notebook_new();
* gtk_notebook_append_page(GTK_NOTEBOOK(notebook), widget, gtk_label_new("Aba 1"));

* Posição das abas (topo, baixo, esquerda, direita).
* Alternância via teclado ou mouse.
* --------------------------------------------------------------------------

* gcc -o layouts.exe layouts.c `pkg-config --cflags --libs gtk4`
*/

#include <gtk/gtk.h>

static void
on_activate(GtkApplication *app, gpointer user_data) {
    GtkWidget *window;
    GtkWidget *notebook;
    GtkWidget *page1_box;
    GtkWidget *page2_box;
    GtkWidget *label_page1;
    GtkWidget *label_page2;
    GtkWidget *button1;
    GtkWidget *button2;    

    window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(window), "Minha nova janela"); // * Título personalizado
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 300); // * Largura x Altura

    notebook = gtk_notebook_new();

    // * Página 1:
    page1_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5); // * Orientação, espaçamento entre as linhas
    gtk_widget_set_margin_top(page1_box, 10);
    gtk_widget_set_margin_top(page1_box, 10);
    gtk_widget_set_margin_bottom(page1_box, 10);
    gtk_widget_set_margin_start(page1_box, 10);
    gtk_widget_set_margin_end(page1_box, 10);

    button1 = gtk_button_new_with_label("Botão da Página 1");
    gtk_box_append(GTK_BOX(page1_box), button1);

    label_page1 = gtk_label_new("Página 1");
    gtk_notebook_append_page(GTK_NOTEBOOK(notebook), page1_box, label_page1);

    //* Página 2:
    page2_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_widget_set_margin_top(page2_box, 10);
    gtk_widget_set_margin_bottom(page2_box, 10);
    gtk_widget_set_margin_start(page2_box, 10);
    gtk_widget_set_margin_end(page2_box, 10);

    button2 = gtk_button_new_with_label("Botão da Página 2");
    gtk_box_append(GTK_BOX(page2_box), button2);

    label_page2 = gtk_label_new("Página 2");
    gtk_notebook_append_page(GTK_NOTEBOOK(notebook), page2_box, label_page2);

    // Adiciona o GtkNotebook à janela
    gtk_window_set_child(GTK_WINDOW(window), notebook);

    gtk_window_present(GTK_WINDOW(window));
}


int main(int argc, char *argv[]) {
    GtkApplication *app;
    int status;

    app = gtk_application_new("com.seu.nome.app", G_APPLICATION_FLAGS_NONE);

    g_signal_connect(app, "activate", G_CALLBACK(on_activate), NULL);

    status = g_application_run(G_APPLICATION(app), argc, argv);

    g_object_unref(app);

    return status;
}
