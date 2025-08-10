
/* janela.c:
* Testes para a criação de uma janela no desktop.
*/

/*
* Compilar:
* Rode "gcc -o janela.exe janela.c `pkg-config --cflags --libs gtk4`"
* Depois, "./janela.exe".
*/

# include <gtk/gtk.h>


/* janela.c:
* Testes para a criação de uma janela no desktop.
*/

/*
* Compilar:
* Rode "gcc -o janela.exe janela.c `pkg-config --cflags --libs gtk4`"
* Depois, "./janela.exe".
*/

# include <gtk/gtk.h>

// Callback chamado quando a aplicação é ativada
static void
on_activate (GtkApplication *app, gpointer user_data) {
    GtkWidget *window;

    // Cria uma janela vinculada à aplicação
    window = gtk_application_window_new(app);

    // Define título da janela
    gtk_window_set_title(GTK_WINDOW(window), "Janela simples GTK4");

    // Define tamanho padrão da janela
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 300); // * Largura x altura

    // Exibe a janela
    gtk_window_present(GTK_WINDOW(window));
}

int main(int argc, char *argv[]) {
    GtkApplication *app;
    int status;

    // Cria a aplicação GTK
    app = gtk_application_new("com.seu.nome.app", G_APPLICATION_FLAGS_NONE);

    // Conecta o sinal de ativação
    g_signal_connect(app, "activate", G_CALLBACK(on_activate), NULL);

    // Executa a aplicação e entra no loop principal
    status = g_application_run(G_APPLICATION(app), argc, argv);

    // Libera recursos da aplicação
    g_object_unref(app);

    return status;
}
