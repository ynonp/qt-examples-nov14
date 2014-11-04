#include <QApplication>
#include <QtWidgets>
#include <QtCore>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // change this to any directory on the machine
    // to see its content
    QString pathToShow = QDir::currentPath();

    // Create a QFileSystemModel
    QFileSystemModel model;
    // And set the root file system directory of the model
    model.setRootPath(pathToShow);

    // Create a TreeView
    QTreeView tv;
    // That shows our QFileSystemModel
    tv.setModel(&model);

    // Take the model's root index
    QModelIndex root = model.index(pathToShow);

    // And set the root of the view to the same index
    tv.setRootIndex(root);

    // Finally show the view
    tv.show();

    return a.exec();
}
