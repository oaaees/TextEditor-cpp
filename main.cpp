#include "EditorWindow.h"

Fl_Window* new_view(const char* file);

int main (int argc, char **argv){
    Fl_Window* window = new_view(argv[1]);
    window->show();
    return Fl::run();
}

Fl_Window* new_view(const char* file){
    EditorWindow* w = new EditorWindow(500, 500, file);

    w->begin();
    w->display = new Fl_Text_Display(0, 0, 500, 500, "Display");
    w->display->buffer(w->textbuf);
    w->display->textfont(FL_COURIER_BOLD);
    w->textbuf->loadfile(file);
    w->end();

    return w;
}