#ifndef CATEGORIES_H
#define CATEGORIES_H

#include <QWidget>

namespace Ui {
class Categories;
}

class Categories : public QWidget
{
    Q_OBJECT

public:
    explicit Categories(QWidget *parent = 0);
    ~Categories();

private:
    Ui::Categories *ui;
};

#endif // CATEGORIES_H
