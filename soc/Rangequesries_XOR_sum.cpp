#include <iostream>
#include <vector>

using namespace std;

// Segment Tree Node
struct Node {
    int xorSum;
};

// Function to calculate the XOR of two integers
int calculateXOR(int a, int b) {
    return a ^ b;
}

// Function to build the Segment Tree
void buildSegmentTree(vector<int>& arr, vector<Node>& tree, int node, int start, int end) {
    if (start == end) {
        tree[node].xorSum = arr[start];
        return;
    }

    int mid = (start + end) / 2;
    buildSegmentTree(arr, tree, 2 * node, start, mid);
    buildSegmentTree(arr, tree, 2 * node + 1, mid + 1, end);

    tree[node].xorSum = calculateXOR(tree[2 * node].xorSum, tree[2 * node + 1].xorSum);
}

// Function to query the XOR sum in a range
int queryXORSum(vector<Node>& tree, int node, int start, int end, int left, int right) {
    if (start > right || end < left)
        return 0;
    
    if (start >= left && end <= right)
        return tree[node].xorSum;

    int mid = (start + end) / 2;
    int leftXOR = queryXORSum(tree, 2 * node, start, mid, left, right);
    int rightXOR = queryXORSum(tree, 2 * node + 1, mid + 1, end, left, right);

    return calculateXOR(leftXOR, rightXOR);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Build the Segment Tree
    vector<Node> tree(4 * n); // The size of the segment tree is usually taken as 4 times the array size

    buildSegmentTree(arr, tree, 1, 0, n - 1);

    // Process the queries
    while (q--) {
        int a, b;
        cin >> a >> b;
        a--; // Convert to 0-based index
        b--; // Convert to 0-based index

        cout << queryXORSum(tree, 1, 0, n - 1, a, b) << "\n";
    }

    return 0;
}
