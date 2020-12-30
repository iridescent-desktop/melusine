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

#include "melusine-panel.h"

using namespace Melusine;

Panel::Panel(QWidget *parent) :
	QtWaylandShellHelpers::QLayerShellWindow(parent),
	m_layout(new QHBoxLayout(this))
{
	setObjectName("Panel");
	setStyleSheet("#Panel { background-color: rgba(0.0, 0.0, 0.0, 0.5); } * { color: '#eeeeee'; }");

	setLayer(QtWaylandShellHelpers::QLayerShellWindow::Layer::Top);
	setAnchor((QtWaylandShellHelpers::QLayerShellWindow::Anchor) 13); /* top left + top right */

	setExpansionAxis(true, false);

	QLabel *lab = new QLabel("hi");
	m_layout->addWidget(lab);
}

Panel::~Panel()
{
}