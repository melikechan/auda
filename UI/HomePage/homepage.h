#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QMainWindow>

namespace Auda {
namespace UI {

namespace Ui
{
    class HomePage;
}

class HomePage : public QMainWindow
{
    Q_OBJECT

public:
    explicit HomePage(QWidget *parent = nullptr);
    ~HomePage();

private slots:
    void on_actionOpen_triggered();

private:
    Ui::HomePage *ui;
};

} // namespace UI
} // namespace Auda
#endif // HOMEPAGE_H
