TEMPLATE = subdirs

SUBDIRS += \
    omarket \
    produtos \
    recibos \
    usuarios

omarket.depends = usuarios produtos recibos
