<h3><a href="https://codeforces.com/contest/1249/problem/B1" target="_blank" rel="noopener noreferrer">Books Exchange (easy version)</a></h3>

<div class="header"><div class="title">B1. Books Exchange (easy version)</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-bf">The only difference between easy and hard versions is constraints</span>.</p><p>There are $$$n$$$ kids, each of them is reading a unique book. At the end of any day, the $$$i$$$-th kid will give his book to the $$$p_i$$$-th kid (in case of $$$i = p_i$$$ the kid will give his book to himself). It is guaranteed that all values of $$$p_i$$$ are distinct integers from $$$1$$$ to $$$n$$$ (i.e. $$$p$$$ is a permutation). The sequence $$$p$$$ doesn't change from day to day, it is fixed.</p><p>For example, if $$$n=6$$$ and $$$p=[4, 6, 1, 3, 5, 2]$$$ then at the end of the first day the book of the $$$1$$$-st kid will belong to the $$$4$$$-th kid, the $$$2$$$-nd kid will belong to the $$$6$$$-th kid and so on. At the end of the second day the book of the $$$1$$$-st kid will belong to the $$$3$$$-th kid, the $$$2$$$-nd kid will belong to the $$$2$$$-th kid and so on.</p><p>Your task is to determine the number of the day the book of the $$$i$$$-th child is returned back to him for the first time for every $$$i$$$ from $$$1$$$ to $$$n$$$.</p><p>Consider the following example: $$$p = [5, 1, 2, 4, 3]$$$. The book of the $$$1$$$-st kid will be passed to the following kids:</p><ul> <li> after the $$$1$$$-st day it will belong to the $$$5$$$-th kid, </li><li> after the $$$2$$$-nd day it will belong to the $$$3$$$-rd kid, </li><li> after the $$$3$$$-rd day it will belong to the $$$2$$$-nd kid, </li><li> after the $$$4$$$-th day it will belong to the $$$1$$$-st kid. </li></ul><p>So after the fourth day, the book of the first kid will return to its owner. The book of the fourth kid will return to him for the first time after exactly one day.</p><p>You have to answer $$$q$$$ independent queries.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$q$$$ ($$$1 \le q \le 200$$$) — the number of queries. Then $$$q$$$ queries follow.</p><p>The first line of the query contains one integer $$$n$$$ ($$$1 \le n \le 200$$$) — the number of kids in the query. The second line of the query contains $$$n$$$ integers $$$p_1, p_2, \dots, p_n$$$ ($$$1 \le p_i \le n$$$, all $$$p_i$$$ are distinct, i.e. $$$p$$$ is a permutation), where $$$p_i$$$ is the kid which will get the book of the $$$i$$$-th kid.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each query, print the answer on it: $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$, where $$$a_i$$$ is the number of the day the book of the $$$i$$$-th child is returned back to him for the first time in this query.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003303914664354287" id="id00164338730333909" class="input-output-copier">Copy</div></div><pre id="id003303914664354287">6
5
1 2 3 4 5
3
2 3 1
6
4 6 2 1 5 3
1
1
4
3 4 1 2
5
5 1 2 4 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009655887048955242" id="id0004423811946154588" class="input-output-copier">Copy</div></div><pre id="id009655887048955242">1 1 1 1 1 
3 3 3 
2 3 3 2 1 3 
1 
2 2 2 2 
4 4 4 1 4 
</pre></div></div></div>