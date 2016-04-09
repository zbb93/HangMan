#include <gtkmm.h>
#include <HangMan.h>
#include <Man.h>

int main(int argc, char** argv) {
  int WIDTH = 250;
  int HEIGHT = 150;
  Man mn;
  HangMan hm(mn, 1);
  auto app = Gtk::Application::create(argc, argv,
      "HangMan");
  Gtk::Window window;
  window.set_default_size(200, 200);

  return app -> run(window);


}
