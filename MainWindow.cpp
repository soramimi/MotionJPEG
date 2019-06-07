#include "MainWindow.h"
#include "MotionJPEG.h"
#include "ui_MainWindow.h"
#include <QBuffer>
#include <QDebug>
#include <QFile>
#include <stdint.h>


MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);

	QByteArray jpeg;
	{
		QFile file("lena.jpg");
		if (file.open(QFile::ReadOnly)) {
			jpeg = file.readAll();
		}
	}

	MotionJPEG mjpg;
	MotionJPEG::VideoOption vopt;
	vopt.width = 512;
	vopt.height = 512;
	mjpg.config("lena.avi", vopt, MotionJPEG::AudioOption::None());
	mjpg.create();
	for (int i = 0; i < 300; i++) {
		mjpg.writeVideoFrame(jpeg);
	}
	mjpg.close();
}

MainWindow::~MainWindow()
{
	delete ui;
}
