#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "algo.h"

#include <QMessageBox>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <string>
#include <algorithm>
#include <numeric>
#include <random>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);
    ui->txt_size->setText("0");
    ApplyModel();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::ApplyModel() {
    UpdateListWidget();
    ui->list_widget->addItem("end");
    ApplyIterator();
}

void MainWindow::DisabledButtons(){
    bool disabled = deque_model_.iterator == deque_model_.items.end();
    ui->btn_edit->setDisabled(disabled);
    ui->btn_erase->setDisabled(disabled);
    ui->btn_inc_iterator->setDisabled(disabled);
    ui->btn_dec_iterator->setDisabled(deque_model_.iterator==deque_model_.items.begin());
    ui->pb_pop_front->setDisabled(deque_model_.items.empty());
    ui->pb_pop_back->setDisabled(deque_model_.items.empty());
}

void MainWindow::UpdateListWidget(){
    auto preserve_iter = deque_model_.iterator ;
    ui->list_widget->clear();

    for (size_t i = 0;i<deque_model_.items.size();++i){
        std::string item =std::to_string((int)i) +": "+deque_model_.items[i];
        ui->list_widget->addItem(QString::fromStdString(item));
    }

    ui->txt_size->setText(QString::number(deque_model_.items.size()));
    deque_model_.iterator = preserve_iter;
}

void MainWindow::ApplyIterator(){
    int dist = std::distance(deque_model_.items.begin(),deque_model_.iterator);
    ui->list_widget->setCurrentRow(dist);
    DisabledButtons();

    if (deque_model_.iterator!=deque_model_.items.end()){
        ui->txt_elem_content->setText(QString::fromStdString(*deque_model_.iterator));
    }else {
        ui->txt_elem_content->setText("");
    }
}

void MainWindow::on_pb_clear_clicked(){
    ui->list_widget->clear();
    ui->txt_size->setText("0");
    ui->pb_pop_back->setDisabled(true);
    deque_model_.items.clear();
    deque_model_.iterator = deque_model_.items.begin();
    ApplyModel();
}

void MainWindow::on_pb_push_front_clicked(){
    deque_model_.items.push_front(ui->txt_elem_content->text().toStdString());
    deque_model_.iterator = deque_model_.items.begin();
    ApplyModel();
}

void MainWindow::on_pb_push_back_clicked(){
    deque_model_.items.push_back(ui->txt_elem_content->text().toStdString());
    deque_model_.iterator = deque_model_.items.begin();
    ApplyModel();
}

void MainWindow::on_pb_pop_back_clicked(){
    deque_model_.items.pop_back();
    UpdateListWidget();

    if (deque_model_.items.empty()){
        ui->pb_pop_back->setDisabled(true);
    }

    deque_model_.iterator = deque_model_.items.begin();
    ApplyModel();
}

void MainWindow::on_pb_pop_front_clicked(){
    deque_model_.items.pop_front();
    deque_model_.iterator = deque_model_.items.begin();
    ApplyModel();
}

void MainWindow::on_btn_insert_clicked(){
    deque_model_.items.insert(deque_model_.iterator,ui->txt_elem_content->text().toStdString());
    deque_model_.iterator = deque_model_.items.begin();
    ApplyModel();
}

void MainWindow::on_btn_erase_clicked(){
    deque_model_.items.erase(deque_model_.iterator);
    deque_model_.iterator = deque_model_.items.begin();
    ApplyModel();
}

void MainWindow::on_btn_begin_clicked(){
    deque_model_.iterator = deque_model_.items.begin();
    ApplyIterator();
}

void MainWindow::on_btn_end_clicked(){
    deque_model_.iterator = deque_model_.items.end();
    ApplyIterator();
}

void MainWindow::on_btn_dec_iterator_clicked(){
    deque_model_.iterator--;
    ApplyIterator();
}

void MainWindow::on_btn_inc_iterator_clicked(){
    deque_model_.iterator++;
    ApplyIterator();
}

void MainWindow::on_list_widget_currentRowChanged(int currentRow){
    deque_model_.iterator = deque_model_.items.begin()+currentRow;

    if (currentRow>=0){
        if (deque_model_.iterator == deque_model_.items.end()){
            ui->txt_elem_content->setText("");
        }else{
            ui->txt_elem_content->setText(QString::fromStdString(*deque_model_.iterator));
        }
    }

    DisabledButtons();
}

void MainWindow::on_btn_edit_clicked(){
    *deque_model_.iterator = ui->txt_elem_content->text().toStdString();
    ApplyModel();
}

void MainWindow::on_btn_find_clicked(){
    std::string find_element = ui->txt_elem_content->text().toStdString();
    deque_model_.iterator = std::find(deque_model_.items.begin(), deque_model_.items.end(),find_element);
    ApplyIterator();
}

void MainWindow::on_btn_min_element_clicked(){
    deque_model_.iterator = std::min_element(deque_model_.items.begin(), deque_model_.items.end());
    ApplyIterator();
}

void MainWindow::on_btn_max_element_clicked(){
    deque_model_.iterator = std::max_element(deque_model_.items.begin(), deque_model_.items.end());
    ApplyIterator();
}

void MainWindow::on_btn_count_clicked(){
    std::string target = ui->le_count->text().toStdString();
    auto number = std::count_if(deque_model_.items.begin(),deque_model_.items.end(),[&](const std::string& p){
        return p == target;
    });

    ui->lbl_count->setText(QString::number(number));
}

void MainWindow::on_pb_merge_sort_clicked(){
    deque_model_.items = MergeSort(deque_model_.items,std::less<>());
    deque_model_.iterator = deque_model_.items.begin();
    ApplyModel();
}

void MainWindow::on_merge_sort_reg_clicked(){
    static const auto compare_ci = [](const std::string& l, const std::string& r) {
        return QString::compare(QString::fromStdString(l), QString::fromStdString(r), Qt::CaseInsensitive) < 0;
    };

    deque_model_.items = MergeSort(deque_model_.items,compare_ci);
    deque_model_.iterator = deque_model_.items.begin();
    ApplyModel();
}

void MainWindow::SetRandomGen(const std::mt19937& random_gen){
    gen = random_gen;
}

void MainWindow::on_btn_reverse_clicked(){
    std::reverse(deque_model_.items.begin(),deque_model_.items.end());
    ApplyModel();
}

void MainWindow::on_btn_unique_clicked(){
    if (std::is_sorted(deque_model_.items.begin(),deque_model_.items.end())){
        auto to_del = std::unique(deque_model_.items.begin(), deque_model_.items.end());
        deque_model_.items.erase(to_del,deque_model_.items.end());
        deque_model_.iterator = deque_model_.items.begin();
        ApplyModel();
    }
}

void MainWindow::on_btn_shuffle_clicked(){
    std::shuffle(deque_model_.items.begin(), deque_model_.items.end(), gen);
    ApplyModel();
}

void MainWindow::on_btn_tea_clicked(){
        ui->list_widget->clear();
        static std::deque<std::string> tea {
            "Чай Лунцзин",
            "Эрл Грей",
            "Сенча",
            "Пуэр",
            "Дарджилинг",
            "Ассам",
            "Матча",
            "Ганпаудер",
            "Оолонг",
            "Лапсанг Сушонг"
        };

        deque_model_.items = tea;
        deque_model_.iterator = deque_model_.items.begin();
        ApplyModel();
}

void MainWindow::on_btn_cakes_clicked(){
    static std::deque<std::string> cakes {
        "Красный бархат",
        "Наполеон",
        "Медовик",
        "Тирамису",
        "Прага",
        "Чизкейк",
        "Захер",
        "Эстерхази",
        "Морковный торт",
        "Чёрный лес",
    };

    deque_model_.items = cakes;
    deque_model_.iterator = deque_model_.items.begin();
    ApplyModel();
}

void MainWindow::on_pb_lower_bound_clicked(){
    if (!std::is_sorted(deque_model_.items.begin(),deque_model_.items.end())){
        return;
    }

    deque_model_.iterator = std::lower_bound(deque_model_.items.begin(),deque_model_.items.end(), ui-> txt_elem_content->text().toStdString());
    ApplyIterator();
}

void MainWindow::on_pb_upper_bound_clicked(){
    if (!std::is_sorted(deque_model_.items.begin(),deque_model_.items.end())){
        return;
    }

    deque_model_.iterator = std::upper_bound(deque_model_.items.begin(),deque_model_.items.end(), ui-> txt_elem_content->text().toStdString());
    ApplyIterator();
}

void MainWindow::on_btn_resize_clicked(){
    bool conversion = false;
    int new_size = ui->txt_size->text().toInt(&conversion);

    if (!conversion){
        return;
    }

    deque_model_.items.resize(new_size);
    deque_model_.iterator = deque_model_.items.begin();
    ApplyModel();
}

