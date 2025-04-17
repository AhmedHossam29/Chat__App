#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Chat_App.h"

class Chat_App : public QMainWindow
{
    Q_OBJECT

public:
    Chat_App(QWidget *parent = nullptr);
    ~Chat_App();

private:
    Ui::Chat_AppClass ui;
};
