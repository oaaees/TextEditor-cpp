#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Text_Display.H>

class EditorWindow : public Fl_Double_Window {
    private:
    public: 
        EditorWindow();
        EditorWindow(int w, int h, const char * title);
        ~EditorWindow();

        Fl_Text_Display *display;
        Fl_Text_Buffer *textbuf;
};