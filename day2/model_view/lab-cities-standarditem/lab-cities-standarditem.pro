QT += quick

SOURCES += main.cpp \
           citymodel.cpp \
           ../cityengine/cityengine.cpp

HEADERS += citymodel.h \
           ../cityengine/cityengine.h

INCLUDEPATH += ../cityengine

RESOURCES += lab-cities-standarditem.qrc \
             ../cityengine/cities.qrc

OTHER_FILES += main.qml
