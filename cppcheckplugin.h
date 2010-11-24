#ifndef CPPCHECKPLUGIN_H
#define CPPCHECKPLUGIN_H

#include <extensionsystem/iplugin.h>

class CppcheckPlugin : public ExtensionSystem::IPlugin
{
public:
    CppcheckPlugin();
    ~CppcheckPlugin();
    void extensionsInitialized();
    bool initialize(const QStringList &arguments, QString *errorString);
    void shutdown();
};

#endif // CPPCHECKPLUGIN_H
