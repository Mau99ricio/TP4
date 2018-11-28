#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    // Lista<QList> canciones = new Lista();

     QList<QString> teBote= {"bebe","mami","ella"};
     QList<QString> rakata= {"rakata","mami","ella"};
     QList<QString> sePreparo= {"amiga","amor","ella"};
     QList<QString> laOcasion= {"bebe","sexo","ocasione"};
     QList<QString> ginza= {"amor","mami","reggeton"};
     QList<QString> hammed= {"head","killing","face"};
     QList<QString> scream= {"head","dead","bloody"};
     QList<QString> movring= {"grace","livres","possessed"};
     QList<QString> iHate= {"mising","love","hate"};
     QList<QString> letfhandPath= {"make","live","death"};
     QList<QString> billieJean= {"but","like","been"};
     QList<QString> likeaVirgin= {"love","always","but"};
     QList<QString> girlsJust= {"ligth","live","wanna"};
     QList<QString> everybody= {"body","god","like"};
     QList<QString> IwannaDance= {"somebody","wanna","love"};
     QList<QString> dejariaTodo= {"vida","todo","estoy"};
     QList<QString> TuDeQueVas= {"vida","tengo","pensamiento"};
     QList<QString> mujeres = {"mujeres","dios","hizo"};
     QList<QString> laIncondicional= {"esa","amor","vete"};
     QList<QString> hearbreaker= {"something","down","like"};
     QList<QString> sabbath= {"know","life","ligth"};
     QList<QString> highway= {"take","hed","killing"};
     QList<QString> theReaper= {"like","reaper","hand"};
     QList<QString> allAllong= {"something","reason","life"};
}
