class CBox {
protected: //private으로 하고 싶으면 해당 클래스 내에 함수를 통해 접근하도록 함
	double width;
};

class ChildBox : CBox {
public:
	void setWidth(double w) {
		width = w;
	}
};
