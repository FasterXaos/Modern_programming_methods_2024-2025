#pragma once

#include <QWidget>
#include <QKeyEvent>

class Snake: public QWidget{
	public:
		Snake(QWidget* parent = nullptr);

	protected:
		void paintEvent(QPaintEvent*);
		void timerEvent(QTimerEvent*);
		void keyPressEvent(QKeyEvent*);

	private:
		QImage dot;
		QImage head;
		QImage apple;

		static const int B_WIDTH = 150;
		static const int B_HEIGHT = 150;
		static const int DOT_SIZE = 10;
		static const int ALL_DOTS = 225;
		static const int RAND_POS = 15;
		static const int DELAY = 200;

		int timerId;
		int dots;
		int apple_x;
		int apple_y;

		int x[ALL_DOTS];
		int y[ALL_DOTS];

		bool leftDirection;
		bool rightDirection;
		bool upDirection;
		bool downDirection;
		bool inGame;

		void loadImages();
		void initGame();
		void locateApple();
		void checkApple();
		void checkCollision();
		void move();
		void doDrawing();
		void gameOver(QPainter&);
};
