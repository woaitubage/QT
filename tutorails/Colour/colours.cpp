#include "colours.h"
#include "ui_colours.h"
#include <QPainter>

Colours::Colours(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Colours)
{
    ui->setupUi(this);
}

void Colours::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e);
    doPainting();

}

Colours::~Colours()
{
    delete ui;
}

void Colours::doPainting()
{
    QPainter painter(this);
    painter.setPen(QColor("#d4d4d4"));

    painter.setBrush(QBrush("#c56c00"));
    painter.drawRect(10, 15, 90, 60);

    painter.setBrush(QBrush("#1ac500"));
      painter.drawRect(130, 15, 90, 60);

      painter.setBrush(QBrush("#539e47"));
      painter.drawRect(250, 15, 90, 60);

      painter.setBrush(QBrush("#004fc5"));
      painter.drawRect(10, 105, 90, 60);

      painter.setBrush(QBrush("#c50024"));
      painter.drawRect(130, 105, 90, 60);

      painter.setBrush(QBrush("#9e4757"));
      painter.drawRect(250, 105, 90, 60);

      painter.setBrush(QBrush("#5f3b00"));
      painter.drawRect(10, 195, 90, 60);

      painter.setBrush(QBrush("#4c4c4c"));
      painter.drawRect(130, 195, 90, 60);

      painter.setBrush(QBrush("#785f36"));
      painter.drawRect(250, 195, 90, 60);








}
