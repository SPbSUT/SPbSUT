#ifndef NEWS_H
#define NEWS_H

#include <QWidget>

namespace Ui {
class news;
}

class news : public QWidget
{
    Q_OBJECT

public:
    explicit news(QWidget *parent = 0);
    ~news();

private:
    Ui::news *ui;
};

#endif // NEWS_H
