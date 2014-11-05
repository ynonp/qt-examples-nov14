#include <QtWidgets>

// TASK: Uncomment this
// #include "cityengine.h"
// #include "citytablemodel.h"

int main( int argc, char** argv ) {
    QApplication app( argc, argv );


    // TASK: Uncomment this
    // CityEngine *engine = new CityEngine(QCoreApplication::instance());

    // TASK: Uncomment this
    // CityTableModel *model = new CityTableModel(QCoreApplication::instance());
    // model->setInput(engine);
    QListView* list = new QListView;

    // TASK: Uncomment this
    // list->setModel( model );

    list->setWindowTitle( "QListView" );
    list->show();

    QTreeView* tree = new QTreeView;

    // TASK: Uncomment this
    // tree->setModel( model );

    tree->setWindowTitle( "QTreeView" );
    tree->show();

    QTableView* table = new QTableView;

    // TASK: Uncomment this
    // table->setModel( model );

    table->setWindowTitle( "QTableView" );
    table->show();

    return app.exec();
}
