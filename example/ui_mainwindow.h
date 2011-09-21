/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun 17. Jan 14:39:53 2010
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionLoad_video;
    QAction *actionSave_synthetic_video;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *labelVideoFrame;
    QLabel *labelVideoInfo;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonNextFrame;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonSeekFrame;
    QLineEdit *lineEditFrame;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonSeekMillisecond;
    QLineEdit *lineEditMillisecond;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuVideo;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 400);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logo3.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionLoad_video = new QAction(MainWindow);
        actionLoad_video->setObjectName(QString::fromUtf8("actionLoad_video"));
        actionSave_synthetic_video = new QAction(MainWindow);
        actionSave_synthetic_video->setObjectName(QString::fromUtf8("actionSave_synthetic_video"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelVideoFrame = new QLabel(centralWidget);
        labelVideoFrame->setObjectName(QString::fromUtf8("labelVideoFrame"));

        verticalLayout->addWidget(labelVideoFrame);

        labelVideoInfo = new QLabel(centralWidget);
        labelVideoInfo->setObjectName(QString::fromUtf8("labelVideoInfo"));

        verticalLayout->addWidget(labelVideoInfo);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButtonNextFrame = new QPushButton(centralWidget);
        pushButtonNextFrame->setObjectName(QString::fromUtf8("pushButtonNextFrame"));

        horizontalLayout_3->addWidget(pushButtonNextFrame);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonSeekFrame = new QPushButton(centralWidget);
        pushButtonSeekFrame->setObjectName(QString::fromUtf8("pushButtonSeekFrame"));

        horizontalLayout->addWidget(pushButtonSeekFrame);

        lineEditFrame = new QLineEdit(centralWidget);
        lineEditFrame->setObjectName(QString::fromUtf8("lineEditFrame"));

        horizontalLayout->addWidget(lineEditFrame);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButtonSeekMillisecond = new QPushButton(centralWidget);
        pushButtonSeekMillisecond->setObjectName(QString::fromUtf8("pushButtonSeekMillisecond"));

        horizontalLayout_2->addWidget(pushButtonSeekMillisecond);

        lineEditMillisecond = new QLineEdit(centralWidget);
        lineEditMillisecond->setObjectName(QString::fromUtf8("lineEditMillisecond"));

        horizontalLayout_2->addWidget(lineEditMillisecond);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 18));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuVideo = new QMenu(menuBar);
        menuVideo->setObjectName(QString::fromUtf8("menuVideo"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuVideo->menuAction());
        menuFile->addAction(actionQuit);
        menuVideo->addAction(actionLoad_video);
        menuVideo->addAction(actionSave_synthetic_video);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QTFFmpegWrapper demonstration", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionLoad_video->setText(QApplication::translate("MainWindow", "Load video", 0, QApplication::UnicodeUTF8));
        actionLoad_video->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", 0, QApplication::UnicodeUTF8));
        actionSave_synthetic_video->setText(QApplication::translate("MainWindow", "Save synthetic video", 0, QApplication::UnicodeUTF8));
        actionSave_synthetic_video->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        labelVideoFrame->setText(QApplication::translate("MainWindow", "Video frames are displayed here...", 0, QApplication::UnicodeUTF8));
        labelVideoInfo->setText(QString());
        pushButtonNextFrame->setText(QApplication::translate("MainWindow", "Next frame", 0, QApplication::UnicodeUTF8));
        pushButtonSeekFrame->setText(QApplication::translate("MainWindow", "Seek to frame", 0, QApplication::UnicodeUTF8));
        pushButtonSeekMillisecond->setText(QApplication::translate("MainWindow", "Seek to millisecond", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuVideo->setTitle(QApplication::translate("MainWindow", "Video", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
