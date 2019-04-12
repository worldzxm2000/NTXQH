#pragma once

#include<WinSock2.h>
#include<Windows.h>
#include <QWidget>
#include "ui_ControlUI.h"
#include<QMouseEvent>
class ControlUI : public QWidget
{
	Q_OBJECT

public:
	ControlUI(QWidget *parent = Q_NULLPTR);
	~ControlUI();
	uint Socket;//Socket��
	void setValue(QStringList list);//����ֵ
	bool *isActive;//�жϴ����Ƿ���
private:
	Ui::ControlUI ui;
	int cmmIndex;//��¼��ǰ��������
				 //�����ƶ�
	virtual void mousePressEvent(QMouseEvent *event);
	virtual void mouseMoveEvent(QMouseEvent *event);
	virtual void mouseReleaseEvent(QMouseEvent *event);
	bool m_Drag;                //�ж��������Ƿ���
	QPoint m_DragPosition;
private slots:
	void slot_minWindow();
	void close();
	void on_RIDBtn_clicked();
	void on_WIDBtn_clicked();
	void on_RTimeBtn_clicked();
	void on_WTimeBtn_clicked();
	void on_RALTBtn_clicked();
	void on_WALTBtn_clicked();
	void on_RLATBtn_clicked();
	void on_WLATBtn_clicked();
	void on_RLNGBtn_clicked();
	void on_WLNGBtn_clicked();
	void on_RRESETBtn_clicked();
	void on_RUPDATEBtn_clicked();
	void on_DownBtn_clicked();
};
