#include <QApplication>
#include <QMenu>
#include <QMenuBar>
#include <QPushButton>
#include <QVBoxLayout>
#include "MainWindow.h"
#include "phantomstyle.h"

QPalette g_palette;
bool g_setPaletteOnShow = false;

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent)
{
  auto mb = menuBar();
  auto fm = mb->addMenu("&File");
  fm->addAction("New");
  
  auto centralwidget = new QWidget(this);
  auto verticalLayout = new QVBoxLayout(centralwidget);
  verticalLayout->addStretch(20);
  verticalLayout->addWidget(new QPushButton("TEST"));
  verticalLayout->addStretch(20);
  setCentralWidget(centralwidget);
}

void MainWindow::showEvent(QShowEvent* event)
{
  static bool shown = false;
  if (g_setPaletteOnShow && !shown) {
    QApplication::setPalette(g_palette);
    shown = true;
  }
  QMainWindow::showEvent(event);
}

void createGlobalPalette(bool useKPXC);

int main(int argc, char* argv[]) {
  QApplication::setAttribute(Qt::AA_EnableHighDpiScaling, true);
  QApplication::setAttribute(Qt::AA_UseHighDpiPixmaps, true);

  createGlobalPalette(true);

  QApplication app(argc, argv);
  QApplication::setStyle(new PhantomStyle());
  if (!g_setPaletteOnShow) {
    QApplication::setPalette(g_palette);
  }

  MainWindow mainWindow;
  mainWindow.show();
  
  return app.exec();
}

void createGlobalPalette(bool useKPXC)
{
  if (useKPXC) {
      g_palette.setColor(QPalette::Active, QPalette::Window, QStringLiteral("#3B3B3D"));
      g_palette.setColor(QPalette::Inactive, QPalette::Window, QStringLiteral("#404042"));
      g_palette.setColor(QPalette::Disabled, QPalette::Window, QStringLiteral("#424242"));

      g_palette.setColor(QPalette::Active, QPalette::WindowText, QStringLiteral("#CACBCE"));
      g_palette.setColor(QPalette::Inactive, QPalette::WindowText, QStringLiteral("#C8C8C6"));
      g_palette.setColor(QPalette::Disabled, QPalette::WindowText, QStringLiteral("#707070"));

      g_palette.setColor(QPalette::Active, QPalette::Text, QStringLiteral("#CACBCE"));
      g_palette.setColor(QPalette::Inactive, QPalette::Text, QStringLiteral("#C8C8C6"));
      g_palette.setColor(QPalette::Disabled, QPalette::Text, QStringLiteral("#707070"));

    #if (QT_VERSION >= QT_VERSION_CHECK(5, 12, 0))
      g_palette.setColor(QPalette::Active, QPalette::PlaceholderText, QStringLiteral("#7D7D82"));
      g_palette.setColor(QPalette::Inactive, QPalette::PlaceholderText, QStringLiteral("#87888C"));
      g_palette.setColor(QPalette::Disabled, QPalette::PlaceholderText, QStringLiteral("#737373"));
    #endif

      g_palette.setColor(QPalette::Active, QPalette::BrightText, QStringLiteral("#252627"));
      g_palette.setColor(QPalette::Inactive, QPalette::BrightText, QStringLiteral("#2D2D2F"));
      g_palette.setColor(QPalette::Disabled, QPalette::BrightText, QStringLiteral("#333333"));

      g_palette.setColor(QPalette::Active, QPalette::Base, QStringLiteral("#27272A"));
      g_palette.setColor(QPalette::Inactive, QPalette::Base, QStringLiteral("#2A2A2D"));
      g_palette.setColor(QPalette::Disabled, QPalette::Base, QStringLiteral("#343437"));

      g_palette.setColor(QPalette::Active, QPalette::AlternateBase, QStringLiteral("#2C2C30"));
      g_palette.setColor(QPalette::Inactive, QPalette::AlternateBase, QStringLiteral("#2B2B2F"));
      g_palette.setColor(QPalette::Disabled, QPalette::AlternateBase, QStringLiteral("#36363A"));

      g_palette.setColor(QPalette::All, QPalette::ToolTipBase, QStringLiteral("#2D532D"));
      g_palette.setColor(QPalette::All, QPalette::ToolTipText, QStringLiteral("#BFBFBF"));

      g_palette.setColor(QPalette::Active, QPalette::Button, QStringLiteral("#28282B"));
      g_palette.setColor(QPalette::Inactive, QPalette::Button, QStringLiteral("#28282B"));
      g_palette.setColor(QPalette::Disabled, QPalette::Button, QStringLiteral("#2B2A2A"));

      g_palette.setColor(QPalette::Active, QPalette::ButtonText, QStringLiteral("#B9B9BE"));
      g_palette.setColor(QPalette::Inactive, QPalette::ButtonText, QStringLiteral("#9E9FA5"));
      g_palette.setColor(QPalette::Disabled, QPalette::ButtonText, QStringLiteral("#73747E"));

      g_palette.setColor(QPalette::Active, QPalette::Highlight, QStringLiteral("#2D532D"));
      g_palette.setColor(QPalette::Inactive, QPalette::Highlight, QStringLiteral("#354637"));
      g_palette.setColor(QPalette::Disabled, QPalette::Highlight, QStringLiteral("#293D29"));

      g_palette.setColor(QPalette::Active, QPalette::HighlightedText, QStringLiteral("#CCCCCC"));
      g_palette.setColor(QPalette::Inactive, QPalette::HighlightedText, QStringLiteral("#CECECE"));
      g_palette.setColor(QPalette::Disabled, QPalette::HighlightedText, QStringLiteral("#707070"));

      g_palette.setColor(QPalette::All, QPalette::Light, QStringLiteral("#414145"));
      g_palette.setColor(QPalette::All, QPalette::Midlight, QStringLiteral("#39393C"));
      g_palette.setColor(QPalette::All, QPalette::Mid, QStringLiteral("#2F2F32"));
      g_palette.setColor(QPalette::All, QPalette::Dark, QStringLiteral("#202022"));
      g_palette.setColor(QPalette::All, QPalette::Shadow, QStringLiteral("#19191A"));

      g_palette.setColor(QPalette::All, QPalette::Link, QStringLiteral("#68B668"));
      g_palette.setColor(QPalette::Disabled, QPalette::Link, QStringLiteral("#74A474"));
      g_palette.setColor(QPalette::All, QPalette::LinkVisited, QStringLiteral("#75B875"));
      g_palette.setColor(QPalette::Disabled, QPalette::LinkVisited, QStringLiteral("#77A677"));
  } else {
      g_palette.setColor(QPalette::Window, QStringLiteral("#3B3B3D"));
      g_palette.setColor(QPalette::WindowText, QStringLiteral("#CACBCE"));
      g_palette.setColor(QPalette::Text, QStringLiteral("#CACBCE"));
      g_palette.setColor(QPalette::Base, QStringLiteral("#27272A"));
      g_palette.setColor(QPalette::Button, QStringLiteral("#28282B"));
      g_palette.setColor(QPalette::ButtonText, QStringLiteral("#B9B9BE"));
      g_palette.setColor(QPalette::Light, QStringLiteral("#414145"));
      g_palette.setColor(QPalette::Midlight, QStringLiteral("#39393C"));
      g_palette.setColor(QPalette::Mid, QStringLiteral("#2F2F32"));
      g_palette.setColor(QPalette::Dark, QStringLiteral("#202022"));
      g_palette.setColor(QPalette::Shadow, QStringLiteral("#19191A"));
  }
}