TEMPLATE = subdirs

SUBDIRS += \
    omarket \
    usuarios

omarket.depends = usuarios
