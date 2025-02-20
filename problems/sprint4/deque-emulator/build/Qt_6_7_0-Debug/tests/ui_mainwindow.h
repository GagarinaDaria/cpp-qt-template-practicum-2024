/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QListWidget *list_widget;
    QGridLayout *gridLayout_3;
    QLabel *lbl_size;
    QPushButton *btn_resize;
    QLineEdit *txt_size;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txt_elem_content;
    QPushButton *btn_edit;
    QPushButton *btn_find;
    QGridLayout *gridLayout;
    QPushButton *btn_end;
    QPushButton *pb_pop_front;
    QPushButton *btn_inc_iterator;
    QPushButton *pb_pop_back;
    QPushButton *btn_erase;
    QPushButton *btn_max_element;
    QPushButton *btn_tea;
    QPushButton *btn_cakes;
    QPushButton *btn_shuffle;
    QSpacerItem *verticalSpacer;
    QPushButton *btn_begin;
    QPushButton *pb_merge_sort;
    QPushButton *btn_reverse;
    QLabel *label_3;
    QPushButton *btn_min_element;
    QPushButton *btn_insert;
    QPushButton *btn_unique;
    QPushButton *btn_dec_iterator;
    QLabel *label;
    QPushButton *merge_sort_reg;
    QLabel *lbl_blanks;
    QLabel *lbl_methods;
    QPushButton *pb_push_front;
    QPushButton *pb_push_back;
    QPushButton *pb_clear;
    QPushButton *pb_lower_bound;
    QPushButton *pb_upper_bound;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *le_count;
    QPushButton *btn_count;
    QLabel *lbl_count;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(600, 647);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        list_widget = new QListWidget(centralwidget);
        list_widget->setObjectName("list_widget");

        gridLayout_2->addWidget(list_widget, 0, 0, 6, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        lbl_size = new QLabel(centralwidget);
        lbl_size->setObjectName("lbl_size");

        gridLayout_3->addWidget(lbl_size, 0, 0, 1, 1);

        btn_resize = new QPushButton(centralwidget);
        btn_resize->setObjectName("btn_resize");

        gridLayout_3->addWidget(btn_resize, 0, 2, 1, 1);

        txt_size = new QLineEdit(centralwidget);
        txt_size->setObjectName("txt_size");

        gridLayout_3->addWidget(txt_size, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 4, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        txt_elem_content = new QLineEdit(centralwidget);
        txt_elem_content->setObjectName("txt_elem_content");

        horizontalLayout->addWidget(txt_elem_content);

        btn_edit = new QPushButton(centralwidget);
        btn_edit->setObjectName("btn_edit");

        horizontalLayout->addWidget(btn_edit);

        btn_find = new QPushButton(centralwidget);
        btn_find->setObjectName("btn_find");

        horizontalLayout->addWidget(btn_find);


        gridLayout_2->addLayout(horizontalLayout, 0, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        btn_end = new QPushButton(centralwidget);
        btn_end->setObjectName("btn_end");

        gridLayout->addWidget(btn_end, 13, 1, 1, 1);

        pb_pop_front = new QPushButton(centralwidget);
        pb_pop_front->setObjectName("pb_pop_front");

        gridLayout->addWidget(pb_pop_front, 1, 0, 1, 1);

        btn_inc_iterator = new QPushButton(centralwidget);
        btn_inc_iterator->setObjectName("btn_inc_iterator");

        gridLayout->addWidget(btn_inc_iterator, 12, 1, 1, 1);

        pb_pop_back = new QPushButton(centralwidget);
        pb_pop_back->setObjectName("pb_pop_back");

        gridLayout->addWidget(pb_pop_back, 2, 0, 1, 1);

        btn_erase = new QPushButton(centralwidget);
        btn_erase->setObjectName("btn_erase");

        gridLayout->addWidget(btn_erase, 3, 0, 1, 1);

        btn_max_element = new QPushButton(centralwidget);
        btn_max_element->setObjectName("btn_max_element");

        gridLayout->addWidget(btn_max_element, 6, 1, 1, 1);

        btn_tea = new QPushButton(centralwidget);
        btn_tea->setObjectName("btn_tea");

        gridLayout->addWidget(btn_tea, 15, 0, 1, 1);

        btn_cakes = new QPushButton(centralwidget);
        btn_cakes->setObjectName("btn_cakes");

        gridLayout->addWidget(btn_cakes, 15, 1, 1, 1);

        btn_shuffle = new QPushButton(centralwidget);
        btn_shuffle->setObjectName("btn_shuffle");

        gridLayout->addWidget(btn_shuffle, 9, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 16, 0, 1, 1);

        btn_begin = new QPushButton(centralwidget);
        btn_begin->setObjectName("btn_begin");

        gridLayout->addWidget(btn_begin, 13, 0, 1, 1);

        pb_merge_sort = new QPushButton(centralwidget);
        pb_merge_sort->setObjectName("pb_merge_sort");

        gridLayout->addWidget(pb_merge_sort, 7, 0, 1, 1);

        btn_reverse = new QPushButton(centralwidget);
        btn_reverse->setObjectName("btn_reverse");

        gridLayout->addWidget(btn_reverse, 8, 1, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        btn_min_element = new QPushButton(centralwidget);
        btn_min_element->setObjectName("btn_min_element");

        gridLayout->addWidget(btn_min_element, 6, 0, 1, 1);

        btn_insert = new QPushButton(centralwidget);
        btn_insert->setObjectName("btn_insert");

        gridLayout->addWidget(btn_insert, 3, 1, 1, 1);

        btn_unique = new QPushButton(centralwidget);
        btn_unique->setObjectName("btn_unique");

        gridLayout->addWidget(btn_unique, 8, 0, 1, 1);

        btn_dec_iterator = new QPushButton(centralwidget);
        btn_dec_iterator->setObjectName("btn_dec_iterator");

        gridLayout->addWidget(btn_dec_iterator, 12, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 11, 0, 1, 1);

        merge_sort_reg = new QPushButton(centralwidget);
        merge_sort_reg->setObjectName("merge_sort_reg");

        gridLayout->addWidget(merge_sort_reg, 7, 1, 1, 1);

        lbl_blanks = new QLabel(centralwidget);
        lbl_blanks->setObjectName("lbl_blanks");

        gridLayout->addWidget(lbl_blanks, 14, 0, 1, 1);

        lbl_methods = new QLabel(centralwidget);
        lbl_methods->setObjectName("lbl_methods");

        gridLayout->addWidget(lbl_methods, 0, 0, 1, 1);

        pb_push_front = new QPushButton(centralwidget);
        pb_push_front->setObjectName("pb_push_front");

        gridLayout->addWidget(pb_push_front, 1, 1, 1, 1);

        pb_push_back = new QPushButton(centralwidget);
        pb_push_back->setObjectName("pb_push_back");

        gridLayout->addWidget(pb_push_back, 2, 1, 1, 1);

        pb_clear = new QPushButton(centralwidget);
        pb_clear->setObjectName("pb_clear");

        gridLayout->addWidget(pb_clear, 4, 0, 1, 1);

        pb_lower_bound = new QPushButton(centralwidget);
        pb_lower_bound->setObjectName("pb_lower_bound");

        gridLayout->addWidget(pb_lower_bound, 10, 0, 1, 1);

        pb_upper_bound = new QPushButton(centralwidget);
        pb_upper_bound->setObjectName("pb_upper_bound");

        gridLayout->addWidget(pb_upper_bound, 10, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 3, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        le_count = new QLineEdit(centralwidget);
        le_count->setObjectName("le_count");

        horizontalLayout_2->addWidget(le_count);

        btn_count = new QPushButton(centralwidget);
        btn_count->setObjectName("btn_count");

        horizontalLayout_2->addWidget(btn_count);

        lbl_count = new QLabel(centralwidget);
        lbl_count->setObjectName("lbl_count");

        horizontalLayout_2->addWidget(lbl_count);

        horizontalLayout_2->setStretch(0, 5);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);

        gridLayout_2->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "std::vector demo", nullptr));
        lbl_size->setText(QCoreApplication::translate("MainWindow", "size():", nullptr));
        btn_resize->setText(QCoreApplication::translate("MainWindow", "resize", nullptr));
        btn_edit->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        btn_find->setText(QCoreApplication::translate("MainWindow", "find", nullptr));
        btn_end->setText(QCoreApplication::translate("MainWindow", "end", nullptr));
        pb_pop_front->setText(QCoreApplication::translate("MainWindow", "pop_front", nullptr));
        btn_inc_iterator->setText(QCoreApplication::translate("MainWindow", "++", nullptr));
        pb_pop_back->setText(QCoreApplication::translate("MainWindow", "pop_back", nullptr));
        btn_erase->setText(QCoreApplication::translate("MainWindow", "erase", nullptr));
        btn_max_element->setText(QCoreApplication::translate("MainWindow", "max_element", nullptr));
        btn_tea->setText(QCoreApplication::translate("MainWindow", "= \321\207\320\260\320\271", nullptr));
        btn_cakes->setText(QCoreApplication::translate("MainWindow", "= \321\202\320\276\321\200\321\202\321\213", nullptr));
        btn_shuffle->setText(QCoreApplication::translate("MainWindow", "shuffle", nullptr));
        btn_begin->setText(QCoreApplication::translate("MainWindow", "begin", nullptr));
        pb_merge_sort->setText(QCoreApplication::translate("MainWindow", "merge sort", nullptr));
        btn_reverse->setText(QCoreApplication::translate("MainWindow", "reverse", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\220\320\273\320\263\320\276\321\200\320\270\321\202\320\274\321\213", nullptr));
        btn_min_element->setText(QCoreApplication::translate("MainWindow", "min_element", nullptr));
        btn_insert->setText(QCoreApplication::translate("MainWindow", "insert", nullptr));
        btn_unique->setText(QCoreApplication::translate("MainWindow", "unique", nullptr));
        btn_dec_iterator->setText(QCoreApplication::translate("MainWindow", "--", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\230\321\202\320\265\321\200\320\260\321\202\320\276\321\200", nullptr));
        merge_sort_reg->setText(QCoreApplication::translate("MainWindow", "merge sOrT", nullptr));
        lbl_blanks->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\320\276\321\202\320\276\320\262\320\272\320\270", nullptr));
        lbl_methods->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\321\202\320\276\320\264\321\213", nullptr));
        pb_push_front->setText(QCoreApplication::translate("MainWindow", "push_front", nullptr));
        pb_push_back->setText(QCoreApplication::translate("MainWindow", "push_back", nullptr));
        pb_clear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        pb_lower_bound->setText(QCoreApplication::translate("MainWindow", "lower_bound", nullptr));
        pb_upper_bound->setText(QCoreApplication::translate("MainWindow", "upper_bound", nullptr));
        btn_count->setText(QCoreApplication::translate("MainWindow", "count", nullptr));
        lbl_count->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
