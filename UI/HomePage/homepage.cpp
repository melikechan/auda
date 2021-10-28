#include "homepage.h"
#include "ui_homepage.h"

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

}
}
