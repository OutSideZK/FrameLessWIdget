INCLUDEPATH += $$PWD
INCLUDEPATH += $$PWD/../core_pinyin
include ($$PWD/../core_pinyin/core_pinyin.pri)

RESOURCES += \
    $$PWD/input2018.qrc

FORMS += \
    $$PWD/frminput2018.ui

HEADERS += \
    $$PWD/frminput2018.h \
    $$PWD/googlepinyin.h

SOURCES += \
    $$PWD/frminput2018.cpp \
    $$PWD/googlepinyin.cpp
