#include "main_editor.h"

#include <QMessageBox>

EditorApplication::EditorApplication(QWidget* parent) : QMainWindow(parent)
{
  /***************************************** Create menu ***********************************/
  QMenu* mnFile = new QMenu("&File");
  mnFile->addAction("&Open...", this, SLOT(onOpen()), QKeySequence("CTRL+O"));
  mnFile->addAction("&Save", this, SLOT(onSave()), QKeySequence("CTRL+S"));
  mnFile->addAction("S&ave As...", this, SLOT(onSaveAs()));
  mnFile->addSeparator();
  mnFile->addAction("&Quit", this, SLOT(quit()), QKeySequence("CTRL+Q"));

  QMenu* mnHelp = new QMenu("&Help");
  mnHelp->addAction("About", this, SLOT(onAbout()), Qt::Key_F1);

  menuBar()->addMenu(mnFile);
  menuBar()->addMenu(mnHelp);
  /****************************************************************************************/
}

void EditorApplication::onOpen()
{
  QString str = QFileDialog::getOpenFileName();
  if (!str.isEmpty())
  {
    QMessageBox::information(nullptr, "Test", str);
  }
}

void EditorApplication::onSave()
{
  /// @todo Add functional
  return;
}

void EditorApplication::onSaveAs()
{
  /// @todo Add functional
  return;
}

void EditorApplication::onAbout()
{
  /// @todo Add functional
  return;
}
