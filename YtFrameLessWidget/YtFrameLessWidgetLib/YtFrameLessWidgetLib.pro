QT += core gui widgets

TARGET = YtFrameLessWidgetLib
TEMPLATE = lib
DEFINES += YTFRAMELESSWIDGETLIB_LIBRARY

CONFIG += c++17

include($$PWD/core_input2018/core_input2018.pri)

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += \
    customcontrols



SOURCES += \
    customcontrols/changepassworddlg.cpp \
    customcontrols/inputdlg.cpp \
    customcontrols/insertnumberdlg.cpp \
    customcontrols/insertstringdlg.cpp \
    customcontrols/managementpassworddlg.cpp \
    customcontrols/productdialog.cpp \
    ytframelessdlg.cpp \
    ytframelesswidgetlib.cpp \
    customcontrols/ytmessageboxui.cpp \
    customcontrols/ytpasswordui.cpp \
    customcontrols/ytpassworduiex.cpp

HEADERS += \
    customcontrols/changepassworddlg.h \
    customcontrols/inputdlg.h \
    customcontrols/insertnumberdlg.h \
    customcontrols/insertstringdlg.h \
    customcontrols/managementpassworddlg.h \
    customcontrols/productdialog.h \
    version.h \
    ytframelessdlg.h \
    ytframelesswidgetlib.h \
    customcontrols/ytmessageboxui.h \
    customcontrols/ytpasswordui.h \
    customcontrols/ytpassworduiex.h

FORMS += \
    customcontrols/changepassworddlg.ui \
    customcontrols/inputdlg.ui \
    customcontrols/insertnumberdlg.ui \
    customcontrols/insertstringdlg.ui \
    customcontrols/managementpassworddlg.ui \
    customcontrols/productdialog.ui \
    ytframelessdlg.ui \
    customcontrols/ytmessageboxui.ui \
    customcontrols/ytpasswordui.ui \
    customcontrols/ytpassworduiex.ui

RESOURCES += \
    image.qrc

RC_FILE += \
    YtFrameLessWidgetLib.rc

DESTDIR= ../BIN
