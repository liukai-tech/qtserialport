/****************************************************************************
**
** Copyright (C) 2011-2012 Denis Shienkov <scapig2@yandex.ru>
** Copyright (C) 2011 Sergey Belyashov <Sergey.Belyashov@gmail.com>
** Copyright (C) 2012 Laszlo Papp <lpapp@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtCore module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef SERIALPORTINFO_P_H
#define SERIALPORTINFO_P_H

#include "serialport-global.h"

#include <QtCore/qstring.h>

QT_BEGIN_NAMESPACE_SERIALPORT

class SerialPortInfoPrivate
{
public:
    SerialPortInfoPrivate() {}
    ~SerialPortInfoPrivate() {}

    QString portName;
    QString device;
    QString description;
    QString manufacturer;
    QString vendorIdentifier;
    QString productIdentifier;
};

class SerialInfoPrivateDeleter
{
public:
    static void cleanup(SerialPortInfoPrivate *p) {
        delete p;
    }
};

QT_END_NAMESPACE_SERIALPORT

#endif // SERIALPORTINFO_P_H
