/*
* inputs.c
? -- Insira aqui o que este arquivo faz
* gcc -o inputs.exe inputs.c `pkg-config --cflags --libs gtk4`
*/

#include <gtk/gtk.h>
static void
on_activate(GtkApplication *app, gpointer user_data) {
    GtkWidget *window;

    window = gtk_application_window_new(app);

    gtk_window_set_title(GTK_WINDOW(window), "Minha nova janela"); // * Título personalizado

    gtk_window_set_default_size(GTK_WINDOW(window), 400, 300); // * Largura x Altura

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
