<h3><a href="https://codeforces.com/contest/1204/problem/C" target="_blank" rel="noopener noreferrer">Anna, Svyatoslav and Maps</a></h3>

<div class="header"><div class="title">C. Anna, Svyatoslav and Maps</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-it">The main characters have been omitted to be short.</span></p><p>You are given a directed unweighted graph without loops with $$$n$$$ vertexes and a path in it (that path is not necessary simple) given by a sequence $$$p_1, p_2, \ldots, p_m$$$ of $$$m$$$ vertexes; for each $$$1 \leq i  \lt  m$$$ there is an arc from $$$p_i$$$ to $$$p_{i+1}$$$.</p><p>Define the sequence $$$v_1, v_2, \ldots, v_k$$$ of $$$k$$$ vertexes as <span class="tex-font-style-it">good</span>, if $$$v$$$ is a subsequence of $$$p$$$, $$$v_1 = p_1$$$, $$$v_k = p_m$$$, and $$$p$$$ is one of the shortest paths passing through the vertexes $$$v_1$$$, $$$\ldots$$$, $$$v_k$$$ in that order.</p><p>A sequence $$$a$$$ is a subsequence of a sequence $$$b$$$ if $$$a$$$ can be obtained from $$$b$$$ by deletion of several (possibly, zero or all) elements. It is obvious that the sequence $$$p$$$ is good but your task is to find the <span class="tex-font-style-bf">shortest</span> good subsequence.</p><p>If there are multiple shortest good subsequences, output any of them.</p><p> </p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$n$$$ ($$$2 \le n \le 100$$$) — the number of vertexes in a graph. </p><p>The next $$$n$$$ lines define the graph by an adjacency matrix: the $$$j$$$-th character in the $$$i$$$-st line is equal to $$$1$$$ if there is an arc from vertex $$$i$$$ to the vertex $$$j$$$ else it is equal to $$$0$$$. It is guaranteed that the graph doesn't contain loops.</p><p>The next line contains a single integer $$$m$$$ ($$$2 \le m \le 10^6$$$) — the number of vertexes in the path. </p><p>The next line contains $$$m$$$ integers $$$p_1, p_2, \ldots, p_m$$$ ($$$1 \le p_i \le n$$$) — the sequence of vertexes in the path. It is guaranteed that for any $$$1 \leq i  \lt  m$$$ there is an arc from $$$p_i$$$ to $$$p_{i+1}$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>In the first line output a single integer $$$k$$$ ($$$2 \leq k \leq m$$$) — the length of the shortest good subsequence. In the second line output $$$k$$$ integers $$$v_1$$$, $$$\ldots$$$, $$$v_k$$$ ($$$1 \leq v_i \leq n$$$) — the vertexes in the subsequence. If there are multiple shortest subsequences, print any. Any two consecutive numbers should be distinct.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0043221762321266033" id="id0019695009534302788" class="input-output-copier">Copy</div></div><pre id="id0043221762321266033">4
0110
0010
0001
1000
4
1 2 3 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0009356916849037222" id="id006371891808558995" class="input-output-copier">Copy</div></div><pre id="id0009356916849037222">3
1 2 4 </pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005094457898532704" id="id008984315382311435" class="input-output-copier">Copy</div></div><pre id="id005094457898532704">4
0110
0010
1001
1000
20
1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0008702392192697717" id="id0038540490839257335" class="input-output-copier">Copy</div></div><pre id="id0008702392192697717">11
1 2 4 2 4 2 4 2 4 2 4 </pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009245689667049589" id="id003627481827428277" class="input-output-copier">Copy</div></div><pre id="id009245689667049589">3
011
101
110
7
1 2 3 1 3 2 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006717857996587506" id="id008363824454138081" class="input-output-copier">Copy</div></div><pre id="id006717857996587506">7
1 2 3 1 3 2 1 </pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003992256243056008" id="id009124494057615927" class="input-output-copier">Copy</div></div><pre id="id003992256243056008">4
0110
0001
0001
1000
3
1 2 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007519603869693384" id="id008231793656847907" class="input-output-copier">Copy</div></div><pre id="id007519603869693384">2
1 4 </pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Below you can see the graph from the first example:</p><p><img class="tex-graphics" src="https://espresso.codeforces.com/3e0af0adb4ab1272fc9152aae8708228c6014c45.png" style="max-width: 100.0%;max-height: 100.0%;"></p><p>The given path is passing through vertexes $$$1$$$, $$$2$$$, $$$3$$$, $$$4$$$. The sequence $$$1-2-4$$$ is good because it is the subsequence of the given path, its first and the last elements are equal to the first and the last elements of the given path respectively, and the shortest path passing through vertexes $$$1$$$, $$$2$$$ and $$$4$$$ in that order is $$$1-2-3-4$$$. Note that subsequences $$$1-4$$$ and $$$1-3-4$$$ aren't good because in both cases the shortest path passing through the vertexes of these sequences is $$$1-3-4$$$.</p><p>In the third example, the graph is full so any sequence of vertexes in which any two consecutive elements are distinct defines a path consisting of the same number of vertexes.</p><p>In the fourth example, the paths $$$1-2-4$$$ and $$$1-3-4$$$ are the shortest paths passing through the vertexes $$$1$$$ and $$$4$$$.</p></div>