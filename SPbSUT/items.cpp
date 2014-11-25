#include "items.h"
#include "ui_items.h"

Items::Items(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Items)
{
    ui->setupUi(this);
}

Items::~Items()
{
    delete ui;
}
