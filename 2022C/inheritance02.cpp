class CBox {
protected: //private���� �ϰ� ������ �ش� Ŭ���� ���� �Լ��� ���� �����ϵ��� ��
	double width;
};

class ChildBox : CBox {
public:
	void setWidth(double w) {
		width = w;
	}
};
