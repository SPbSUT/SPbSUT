#ifndef ITEMS_H
#define ITEMS_H

#include <QWidget>

namespace Ui {
class Items;
}

class Items : public QWidget
{
    Q_OBJECT

public:
    explicit Items(QWidget *parent = 0);
    ~Items();

private:
    Ui::Items *ui;
};

#endif // ITEMS_H
