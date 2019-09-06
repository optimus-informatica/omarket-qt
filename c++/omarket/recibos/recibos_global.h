#ifndef RECIBOS_GLOBAL_H
#define RECIBOS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(RECIBOS_LIBRARY)
#  define RECIBOSSHARED_EXPORT Q_DECL_EXPORT
#else
#  define RECIBOSSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // RECIBOS_GLOBAL_H
