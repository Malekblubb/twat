/*
 * Copyright (c) 2013 Christoph Malek
 * See LICENSE for more information.
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDebug>
#include <QPushButton>
#include <QMainWindow>
#include <QMouseEvent>
#include <QWidget>
#include <QTreeWidget>
#include <core/client.h>


namespace Ui {
	class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT
	
public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

private:
	void OnInit();
	void OnExit();

private slots:

	void on_m_twMainMenu_clicked(const QModelIndex &index);

private:
	Ui::MainWindow *m_ui;

protected:
	TWAT::CClient *m_client;
};


// some custom ui element funcs
class CustomUIElements : public MainWindow
{
	Q_OBJECT

public slots:
	void ToggleSwitch(QPushButton *btn, std::string settingKey);
};


#endif // MAINWINDOW_H
