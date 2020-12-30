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

#include <QDateTime>
#include <QDebug>
#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QPushButton>
#include <QTimer>

#include "melusine-clock.h"

using namespace Melusine;

ClockWidget::ClockWidget(QWidget *parent) :
	QWidget(parent),
	mLayout(new QHBoxLayout(this)),
	mDateLabel(new QLabel()),
	mTimeLabel(new QLabel()),
	mClockTimer(new QTimer(this))
{
	mLayout->addWidget(mDateLabel);
	mLayout->setAlignment(mDateLabel, Qt::AlignCenter);

	mLayout->addWidget(mTimeLabel);
	mLayout->setAlignment(mTimeLabel, Qt::AlignCenter);

	mClockTimer->setInterval(1000);
	mClockTimer->start();

	updateTime();
	QObject::connect(mClockTimer, &QTimer::timeout, this, &ClockWidget::updateTime);
}

ClockWidget::~ClockWidget()
{
}

void
ClockWidget::updateTime()
{
	auto dt = QDateTime::currentDateTime();

	mDateLabel->setText(QLocale::system().toString(dt, "ddd, MMM d"));
	mTimeLabel->setText(QLocale::system().toString(dt, "hh:mm"));
}