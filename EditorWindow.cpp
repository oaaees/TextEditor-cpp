#include "EditorWindow.h"

EditorWindow::EditorWindow(int w, int h, const char *title) : Fl_Double_Window(w, h, title) {
    textbuf = new Fl_Text_Buffer;
};

EditorWindow::~EditorWindow(){}

