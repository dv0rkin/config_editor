#pragma once

#include <QMainWindow>
#include <QFileDialog>
#include <QTextStream>
#include <QMenuBar>

class EditorApplication : public QMainWindow
{
    Q_OBJECT
public:
    EditorApplication(QWidget* parent = nullptr);
public slots:
    // Menu "File"
    void onOpen();
    void onSave();
    void onSaveAs();

    // Menu "Help"
    void onAbout();
private:
    QString m_fileName;
};
