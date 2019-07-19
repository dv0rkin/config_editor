#include <QApplication>
#include "main_editor.h"

int main(int argv, char* argc[])
{
  QApplication app(argv, argc);
  EditorApplication editor{};
  editor.show();
  app.exec();
}
