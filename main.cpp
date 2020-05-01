#include <opencv2/opencv.hpp>
#include <iostream>


using namespace cv;
using namespace std;


int main()
{
	Mat img_color;

	//���� ĸ�� �ʱ�ȭ
	VideoCapture cap(0);
	if (!cap.isOpened()) {
		cerr << "���� - ī�޶� �� �� �����ϴ�.\n";
		return -1;
	}


	while (1)
	{
		// ī�޶�κ��� ĸ���� ������ frame�� �����մϴ�.
		cap.read(img_color);
		if (img_color.empty()) {
			cerr << "�� ������ ĸ�ĵǾ����ϴ�.\n";
			break;
		}

		// ������ ȭ�鿡 �����ݴϴ�. 
		imshow("Color", img_color);


		// ESC Ű�� �Է��ϸ� ������ ����˴ϴ�. 

		if (waitKey(25) >= 0)
			break;
	}


	return 0;
}