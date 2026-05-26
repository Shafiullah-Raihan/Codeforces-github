<h3><a href="https://codeforces.com/contest/1253/problem/A" target="_blank" rel="noopener noreferrer">Single Push</a></h3>

<div class="header"><div class="title">A. Single Push</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You're given two arrays $$$a[1 \dots n]$$$ and $$$b[1 \dots n]$$$, both of the same length $$$n$$$.</p><p>In order to perform a <span class="tex-font-style-it">push operation</span>, you have to choose three integers $$$l, r, k$$$ satisfying $$$1 \le l \le r \le n$$$ and $$$k  \gt  0$$$. Then, you will add $$$k$$$ to elements $$$a_l, a_{l+1}, \ldots, a_r$$$.</p><p>For example, if $$$a = [3, 7, 1, 4, 1, 2]$$$ and you choose $$$(l = 3, r = 5, k = 2)$$$, the array $$$a$$$ will become $$$[3, 7, \underline{3, 6, 3}, 2]$$$.</p><p>You can do this operation <span class="tex-font-style-bf">at most once</span>. Can you make array $$$a$$$ equal to array $$$b$$$?</p><p>(We consider that $$$a = b$$$ if and only if, for every $$$1 \le i \le n$$$, $$$a_i = b_i$$$)</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 20$$$) — the number of test cases in the input.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 100\ 000$$$) — the number of elements in each array.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \le a_i \le 1000$$$).</p><p>The third line of each test case contains $$$n$$$ integers $$$b_1, b_2, \ldots, b_n$$$ ($$$1 \le b_i \le 1000$$$).</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases doesn't exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output one line containing "<span class="tex-font-style-tt">YES</span>" if it's possible to make arrays $$$a$$$ and $$$b$$$ equal by performing at most once the described operation or "<span class="tex-font-style-tt">NO</span>" if it's impossible.</p><p>You can print each letter in any case (upper or lower).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005120088762724048" id="id006190067089761679" class="input-output-copier">Copy</div></div><pre id="id005120088762724048">4
6
3 7 1 4 1 2
3 7 3 6 3 2
5
1 1 1 1 1
1 2 1 3 1
2
42 42
42 42
1
7
6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0041540699404803605" id="id006140820171497028" class="input-output-copier">Copy</div></div><pre id="id0041540699404803605">YES
NO
YES
NO
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The first test case is described in the statement: we can perform a push operation with parameters $$$(l=3, r=5, k=2)$$$ to make $$$a$$$ equal to $$$b$$$.</p><p>In the second test case, we would need at least two operations to make $$$a$$$ equal to $$$b$$$.</p><p>In the third test case, arrays $$$a$$$ and $$$b$$$ are already equal.</p><p>In the fourth test case, it's impossible to make $$$a$$$ equal to $$$b$$$, because the integer $$$k$$$ has to be positive.</p></div>