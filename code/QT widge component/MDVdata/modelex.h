
#include <QAbstractTableModel>
#include <QVector>
#include <QMap>
#include <QStringList>
#include <QWidget>
#include <QVariant>



class modelex : public QAbstractTableModel
{
    //Q_OBJECT

public:
    explicit modelex(QObject *parent=0);

    //重写
    virtual int rowCount(const QModelIndex &parent=QModelIndex()) const;
    virtual int columnCount(const QModelIndex &parent=QModelIndex()) const;

    QVariant data(const QModelIndex &index, int role) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;

private:
    QVector<int> army;
    QVector<int> weapon;

    QMap<int,QString> armymap;
    QMap<int,QString> weaponmap;

    QStringList weaponlist;
    QStringList armylist;
    QStringList header;

    void showModel();


};

