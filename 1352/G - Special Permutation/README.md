<h3><a href="https://codeforces.com/contest/1352/problem/G" target="_blank" rel="noopener noreferrer">Special Permutation</a></h3>

<div class="header"><div class="title">G. Special Permutation</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>A permutation of length $$$n$$$ is an array $$$p=[p_1,p_2,\dots,p_n]$$$, which contains every integer from $$$1$$$ to $$$n$$$ (inclusive) and, moreover, each number appears exactly once. For example, $$$p=[3,1,4,2,5]$$$ is a permutation of length $$$5$$$.</p><p>For a given number $$$n$$$ ($$$n \ge 2$$$), find a permutation $$$p$$$ in which absolute difference (that is, the absolute value of difference) of any two neighboring (adjacent) elements is between $$$2$$$ and $$$4$$$, inclusive. Formally, find such permutation $$$p$$$ that $$$2 \le |p_i - p_{i+1}| \le 4$$$ for each $$$i$$$ ($$$1 \le i  \lt  n$$$).</p><p>Print any such permutation for the given integer $$$n$$$ or determine that it does not exist.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases in the input. Then $$$t$$$ test cases follow.</p><p>Each test case is described by a single line containing an integer $$$n$$$ ($$$2 \le n \le 1000$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$t$$$ lines. Print a permutation that meets the given requirements. If there are several such permutations, then print any of them. If no such permutation exists, print <span class="tex-font-style-tt">-1</span>.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0032888810107626454" id="id0009576446122768234" class="input-output-copier">Copy</div></div><pre id="id0032888810107626454">6
10
2
4
6
7
13
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0003974475391014021" id="id009101102298096906" class="input-output-copier">Copy</div></div><pre id="id0003974475391014021">9 6 10 8 4 7 3 1 5 2 
-1
3 1 4 2 
5 3 6 2 4 1 
5 1 3 6 2 4 7 
13 9 7 11 8 4 1 3 5 2 6 10 12 
</pre></div></div></div>