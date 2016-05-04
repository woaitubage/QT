#include "modelex.h"

modelex::modelex(QObject *parent):QAbstractTableModel(parent)
{
    //QMap<int,QString> armymap;
   // QMap<int,QString> weaponmap;

    armymap[1]="空军";
    armymap[2]="海军";
    armymap[3]="陆军";

    weaponmap[1]="AK47";
    weaponmap[2]="M16";
    weaponmap[3]="M18";

    showModel();


}

void modelex::showModel()
{
    header<<"兵种"<<"兵器";
    army<<1<<2<<3<<2<<1;
    weapon<<1<<2<<3<<2<<1;

}

int modelex::rowCount(const QModelIndex &parent) const
{
    return army.size();

}

int modelex::columnCount(const QModelIndex &parent) const
{
    return 2;

}

QVariant modelex::data(const QModelIndex &index, int role) const
{
    if(!index.isValid())
    {
        return QVariant();
    }

    if(role==Qt::DisplayRole)
    {
        switch(index.column())
        {
        case 0:
            return armymap[army[index.row()]];


            break;
        case 1:
            return weaponmap[weapon[index.row()]];
            break;
        default :
            return QVariant();
        }


    }


    return QVariant();
}


QVariant modelex::headerData(int section, Qt::Orientation orientation, int role) const
{
    if(role==Qt::DisplayRole && Qt::Horizontal==orientation)
    {
        return header[section];       //返回表的开头
    }
    else
    {
        return QAbstractTableModel::headerData(section,orientation,role);


    }


}

