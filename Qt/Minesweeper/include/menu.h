#pragma once

#include <QWidget>

namespace AED {
	class Menu : public QWidget {
		Q_OBJECT

		public:
			Menu(QWidget *parent = nullptr);

		private slots:
			void onExitButtonClicked();
			void onPlayButtonClicked();
			void onRecordsButtonClicked();
			void onSettingsButtonClicked();
	};
}
