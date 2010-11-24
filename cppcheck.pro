TEMPLATE = lib
TARGET = Cppcheck

QTCREATOR_SOURCES = $$(QTC_SOURCE)

IDE_BUILD_TREE = $$(QTC_BUILD)

include($$QTCREATOR_SOURCES/src/qtcreatorplugin.pri)
include($$QTCREATOR_SOURCES/src/plugins/coreplugin/coreplugin.pri)

#PROVIDER = Cppcheck
#DESTDIR = $$IDE_PLUGIN_PATH/Cppcheck

LIBS += -L$$IDE_PLUGIN_PATH/Nokia

HEADERS += cppcheckplugin.h
SOURCES += cppcheckplugin.cpp
OTHER_FILES += Cppcheck.pluginspec
