function solution(line) {
	const N = line.length;
	const INF = Number.MAX_SAFE_INTEGER;
	const crossPoints = [];
	let minX = INF;
	let minY = INF;
	let maxX = -INF;
	let maxY = -INF;

	// ��ȹ1 - ������ ���� ���Ĵ�� ��� ���� �������� ��ǥ�� �ִ�/�ּڰ��� ���մϴ�.
	for (let i = 0; i < N - 1; i++) {
		for (let j = i + 1; j < N; j++) {
			const[a, b, e] = line[i];
			const[c, d, f] = line[j];

			const mod = a * d - b * c;
			if (!mod) continue; // �и� 0�� ��� -> ���� �����ϰų� ��ġ

			const xNumerator = b * f - e * d;
			const yNumerator = e * c - a * f;
			if (xNumerator % mod || yNumerator % mod) continue; // ������ �ƴ� ������

			const x = xNumerator / mod;
			const y = yNumerator / mod;

			crossPoints.push([x, y]); // ������ �߰�
			minX = Math.min(minX, x); // ��ǥ �ִ�/�ּڰ� ����
			minY = Math.min(minY, y);
			maxX = Math.max(maxX, x);
			maxY = Math.max(maxY, y);
		}
	}

	// ��ȹ2 - �ʺ�� ���̸� ��� ��, ���� ����ϴ�.
	const paper = [...Array(maxY - minY + 1)].map(() = > [...Array(maxX - minX + 1)].map(() = > '.'));

	crossPoints.forEach(([x, y]) = > {
		paper[maxY - y][x - minX] = '*';
	});

	return paper.map(v = > v.join(''));
}