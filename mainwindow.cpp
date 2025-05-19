



#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);
    setWindowTitle("Sentimeter");

    //! Central Layout
    QVBoxLayout *mainLayout = new QVBoxLayout();
    centralWidget->setLayout(mainLayout);

    //! Auxiliary Layouts
    QHBoxLayout  *upperLayout = new QHBoxLayout();
    QHBoxLayout *middleLayout = new QHBoxLayout();
    QHBoxLayout  *lowerLayout = new QHBoxLayout();

    mainLayout->addLayout(upperLayout);
    mainLayout->addLayout(middleLayout);
    mainLayout->addLayout(lowerLayout);


    //! upperLayout
    QLineEdit *searchBar = new QLineEdit();
    searchBar->setPlaceholderText("Search");
    upperLayout->addWidget(searchBar);

    QPushButton *buttonClose = new QPushButton("Close");
    QPushButton *buttonSearch = new QPushButton("Search");
    upperLayout->addWidget(buttonSearch);
    upperLayout->addWidget(buttonClose);

    //! middleLayout
    //! TODO

    //! lowerLayout
    QTextBrowser *currentStatus = new QTextBrowser();
    lowerLayout->addWidget(currentStatus);

    QObject::connect(buttonClose, &QPushButton::clicked, this, &MainWindow::close);

}

MainWindow::~MainWindow()
{
}

