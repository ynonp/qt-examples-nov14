#ifndef CITYMODEL_H
#define CITYMODEL_H

#include <QStandardItemModel>

#include "cityengine.h"

class CityModel : public QStandardItemModel
{
    Q_OBJECT
public:
    explicit CityModel(QObject *parent = 0);

private:
    void setupModel();
};

#endif // CITYMODEL_H
