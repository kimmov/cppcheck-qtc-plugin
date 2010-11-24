#include <QtPlugin>
#include <QStringList>
#include "cppcheckplugin.h"

CppcheckPlugin::CppcheckPlugin()
{
}

CppcheckPlugin::~CppcheckPlugin()
{
}

bool CppcheckPlugin::initialize(const QStringList &args, QString *errMsg)
{
    Q_UNUSED(args);
    Q_UNUSED(errMsg);
    return true;
}

void CppcheckPlugin::extensionsInitialized()
{
}

void CppcheckPlugin::shutdown()
{
}

Q_EXPORT_PLUGIN(CppcheckPlugin)
