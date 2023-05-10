#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>

int main(int argc, char **argv) {
    Fl_Window *window = new Fl_Window(680, 360, "undefined");
    Fl_Box *box = new Fl_Box(40, 80, 600, 200, "ola alejandra t pareces a trucha");
    box->box(FL_UP_BOX);
    box->labelfont(FL_BOLD+FL_ITALIC);
    box->labelsize(32);
    box->labeltype(FL_NORMAL_LABEL);
    window->end();
    window->show(argc, argv);
    return Fl::run();
}