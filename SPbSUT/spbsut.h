#ifndef SPBSUT_H
#define SPBSUT_H

#include <QApplication>
#include <QLabel>
#include <QString>
#include <QGridLayout>
#include <QStringList>
#include <QPushButton>


#include "mainscreen.h"
#include "news.h"
#include "menu.h"
#include "categories.h"
#include "items.h"
#include "item.h"
#include "newsitem.h"

class SPbSUT : public QObject
{
public:
    SPbSUT(int, char **);

public:
    QString genTitle(QString);
    void run();

private:
    QApplication *a;
    MainScreen *w;
    news *newsWidget;
    menu *menuWidget;
    Categories *categoriesWidget;
    Items * itemsWidget;
    Item * itemWidget;
    QLabel *screenTitle;
    newsItem * newsItemWidget;

public slots:
    void setNewsScreen();
    void setMenuScreen();
    void setCategoryScreen();
    void setItemsScreen();
    void setItemScreen();
    void setNewsItemScreen();
    //void setQRScreen();


};

#endif // SPBSUT_H
