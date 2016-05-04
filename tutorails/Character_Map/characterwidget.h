#ifndef CHARACTERWIDGET_H
#define CHARACTERWIDGET_H

#include <QWidget>
#include <QMouseEvent>
#include <QFont>
#include <QPaintEvent>
#include <QPainter>

class CharacterWidget : public QWidget
{
    Q_OBJECT
public:
    CharacterWidget(QWidget *parent = 0);
    QSize sizeHint() const;


signals:
    void characterSelected(const QString &Character);


public slots:
    void updateFont(const QFont &font);
    void updateSize(const QString &fontSize);
    void updateStyle(const QString &fontStyle);
    void updateFontMerging(bool enable);

protected:
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void paintEvent(QPaintEvent *e);

private:
    QFont displayFont;
    int columns;
    int lastKey;
    int squareSize;

};

#endif // CHARACTERWIDGET_H
