#include "simple_tui.h"
#include "tiger.h"

class TUI: public SimpleTUI {
public:
  TUI() {
  }
 
  DSPOMDP* InitializeModel(option::Option* options) {
    DSPOMDP* model = new Tiger();
    return model;
  }
  
  void InitializeDefaultParameters() {
  }
};

int main(int argc, char* argv[]) {
  return TUI().run(argc, argv);
}
