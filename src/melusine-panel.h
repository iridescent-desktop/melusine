/*
 * Copyright (c) 2020 Ariadne Conill <ariadne@dereferenced.org>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * This software is provided 'as is' and without any warranty, express or
 * implied.  In no event shall the authors be liable for any damages arising
 * from the use of this software.
 */

#include <QtWaylandShellHelpers/qwaylandshellapplication.h>
#include <QtWaylandShellHelpers/qxdgtoplevelwindow.h>
#include <QtWaylandShellHelpers/qlayershellwindow.h>
#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QPushButton>

#ifndef MELUSINE_PANEL_H
#define MELUSINE_PANEL_H

namespace Melusine {

class Panel : public QtWaylandShellHelpers::QLayerShellWindow
{
public:
	Panel(QWidget *parent = nullptr);
	~Panel();

private:
	QHBoxLayout *m_layout;
};

}

#endif