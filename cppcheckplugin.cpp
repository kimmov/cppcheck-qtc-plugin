#include <QtPlugin>
#include <QList>
#include <QStringList>
#include <QMenu>
#include <QAction>
#include <QKeySequence>
#include <coreplugin/coreconstants.h>
#include <coreplugin/actionmanager/actionmanager.h>
#include <coreplugin/actionmanager/actioncontainer.h>
#include <coreplugin/actionmanager/command.h>
#include <coreplugin/icore.h>
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

    Core::ActionManager *am = Core::ICore::instance()->actionManager();
    Core::ActionContainer* submenu = am->createMenu("CppcheckPlugin.CppcheckMenu");
    submenu->menu()->setTitle("Cppcheck");

    Core::Command* cmd = am->registerAction(new QAction(this),
            "CppcheckPlugin.Check",
            QList<int>() << Core::Constants::C_GLOBAL_ID);
    cmd->action()->setText("Check");

    am->actionContainer(Core::Constants::M_TOOLS)->addMenu(submenu);
    submenu->addAction(cmd);

    return true;
}

void CppcheckPlugin::extensionsInitialized()
{
}

void CppcheckPlugin::shutdown()
{
}

Q_EXPORT_PLUGIN(CppcheckPlugin)
