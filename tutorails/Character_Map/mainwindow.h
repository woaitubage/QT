#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QClipboard>
#include <QComboBox>
#include <QFontComboBox>
#include <QScrollArea>
#include <QCheckBox>
#include <QLineEdit>
#include <QWidget>



class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
   MainWindow();

signals:

public slots:
   void findStyles(const QFont &font);
   void findSizes(const QFont &font);
   void insertCharacter(const QString &character);

#ifndef QT_NO_CLIPBOARD
   void updateClipboard();
#endif

private:
   CharacterWidget *characterWidget;
#ifndef QT_NOCLIPBOARD
   QClipboard *clipboard;
#endif
   QComboBox *styleCombo;
   QComboBox *sizeCombo;
   QFontComboBox *fontCombo;
   QLineEdit *lineEdit;
   QScrollArea *scrollArea;
   QCheckBox *fontMerging;

};

#endif // MAINWINDOW_H
