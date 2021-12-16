#include <iostream>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");
	short number;
	cout << "Íàøà ïðîãðàììà ðåàëèçóåò âûâîä ðàñïèñàíèÿ ïî çàäàííîìó äíþ íåäåëè." << endl;
	cout << "Ââåäèòå íîìåð äíÿ íåäåëè(1 - 6): ";
	cin >> number;

	switch (number)
	{
	case 1:
		cout << "Ïîíåäåëüíèê:" << endl;
		cout << "14:40 - 16:00 Ìàò àíàëèç / ÑßÏ" << endl;
		cout << "16:30 - 17:50 ïç Ìàò àíàëèç" << endl;
		cout << "18:05 - 19:25 ïç Àëãåáðà/Ãåîìåòðèÿ" << endl;
		break;
	case 2:
		cout << "Âòîðíèê:" << endl;
		cout << "14:40 - 16:00 ëð ÎÀèÏ" << endl;
		cout << "16:30 - 17:50 ëê ÎÀèÏ" << endl;
		break;
	case 3:
		cout << "Ñðåäà:" << endl;
		cout << "13:00 - 14:20 ëð ÎÀèÏ" << endl;
		cout << "14:40 - 16:00 ëê ÀËÎÂÑ" << endl;
		cout << "16:30 - 17:50 Ôèçè÷åñêàÿ êóëüòóðà" << endl;
		cout << "18:05 - 19:25 ëê Àëãåáðà/Ãåîìåòðèÿ" << endl;
		break;
	case 4:
		cout << "×åòâåðã:" << endl;
		cout << "14:40 - 16:00 ëð ÑßÏ" << endl;
		cout << "16:30 - 17:50 ëê ÒÐÏÎ" << endl;
		cout << "18:05 - 19:25 ëð ÒÐÏÎ" << endl;
		break;
	case 5:
		cout << "Ïÿòíèöà:" << endl;
		cout << "14:40 - 16:00 ïç Ìàò àíàëèç" << endl;
		cout << "16:30 - 17:50 ëê ÊßÐÄ" << endl;
		cout << "18:05 - 19:25 ïç Èíîñòðàííûé" << endl;
		break;
	case 6:
		cout << "Ñóááîòà:" << endl;
		cout << "9:35 - 11:15 ïç ÀËÎÂÑ" << endl;
		cout << "11:25 - 12:50 ëê Ìàò àíàëèç" << endl;
		cout << "13:00 - 14:20 Ôèçè÷åñêàÿ êóëüòóðà" << endl;
		cout << "14:40 - 16:00 ëê ÊßÐÄ" << endl;
		break;
	default:
		cout << "Â ýòîò äåíü ìû íå ó÷èìñÿ" << endl;
	};
}
