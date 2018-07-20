#ifndef SNOOPCONFIGDIALOG_H
#define SNOOPCONFIGDIALOG_H

#include <QDialog>

namespace Ui {
class SnoopConfigDialog;
}

class SnoopConfigDialog : public QDialog
{
  Q_OBJECT

public:
  explicit SnoopConfigDialog(QWidget *parent = 0);
  ~SnoopConfigDialog();

private slots:
  void onBrowse();
  void onDefault();
  void onReset();
  void onSave();
  void onCancel();

private:
  SnoopConfigDialog &operator = (const SnoopConfigDialog&);
  SnoopConfigDialog(SnoopConfigDialog&);
  
  Ui::SnoopConfigDialog *ui;

  QString dbPath;
  bool bAutoUpdate;
  bool bAutoReprocess;
  bool bOnlineDb;

  int32_t autoUpdateDays;
  int32_t maxDecodeErrors;

};

#endif // SNOOPCONFIGDIALOG_H
