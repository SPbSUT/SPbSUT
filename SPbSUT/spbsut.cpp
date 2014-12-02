#include "spbsut.h"

SPbSUT::SPbSUT(int argc, char *argv[])
{
    this->a = new QApplication(argc, argv);
    this->w = new MainScreen();

    this->menuWidget = new menu();
    this->newsWidget = new news();
    this->categoriesWidget = new Categories();
    this->itemsWidget = new Items();
    this->itemWidget = new Item();
    this->newsItemWidget = new newsItem();
    this->menuStatut = false;
}

QString SPbSUT::genTitle(QString title)
{
    QString first = title.split(" ").at(0);
    QString second = title.split(" ").at(1);
    QString generatedTitle("<html><head/><body><p><span style=\" font-size:20pt; font-weight:600; color:#ffffff;\">\
                           "+first+"</span><span style=\" font-size:20pt; color:#ffffff;\"> "+second+"</span></p></body></html>");

    return(generatedTitle);
}

void SPbSUT::setMenuScreen()
{
    newsWidget->hide();
    categoriesWidget->hide();
    itemsWidget->hide();
    itemWidget->hide();
    menuWidget->show();
    newsItemWidget->hide();

    screenTitle->setText(genTitle("Menu :)"));

}
void SPbSUT::setNewsScreen()
{
    menuWidget->hide();
    categoriesWidget->hide();
    itemsWidget->hide();
    itemWidget->hide();
    newsWidget->show();
    newsItemWidget->hide();

    screenTitle->setText(genTitle("Bonch News"));

}
void SPbSUT::setCategoryScreen()
{
    menuWidget->hide();
    itemsWidget->hide();
    itemWidget->hide();
    newsWidget->hide();
    categoriesWidget->show();
    newsItemWidget->hide();

    screenTitle->setText(genTitle("Bonch Information"));

}
void SPbSUT::setItemsScreen()
{
    menuWidget->hide();
    itemWidget->hide();
    newsWidget->hide();
    categoriesWidget->hide();
    itemsWidget->show();
    newsItemWidget->hide();

    screenTitle->setText(genTitle("Bonch Categorie"));

}

void SPbSUT::setItemScreen()
{
    menuWidget->hide();
    newsWidget->hide();
    categoriesWidget->hide();
    itemsWidget->hide();
    itemWidget->show();
    newsItemWidget->hide();

    screenTitle->setText(genTitle("Bonch Item"));

}
void SPbSUT::setNewsItemScreen()
{
    menuWidget->hide();
    newsWidget->hide();
    categoriesWidget->hide();
    itemsWidget->hide();
    itemWidget->hide();
    newsItemWidget->show();

    screenTitle->setText(genTitle("Bonch Item"));

}




void SPbSUT::run()
{
    w->show();


    screenTitle = w->findChild<QLabel *>("screenTitleLabel");
    screenTitle->setText(genTitle("Hello Bonch"));

    QGridLayout *contentWidget = w->findChild<QGridLayout *>("contentLayout");

    contentWidget->addWidget(newsWidget);
    contentWidget->addWidget(menuWidget);
    contentWidget->addWidget(categoriesWidget);
    contentWidget->addWidget(itemsWidget);
    contentWidget->addWidget(itemWidget);
    contentWidget->addWidget(newsItemWidget);

    newsWidget->hide();
    menuWidget->hide();
    categoriesWidget->hide();
    itemsWidget->hide();
    itemWidget->hide();
    newsItemWidget->hide();

    //Menu
    connect(w->findChild<QPushButton *>("menuButton"), &QPushButton::released,
            this, &SPbSUT::setMenuScreen);
    connect(w->findChild<QPushButton *>("news"), &QPushButton::released,
            this, &SPbSUT::setNewsScreen);
    connect(w->findChild<QPushButton *>("info"), &QPushButton::released,
            this, &SPbSUT::setCategoryScreen);


    //categories
    connect(w->findChild<QPushButton *>("pushButton"), &QPushButton::released,
            this, &SPbSUT::setItemScreen);
    connect(w->findChild<QPushButton *>("pushButton_2"), &QPushButton::released,
            this, &SPbSUT::setItemScreen);
    connect(w->findChild<QPushButton *>("pushButton_3"), &QPushButton::released,
            this, &SPbSUT::setItemScreen);


    connect(w->findChild<QWidget *>("news_1"), &QWidget::customContextMenuRequested,
            this, &SPbSUT::setNewsItemScreen);
    connect(w->findChild<QWidget *>("news_2"), &QWidget::releaseMouse,
            this, &SPbSUT::setNewsItemScreen);




    a->exec();
}
