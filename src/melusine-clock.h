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

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QPushButton>

#ifndef MELUSINE_CLOCK_H
#define MELUSINE_CLOCK_H

namespace Melusine {

class ClockWidget : public QWidget
{
public:
	ClockWidget(QWidget *parent = nullptr);
	~ClockWidget();

private:
	QHBoxLayout *mLayout;
	QLabel *mDateLabel;
	QLabel *mTimeLabel;
	QTimer *mClockTimer;

	void updateTime();
};

}

#endif