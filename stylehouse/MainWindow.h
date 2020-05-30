#include <QMainWindow>

class MainWindow : public QMainWindow {
  Q_OBJECT
public:
  MainWindow(QWidget* parent = nullptr);
  ~MainWindow() override = default;

protected:
  void showEvent(QShowEvent* event) override;

private:
  Q_DISABLE_COPY(MainWindow)
};