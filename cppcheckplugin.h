#ifndef CPPCHECKPLUGIN_H
#define CPPCHECKPLUGIN_H

#include <extensionsystem/iplugin.h>

class CppcheckPlugin : public ExtensionSystem::IPlugin
{
    Q_OBJECT
public:
    CppcheckPlugin();
    ~CppcheckPlugin();
    void extensionsInitialized();
    bool initialize(const QStringList &arguments, QString *errorString);
    void shutdown();

protected slots:
    void check();
};

#endif // CPPCHECKPLUGIN_H
