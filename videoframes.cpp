#include <opencv2\opencv.hpp>
using namespace cv;

int main(int, char**)
{
	VideoCapture cap(0);
		if(!cap.isOpened())
			return -1;
	while (1)
	{
		Mat frame;
		cap.read(frame);
		imshow("Camera", frame);

		if(waitKey(30) == 'g') // al presionar la tecla g minuscula se capturara un fotograma del preview de la camara
	{
			Mat frame2; //contorno de imagen que se va capturar
		frame2=frame.clone(); // clonamos la imagen del preview de la camara
		imshow("Captured frame", frame2); // Se muestra el contorno capturado 

	}
		if (waitKey(30) == 'z') // z detenemos el proceso
	{
	break;
	}
	}
	return 0;
}
