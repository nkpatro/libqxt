CLEAN_TARGET     = QxtCore
DEFINES         += BUILD_QXT_CORE
QT               = core
QXT              =
CONVENIENCE     += $$CLEAN_TARGET

include(core.pri)
include(logengines/logengines.pri)
include(../qxtbase.pri)
