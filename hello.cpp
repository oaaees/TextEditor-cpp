#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>

int main(int argc, char **argv) {
    Fl_Window *window = new Fl_Window(340, 180, "Te amo alejandra");
    Fl_Box *box = new Fl_Box(20, 40, 300, 100, "ola alejandra t pareces a trucha");
    box->box(FL_UP_BOX);
    box->labelfont(FL_BOLD+FL_ITALIC);
    box->labelsize(16);
    box->labeltype(FL_NORMAL_LABEL);
    window->end();
    window->show(argc, argv);
    return Fl::run();
}