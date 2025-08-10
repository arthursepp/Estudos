
/* 
* Criando .exe para o app:
* gcc main.c -o hello.exe $(pkg-config --cflags --libs gtk4)

* Para abri-lo: ./nome-do-exe.exe
*/

#include <gtk/gtk.h>

static void on_click(GtkWidget *widget, gpointer data) {
    g_print("Clicou\n");
}

int main() {
    GtkWidget *window;
    return 0;
}
