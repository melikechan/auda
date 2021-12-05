#include "homepage.h"
#include "ui_homepage.h"

#include <QtMultimedia/QAudio>
#include <QFileDialog>

namespace Auda {
namespace UI {

HomePage::HomePage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HomePage)
{
    ui->setupUi(this);
}

HomePage::~HomePage()
{
    delete ui;
}

void HomePage::on_actionOpen_triggered() {
    QFileDialog *dialog = new QFileDialog();
    dialog->open();
}

} // namespace UI
} // namespace Auda
