struct Point {
	int x;
	int y;
};

struct PointCollection {
	struct Node {
		Point point;
		Node* pnextNode;
	};
	Node* pheadNode;
	Node* ptailNode;
	size_t count;
};

void AddPoint(PointCollection& obj, Point point);
void RemovePoint(PointCollection& obj, Point point);

int main() {
	PointCollection obj = { nullptr, nullptr, 0 };

	Point u = { 1, -1 };
	AddPoint(obj, u);

	Point v = { 1, 5 };
	AddPoint(obj, v);

	Point w = { 5, -1 };
	AddPoint(obj, w);

	RemovePoint(obj, v);
	RemovePoint(obj, w);
	RemovePoint(obj, u);
}

void AddPoint(PointCollection& obj, Point point) {
	PointCollection::Node* newNode = new PointCollection::Node();
	newNode->point.x = point.x;
	newNode->point.y = point.y;
	newNode->pnextNode = nullptr;

	if (obj.count == 0) {
		obj.pheadNode = obj.ptailNode = newNode;
		obj.count++;
		return;
	}

	obj.ptailNode->pnextNode = newNode;
	obj.ptailNode = newNode;
	obj.count++;
}

void RemovePoint(PointCollection& obj, Point point) {
	if (obj.count == 0) return;

	PointCollection::Node* pprevNode = nullptr;
	PointCollection::Node* pdelNode = obj.pheadNode;

	/* locate the node to be deleted */
	while (pdelNode != nullptr) {
		if (pdelNode->point.x == point.x && pdelNode->point.y == point.y)
			break; // found the node
		pprevNode = pdelNode;
		pdelNode = pdelNode->pnextNode;
	}

	if (pdelNode != nullptr) { // node to be deleted is located
		if (pprevNode == nullptr) { // means pdelNode is referring to first node
			obj.pheadNode = pdelNode->pnextNode;
		}
		else { // means pdelNode is referring to some intermediate node or last node.
			pprevNode->pnextNode = pdelNode->pnextNode;
		}

		// ptailNode must point to second last node if node to be deleted is the last node
		if (pdelNode->pnextNode == nullptr) {
			obj.ptailNode = pprevNode;
		}

		// actual deletion of the node
		pdelNode->pnextNode = nullptr;
		delete pdelNode;
		pdelNode = nullptr;

		// reduce count by 1, since one node is deleted from the list.
		obj.count--;
	}
}

/*
- Note struct Node is nested within struct PointCollection.
*/