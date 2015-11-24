TEMPLATE = lib
TARGET = qnetmap
CONFIG(release, debug|release) {
   DESTDIR = $${OUT_PWD}/bin/Release
   OBJECTS_DIR = $${OUT_PWD}/tmp/Release/obj
   MOC_DIR = $${OUT_PWD}/tmp/Release/moc
   PLUGINSDIR = $${OUT_PWD}/../plugins/bin/Relese
   }
CONFIG(debug, debug|release) {
   DESTDIR = $${OUT_PWD}/bin/Debug
   OBJECTS_DIR = $${OUT_PWD}/tmp/Debug/obj
   MOC_DIR = $${OUT_PWD}/tmp/Debug/moc
   PLUGINSDIR = $${OUT_PWD}/../plugins/bin/Debug
   }
UI_DIR += ./uic
RCC_DIR += ./qrc
QT += core gui network xml
CONFIG += staticlib
DEFINES += QT_NETWORK_LIB QNETMAP_LIB QT_NO_OPENSSL
INCLUDEPATH += ./src ./images
LIBS += -L"."
DEPENDPATH += .
QMAKE_POST_LINK = cp -f $${_PRO_FILE_PWD_}/../qnetmap.xml $${PLUGINSDIR}
include(qnetmap.pri)
