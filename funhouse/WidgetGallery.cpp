/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** BSD License Usage
** Alternatively, you may use this file under the terms of the BSD license
** as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd nor the names of its
**     contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "WidgetGallery.h"
#include "phantomstyle.h"
#include <QCommonStyle>
#include <QToolButton>
#include <QtWidgets>
#include <QPalette>
#include <QString>

QPalette global_palette;

//! [0]
WidgetGallery::WidgetGallery(QWidget* parent) : QWidget(parent) {
  global_palette.setColor(QPalette::Active, QPalette::Window, QStringLiteral("#3B3B3D"));
  global_palette.setColor(QPalette::Inactive, QPalette::Window, QStringLiteral("#404042"));
  global_palette.setColor(QPalette::Disabled, QPalette::Window, QStringLiteral("#424242"));

  global_palette.setColor(QPalette::Active, QPalette::WindowText, QStringLiteral("#CACBCE"));
  global_palette.setColor(QPalette::Inactive, QPalette::WindowText, QStringLiteral("#C8C8C6"));
  global_palette.setColor(QPalette::Disabled, QPalette::WindowText, QStringLiteral("#707070"));

  global_palette.setColor(QPalette::Active, QPalette::Text, QStringLiteral("#CACBCE"));
  global_palette.setColor(QPalette::Inactive, QPalette::Text, QStringLiteral("#C8C8C6"));
  global_palette.setColor(QPalette::Disabled, QPalette::Text, QStringLiteral("#707070"));

#if (QT_VERSION >= QT_VERSION_CHECK(5, 12, 0))
  global_palette.setColor(QPalette::Active, QPalette::PlaceholderText, QStringLiteral("#7D7D82"));
  global_palette.setColor(QPalette::Inactive, QPalette::PlaceholderText, QStringLiteral("#87888C"));
  global_palette.setColor(QPalette::Disabled, QPalette::PlaceholderText, QStringLiteral("#737373"));
#endif

  global_palette.setColor(QPalette::Active, QPalette::BrightText, QStringLiteral("#252627"));
  global_palette.setColor(QPalette::Inactive, QPalette::BrightText, QStringLiteral("#2D2D2F"));
  global_palette.setColor(QPalette::Disabled, QPalette::BrightText, QStringLiteral("#333333"));

  global_palette.setColor(QPalette::Active, QPalette::Base, QStringLiteral("#27272A"));
  global_palette.setColor(QPalette::Inactive, QPalette::Base, QStringLiteral("#2A2A2D"));
  global_palette.setColor(QPalette::Disabled, QPalette::Base, QStringLiteral("#343437"));

  global_palette.setColor(QPalette::Active, QPalette::AlternateBase, QStringLiteral("#2C2C30"));
  global_palette.setColor(QPalette::Inactive, QPalette::AlternateBase, QStringLiteral("#2B2B2F"));
  global_palette.setColor(QPalette::Disabled, QPalette::AlternateBase, QStringLiteral("#36363A"));

  global_palette.setColor(QPalette::All, QPalette::ToolTipBase, QStringLiteral("#2D532D"));
  global_palette.setColor(QPalette::All, QPalette::ToolTipText, QStringLiteral("#BFBFBF"));

  global_palette.setColor(QPalette::Active, QPalette::Button, QStringLiteral("#28282B"));
  global_palette.setColor(QPalette::Inactive, QPalette::Button, QStringLiteral("#28282B"));
  global_palette.setColor(QPalette::Disabled, QPalette::Button, QStringLiteral("#2B2A2A"));

  global_palette.setColor(QPalette::Active, QPalette::ButtonText, QStringLiteral("#B9B9BE"));
  global_palette.setColor(QPalette::Inactive, QPalette::ButtonText, QStringLiteral("#9E9FA5"));
  global_palette.setColor(QPalette::Disabled, QPalette::ButtonText, QStringLiteral("#73747E"));

  global_palette.setColor(QPalette::Active, QPalette::Highlight, QStringLiteral("#2D532D"));
  global_palette.setColor(QPalette::Inactive, QPalette::Highlight, QStringLiteral("#354637"));
  global_palette.setColor(QPalette::Disabled, QPalette::Highlight, QStringLiteral("#293D29"));

  global_palette.setColor(QPalette::Active, QPalette::HighlightedText, QStringLiteral("#CCCCCC"));
  global_palette.setColor(QPalette::Inactive, QPalette::HighlightedText, QStringLiteral("#CECECE"));
  global_palette.setColor(QPalette::Disabled, QPalette::HighlightedText, QStringLiteral("#707070"));

  global_palette.setColor(QPalette::All, QPalette::Light, QStringLiteral("#414145"));
  global_palette.setColor(QPalette::All, QPalette::Midlight, QStringLiteral("#39393C"));
  global_palette.setColor(QPalette::All, QPalette::Mid, QStringLiteral("#2F2F32"));
  global_palette.setColor(QPalette::All, QPalette::Dark, QStringLiteral("#202022"));
  global_palette.setColor(QPalette::All, QPalette::Shadow, QStringLiteral("#19191A"));

  global_palette.setColor(QPalette::All, QPalette::Link, QStringLiteral("#68B668"));
  global_palette.setColor(QPalette::Disabled, QPalette::Link, QStringLiteral("#74A474"));
  global_palette.setColor(QPalette::All, QPalette::LinkVisited, QStringLiteral("#75B875"));
  global_palette.setColor(QPalette::Disabled, QPalette::LinkVisited, QStringLiteral("#77A677"));

  originalPalette = QApplication::palette();

  styleComboBox = new QComboBox;
  styleComboBox->addItem("Phantom");
  styleComboBox->addItems(QStyleFactory::keys());
  styleComboBox->addItem("Common");
  // custom font useful for testing font issues in combo box
  // styleComboBox->setFont(QFontDatabase::systemFont(QFontDatabase::FixedFont));

  styleLabel = new QLabel(tr("Style:"));
  styleLabel->setBuddy(styleComboBox);

  useStylePaletteCheckBox = new QCheckBox(tr("Use style's standard palette"));
  useStylePaletteCheckBox->setChecked(false);

  disableWidgetsCheckBox = new QCheckBox(tr("Disable widgets"));

  createTopLeftGroupBox();
  createTopRightGroupBox();
  createBottomLeftTabWidget();
  createBottomRightGroupBox();
  createProgressBar();
  //! [0]

  //! [1]
  connect(styleComboBox, SIGNAL(activated(QString)),
          //! [1] //! [2]
          this, SLOT(changeStyle(QString)));
  connect(useStylePaletteCheckBox, SIGNAL(toggled(bool)), this,
          SLOT(changePalette()));
  connect(disableWidgetsCheckBox, SIGNAL(toggled(bool)), topLeftGroupBox,
          SLOT(setDisabled(bool)));
  connect(disableWidgetsCheckBox, SIGNAL(toggled(bool)), topRightGroupBox,
          SLOT(setDisabled(bool)));
  connect(disableWidgetsCheckBox, SIGNAL(toggled(bool)), bottomLeftTabWidget,
          SLOT(setDisabled(bool)));
  connect(disableWidgetsCheckBox, SIGNAL(toggled(bool)), bottomRightGroupBox,
          SLOT(setDisabled(bool)));
  //! [2]

  //! [3]
  QHBoxLayout* topLayout = new QHBoxLayout;
  //! [3] //! [4]
  topLayout->addWidget(styleLabel);
  topLayout->addWidget(styleComboBox);
  topLayout->addStretch(1);
  topLayout->addWidget(useStylePaletteCheckBox);
  topLayout->addWidget(disableWidgetsCheckBox);

  QGridLayout* mainLayout = new QGridLayout;
  mainLayout->addLayout(topLayout, 0, 0, 1, 2);
  mainLayout->addWidget(topLeftGroupBox, 1, 0);
  mainLayout->addWidget(topRightGroupBox, 1, 1);
  mainLayout->addWidget(bottomLeftTabWidget, 2, 0);
  mainLayout->addWidget(bottomRightGroupBox, 2, 1);
  mainLayout->addWidget(progressBar, 3, 0, 1, 2);
  mainLayout->setRowStretch(1, 1);
  mainLayout->setRowStretch(2, 1);
  mainLayout->setColumnStretch(0, 1);
  mainLayout->setColumnStretch(1, 1);
  setLayout(mainLayout);

  setWindowTitle(tr("Styles"));
  // changeStyle("Phantom");
}
//! [4]

//! [5]
void WidgetGallery::changeStyle(const QString& styleName)
//! [5] //! [6]
{
  if (styleName == "Phantom") {
    QApplication::setStyle(new PhantomStyle);
    QApplication::setPalette(QApplication::palette());
  } else if (styleName == "Common") {
    QApplication::setStyle(new QCommonStyle);
  } else {
    QApplication::setStyle(QStyleFactory::create(styleName));
  }
  changePalette();
}
//! [6]

//! [7]
void WidgetGallery::changePalette()
//! [7] //! [8]
{
  // if (useStylePaletteCheckBox->isChecked())
  //   QApplication::setPalette(QApplication::style()->standardPalette());
  // else
  //  QApplication::setPalette(global_palette);
}
//! [8]

void WidgetGallery::showEvent(QShowEvent *event)
{
  static bool shown = false;
  if (!shown) {
  //  QApplication::setPalette(QApplication::palette());
    shown = true;
  }
  QWidget::showEvent(event);
}

//! [9]
void WidgetGallery::advanceProgressBar()
//! [9] //! [10]
{
  // int curVal = progressBar->value();
  // int maxVal = progressBar->maximum();
  // progressBar->setValue(curVal + (maxVal - curVal) / 100);
}
//! [10]

//! [11]
void WidgetGallery::createTopLeftGroupBox()
//! [11] //! [12]
{
  topLeftGroupBox = new QGroupBox(tr("Group 1"));

  radioButton1 = new QRadioButton(tr("Radio button 1"));
  radioButton2 = new QRadioButton(tr("Radio button 2"));
  radioButton1->setChecked(true);

  checkBox = new QCheckBox(tr("Tri-state check box"));
  checkBox->setTristate(true);
  checkBox->setCheckState(Qt::PartiallyChecked);

  auto cb1 = new QCheckBox(tr("Check box"));
  cb1->setChecked(true);

  QVBoxLayout* layout = new QVBoxLayout;
  layout->addWidget(radioButton1);
  layout->addWidget(radioButton2);
  layout->addWidget(checkBox);
  layout->addWidget(cb1);
  layout->addStretch(1);
  topLeftGroupBox->setLayout(layout);
}
//! [12]

void WidgetGallery::createTopRightGroupBox() {
  topRightGroupBox = new QGroupBox(tr("Group 2"));

  auto normalPushButton = new QPushButton(tr("Normal Push Button"));

  defaultPushButton = new QPushButton(tr("Default Push Button"));
  defaultPushButton->setDefault(true);

  flatPushButton = new QPushButton(tr("Flat Push Button"));
  flatPushButton->setFlat(true);

  togglePushButton = new QPushButton(tr("Toggle Push Button"));
  togglePushButton->setCheckable(true);
  togglePushButton->setChecked(true);

  QVBoxLayout* layout = new QVBoxLayout;
  layout->addWidget(normalPushButton);
  layout->addWidget(defaultPushButton);
  layout->addWidget(flatPushButton);
  layout->addWidget(togglePushButton);
  layout->addStretch(1);
  topRightGroupBox->setLayout(layout);
}

void WidgetGallery::createBottomLeftTabWidget() {
  bottomLeftTabWidget = new QTabWidget;
  bottomLeftTabWidget->setSizePolicy(QSizePolicy::Preferred,
                                     QSizePolicy::Ignored);

  QWidget* tab1 = new QWidget;
  tableWidget = new QTableWidget(10, 10);
  tableWidget->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
  tableWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);

  QHBoxLayout* tab1hbox = new QHBoxLayout;
  tab1hbox->setMargin(5);
  tab1hbox->addWidget(tableWidget);
  tab1->setLayout(tab1hbox);

  QWidget* tab2 = new QWidget;
  textEdit = new QTextEdit;

  textEdit->setPlainText(tr("Twinkle, twinkle, little star,\n"
                            "How I wonder what you are.\n"
                            "Up above the world so high,\n"
                            "Like a diamond in the sky.\n"
                            "Twinkle, twinkle, little star,\n"
                            "How I wonder what you are!\n"));

  QHBoxLayout* tab2hbox = new QHBoxLayout;
  tab2hbox->setMargin(5);
  tab2hbox->addWidget(textEdit);
  tab2->setLayout(tab2hbox);

  bottomLeftTabWidget->addTab(tab1, tr("Table"));
  bottomLeftTabWidget->addTab(tab2, tr("Text Edit"));
}

void WidgetGallery::createBottomRightGroupBox() {
  bottomRightGroupBox = new QGroupBox(tr("Group 3"));
  bottomRightGroupBox->setCheckable(true);
  bottomRightGroupBox->setChecked(true);

  lineEdit = new QLineEdit("s3cRe7");
  lineEdit->setEchoMode(QLineEdit::Password);

  auto normalLineEdit = new QLineEdit("Normal line edit gjpqy Ll1|");

  spinBox = new QSpinBox(bottomRightGroupBox);
  spinBox->setValue(40);
  spinBox->setMaximum(100);

  dateTimeEdit = new QDateTimeEdit(bottomRightGroupBox);
  dateTimeEdit->setDateTime(QDateTime::currentDateTime());

  slider = new QSlider(Qt::Horizontal, bottomRightGroupBox);
  slider->setValue(40);

  // dial = new QDial;
  // dial->setValue(30);
  // dial->setNotchesVisible(true);

  auto toolButton = new QToolButton;
  toolButton->setText("Tool Button");

  auto autoRaiseToolButton = new QToolButton;
  autoRaiseToolButton->setText("Auto Raise");
  autoRaiseToolButton->setAutoRaise(true);

  QStyleOption opt;
  opt.initFrom(this);
  auto withIcon = new QToolButton;
  withIcon->setIcon(
      style()->standardIcon(QStyle::SP_ComputerIcon, &opt, this));

  auto hbox = new QHBoxLayout;
  hbox->addWidget(toolButton);
  hbox->addWidget(autoRaiseToolButton);
  hbox->addWidget(withIcon);
  hbox->addStretch(1);

  QGridLayout* layout = new QGridLayout;
  layout->addWidget(lineEdit, 0, 0, 1, 2);
  layout->addWidget(normalLineEdit, 1, 0, 1, 2);
  layout->addWidget(spinBox, 2, 0, 1, 2);
  layout->addWidget(dateTimeEdit, 3, 0, 1, 2);
  layout->addWidget(slider, 4, 0);
  // layout->addWidget(dial, 4, 1, 2, 1);
  layout->addLayout(hbox, 5, 0, 1, 3);
  layout->setRowStretch(6, 1);

  // layout->setContentsMargins(0, 0, 0, 0);
  // bottomRightGroupBox->setFlat(true);
  bottomRightGroupBox->setLayout(layout);

  connect(spinBox, QOverload<int>::of(&QSpinBox::valueChanged), this,
          [this](int val) { progressBar->setValue(val); });
}

//! [13]
void WidgetGallery::createProgressBar() {
  progressBar = new QProgressBar;
  progressBar->setRange(0, 100);
  progressBar->setValue(40);

  QTimer* timer = new QTimer(this);
  connect(timer, SIGNAL(timeout()), this, SLOT(advanceProgressBar()));
  timer->start(1000);
}
//! [13]
