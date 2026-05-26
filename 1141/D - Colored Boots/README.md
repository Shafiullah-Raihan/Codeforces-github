<h3><a href="https://codeforces.com/contest/1141/problem/D" target="_blank" rel="noopener noreferrer">Colored Boots</a></h3>

<div class="header"><div class="title">D. Colored Boots</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There are $$$n$$$ left boots and $$$n$$$ right boots. Each boot has a color which is denoted as a lowercase Latin letter or a question mark ('<span class="tex-font-style-tt">?</span>'). Thus, you are given two strings $$$l$$$ and $$$r$$$, both of length $$$n$$$. The character $$$l_i$$$ stands for the color of the $$$i$$$-th left boot and the character $$$r_i$$$ stands for the color of the $$$i$$$-th right boot.</p><p>A lowercase Latin letter denotes a specific color, but the question mark ('<span class="tex-font-style-tt">?</span>') denotes an indefinite color. Two specific colors are <span class="tex-font-style-it">compatible</span> if they are exactly the same. An indefinite color is <span class="tex-font-style-it">compatible</span> with any (specific or indefinite) color.</p><p>For example, the following pairs of colors are compatible: ('<span class="tex-font-style-tt">f</span>', '<span class="tex-font-style-tt">f</span>'), ('<span class="tex-font-style-tt">?</span>', '<span class="tex-font-style-tt">z</span>'), ('<span class="tex-font-style-tt">a</span>', '<span class="tex-font-style-tt">?</span>') and ('<span class="tex-font-style-tt">?</span>', '<span class="tex-font-style-tt">?</span>'). The following pairs of colors are <span class="tex-font-style-it">not</span> compatible: ('<span class="tex-font-style-tt">f</span>', '<span class="tex-font-style-tt">g</span>') and ('<span class="tex-font-style-tt">a</span>', '<span class="tex-font-style-tt">z</span>').</p><p>Compute the maximum number of pairs of boots such that there is one left and one right boot in a pair and their colors are compatible.</p><p>Print the maximum number of such pairs and the pairs themselves. A boot can be part of at most one pair.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains $$$n$$$ ($$$1 \le n \le 150000$$$), denoting the number of boots for each leg (i.e. the number of left boots and the number of right boots).</p><p>The second line contains the string $$$l$$$ of length $$$n$$$. It contains only lowercase Latin letters or question marks. The $$$i$$$-th character stands for the color of the $$$i$$$-th left boot.</p><p>The third line contains the string $$$r$$$ of length $$$n$$$. It contains only lowercase Latin letters or question marks. The $$$i$$$-th character stands for the color of the $$$i$$$-th right boot.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$k$$$ — the maximum number of compatible left-right pairs of boots, i.e. pairs consisting of one left and one right boot which have compatible colors.</p><p>The following $$$k$$$ lines should contain pairs $$$a_j, b_j$$$ ($$$1 \le a_j, b_j \le n$$$). The $$$j$$$-th of these lines should contain the index $$$a_j$$$ of the left boot in the $$$j$$$-th pair and index $$$b_j$$$ of the right boot in the $$$j$$$-th pair. All the numbers $$$a_j$$$ should be distinct (unique), all the numbers $$$b_j$$$ should be distinct (unique).</p><p>If there are many optimal answers, print any of them.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0041568521679151527" id="id001295296607945693" class="input-output-copier">Copy</div></div><pre id="id0041568521679151527">10
codeforces
dodivthree
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0017141122655313323" id="id004484648144097857" class="input-output-copier">Copy</div></div><pre id="id0017141122655313323">5
7 8
4 9
2 2
9 10
3 1
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009508291871842275" id="id0024849059014082397" class="input-output-copier">Copy</div></div><pre id="id009508291871842275">7
abaca?b
zabbbcc
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003151744326986109" id="id002173259381990702" class="input-output-copier">Copy</div></div><pre id="id003151744326986109">5
6 5
2 3
4 6
7 4
1 2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007396827534973274" id="id005663179057859642" class="input-output-copier">Copy</div></div><pre id="id007396827534973274">9
bambarbia
hellocode
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00752529735168457" id="id006546441952909348" class="input-output-copier">Copy</div></div><pre id="id00752529735168457">0
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008499000059055003" id="id0030561848663802393" class="input-output-copier">Copy</div></div><pre id="id008499000059055003">10
code??????
??????test
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006795886499716899" id="id009665690475451663" class="input-output-copier">Copy</div></div><pre id="id006795886499716899">10
6 2
1 6
7 3
3 5
4 8
9 7
5 1
2 4
10 9
8 10
</pre></div></div></div>