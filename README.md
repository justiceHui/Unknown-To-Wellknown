# 나 빼고 다 아는 그들만의 웰노운 테크닉 모음

## 목표

* 고인물의 대화를 이해하자
* 나도 아는 척해보자
* 랭작 좀 해보자

### TODO

* 주제별 설명글 링크 달기
* 주제별 설명 [내 블로그](https://justicehui.github.io)에 올리기
* 연습 문제 풀이 올리기

## 목차

* 그들만의 웰노운 사전지식
  * 동적 계획법 관련
    * Berlekamp-Massey
    * Aliens Trick
    * Slope Trick
  * 자료구조
    * Segment Tree Beats
    * Kinetic Segment Tree
    * BBST(Splay Tree, Treap)
    * Dynamic Tree(Link/Cut Tree, Euler Tour Tree, Top Tree)
    * Stern-Brocot Tree
    * Permutation Tree
  * 그래프 이론
    * Push Relabel Algorithm, Cost Scaling Algorithm
    * Dual of Planar Graph
    * Dominator Tree
    * Directed MST
    * Offline Incremental SCC, Offline Dynamic MST
    * Chordal Graph
    * Treewidth, Tree Decomposition
    * General Graph Matching
  * 문자열
    * Palindrome Tree(A.K.A. eerTree)
    * Suffix Automaton, Suffix Tree
    * Run Enumerate
  * 수학
    * FFT, NTT
    * Polynomial Division, Kitamasa
    * FWHT
    * Multipoint Evaluation
    * Polynomial Interpolation
    * Generating Function
    * Mobius Function
    * Young Tableau Diagram, RSK Correspondence
    * Matroid
    * LGV Theorem
  * 기하
    * Voronoi Diagram, Dulaunay Triangulation
* 그들만의 웰노운 문제 유형
  * 민코프스키 합 DP
  * Regions Trick
  * Bulldozer Trick
  * 쿼리를 $\sqrt N$ 또는 $\sqrt Q$개씩 묶어서 처리하는 유형
  * 세그먼트 트리를 이용해 그래프의 간선 개수를 줄이는 유형
  * 볼록 다각형의 접선을 이용해 최적화하는 유형
  * 트리 위에서 exchange argument
* 그들만의 이상한 최적화
  * Fast I/O
  * Bitset을 이용한 최적화
  * SIMD
  * Barrett Reduction
* 그들만의 이상한 밈

## 그들만의 웰노운 사전지식

### Berlekamp-Massey

* 튜토리얼
  * (한글) [koosaga](https://koosaga.com/231)
* 연습 문제 - 점화식 계산
  * [Library Checker - Find Linear Recurrence](https://judge.yosupo.jp/problem/find_linear_recurrence)
  * [BOJ 12916 K-Path](https://www.acmicpc.net/problem/12916)
  * [BOJ 14559 Protocol](https://www.acmicpc.net/problem/14559)
  * [BOJ 12797 연금술](https://www.acmicpc.net/problem/12797)
  * [BOJ 13727 5차원 구사과 초콜릿](https://www.acmicpc.net/problem/13727)
* 연습 문제 - 최소 다항식
  * [Library Checker - Determinant of Sparse Matrix](https://judge.yosupo.jp/problem/sparse_matrix_det)
  * [BOJ 27071 크루스칼 알고리즘](https://www.acmicpc.net/problem/27071)

### Aliens Trick

* 튜토리얼
  * (한글) [koosaga](https://koosaga.com/243)
  * (영어) [robert1003](https://robert1003.github.io/2020/02/26/dp-opt-wqs-binary-search.html)
  * (영어) [USACO Guide](https://usaco.guide/adv/lagrange)
* 연습 문제 - 최적값 구하기
  * [BOJ 19672 Feast](https://www.acmicpc.net/problem/19672)
  * [Edu CF 79 F](https://codeforces.com/contest/1279/problem/F)
  * [BOJ 20090 Aliens](https://www.acmicpc.net/problem/20090)
  * [BOJ 14510 Blazing New Trails](https://www.acmicpc.net/problem/14510)
  * [BOJ 17439 꽃집](https://www.acmicpc.net/problem/17439)
* 연습 문제 - 역추적
  * [BOJ 18456 Jealous Split](https://www.acmicpc.net/problem/18456)

### Slope Trick

* 튜토리얼
  * (한글) [jwvg0425](https://jwvg0425-ps.tistory.com/98)
  * (한글) [koosaga](https://koosaga.com/243)
  * (영어) [USACO Guide](https://usaco.guide/adv/slope-trick)
  * (한글) [lobo_prix](https://blog.tuxedcat.com/all/algorithm/doc/dp/slope%20trick%201.html)
* 연습 문제
  * [BOJ 13323 BOJ 수열 1](https://www.acmicpc.net/problem/13323)
  * [BOJ 18720 Bookface](https://www.acmicpc.net/problem/18720)
  * [BOJ 19693 Safety](https://www.acmicpc.net/problem/19693)
  * [BOJ 12736 Fireworks](https://www.acmicpc.net/problem/12736)

### Segment Tree Beats

* 튜토리얼
  * (영어) [jiry_2](https://codeforces.com/blog/entry/57319)
  * (영어) [Errichto](https://youtu.be/wFqKgrW1IMQ)
  * (한글) [rdd6584](https://github.com/infossm/infossm.github.io/blob/7571d3d0ac66f7dd60f35cc4e826d20995ca1875/_posts/2019-10-19-Segment-Tree-Beats.md)
  * (한글) [koosaga](https://koosaga.com/307)
* 연습 문제
  * [BOJ 17474 수열과 쿼리 26](https://www.acmicpc.net/problem/17474)
  * [BOJ 14899 수열과 쿼리 19](https://www.acmicpc.net/problem/14899)
  * [BOJ 17476 수열과 쿼리 28](https://www.acmicpc.net/problem/17476)
  * [BOJ 19277 ADD, DIV, MAX](https://www.acmicpc.net/problem/19277)
  * [BOJ 17473 수열과 쿼리 25](https://www.acmicpc.net/problem/17473)
  * [BOJ 17477 수열과 쿼리 29](https://www.acmicpc.net/problem/17477)
  * [BOJ 17475 수열과 쿼리 27](https://www.acmicpc.net/problem/17475)

### Kinetic Segment Tree

* 튜토리얼
  * (한글) [koosaga](https://koosaga.com/307)
* 연습 문제
  * [BOJ 2788 스타트업](https://www.acmicpc.net/problem/2788)
  * [BOJ 26144 꺾이지 않는 마음 3](https://www.acmicpc.net/problem/26144)

### BBST(Splay Tree, Treap)

* 튜토리얼 - Splay Tree
  * (한글) [cubelover](https://cubelover.tistory.com/10)
  * (영어) [Zhtluo](https://zhtluo.com/cp/splay-tree-one-tree-to-rule-them-all.html) - 시간 복잡도 증명이 궁금하다면...
* 튜토리얼 - Treap
  * (영어) [SecondThread](https://codeforces.com/blog/entry/84017)
* 연습 문제
  * [BOJ 13159 배열](https://www.acmicpc.net/problem/13159)
  * [BOJ 17607 수열과 쿼리 31](https://www.acmicpc.net/problem/17607)
  * [BOJ 13543 수열과 쿼리 2](https://www.acmicpc.net/problem/13543)
  * [BOJ 2844 자료 구조](https://www.acmicpc.net/problem/2844)
  * [BOJ 19497 Subtract if Greater!](https://www.acmicpc.net/problem/19497)
  * [BOJ 15389 Imelda’s Shopping Spree](https://www.acmicpc.net/problem/15389)
* 연습 문제 - Persistent BBST
  * [BOJ 17486 수열과 쿼리 30](https://www.acmicpc.net/problem/17486)

### Dynamic Tree(Link/Cut Tree, Euler Tour Tree, Top Tree)

* 튜토리얼 - Link/Cut Tree
  * (한글) [imeimi](https://imeimi.tistory.com/27)
* 튜토리얼 - Euler Tour Tree
  * (영어) [PurpleCrayon](https://codeforces.com/blog/entry/102087)
* 튜토리얼 - Top Tree
  * (한글) [koosaga](https://github.com/infossm/infossm.github.io/blob/master/_posts/2021-03-21-toptree.md)
* 연습 문제 - 공통
  * [BOJ 13539 트리와 쿼리 11](https://www.acmicpc.net/problem/13539)
* 연습 문제 - Link/Cut Tree
  * [BOJ 21973 남극 탐험](https://www.acmicpc.net/problem/21973)
  * [Library Checker - Dynamic Tree Vertex Add Path Sum](https://judge.yosupo.jp/problem/dynamic_tree_vertex_add_path_sum)
  * [Library Checker - Dynamic Tree Vertex Set Path Composite](https://judge.yosupo.jp/problem/dynamic_tree_vertex_set_path_composite)
  * [BOJ 10724 판게아 2](https://www.acmicpc.net/problem/10724)
  * [BOJ 18861 가슴 속에 무엇인가](https://www.acmicpc.net/problem/18861)
  * [BOJ 22906 장난감 오렌지 만들기](https://www.acmicpc.net/problem/22906)
  * [BOJ 18374 함수의 맛](https://www.acmicpc.net/problem/18374)
* 연습 문제 - Euler Tour Tree
  * [Library Checker - Dynamic Tree Vertex Add Subtree Sum](https://judge.yosupo.jp/problem/dynamic_tree_vertex_add_subtree_sum)
  * [Library Checker - Dynamic Tree Subtree Add Subtree Sum](https://judge.yosupo.jp/problem/dynamic_tree_subtree_add_subtree_sum)
  * [BOJ 27974 트리와 쿼리 21](https://www.acmicpc.net/problem/27974)
* 연습 문제 - Top Tree
  * [BOJ 17936 트리와 쿼리 13](https://www.acmicpc.net/problem/17936)
  * [BOJ 21728 트리와 2개의 지름](https://www.acmicpc.net/problem/21728)

### Stern-Brocot Tree

* 튜토리얼
  * (한글) [myungwoo](https://blog.myungwoo.kr/126)
* 연습 문제
  * [BOJ 22662 Pi is Three](https://www.acmicpc.net/problem/22662)

### Permutation Tree

* 튜토리얼
  * (영어) [errorgorn](https://codeforces.com/blog/entry/78898)
  * (중국어) [OI-Wiki](https://oi-wiki.org/ds/divide-combine/)
* 연습 문제
  * [BOJ 25503 순열 뒤집기](https://www.acmicpc.net/problem/25503)
  * [BOJ 23720 움얌얌](https://www.acmicpc.net/problem/23720)

### Push Relabel Algorithm, Cost Scaling Algorithm

* 튜토리얼 - Push Relabel Algorithm
  * (한글) [koosaga](https://koosaga.com/287)
* 튜토리얼 - Cost Scaling Algorithm
  * (한글) [koosaga](https://koosaga.com/289)
* 연습 문제 - Push Relabel Algorithm
  * [LibreOJ 127](https://loj.ac/p/127)
  * [BOJ 13161 분단의 슬픔](https://www.acmicpc.net/problem/13161)
* 연습 문제 - Cost Scaling Algorithm
  * [LiberOJ 102](https://loj.ac/p/102)
  * [BOJ 19022 Flow](https://www.acmicpc.net/problem/19022)

### Dual of Planar Graph

* 튜토리얼
  * (한글) [ahgus89](https://algoshitpo.github.io/2020/03/23/dual/)
* 연습 문제
  * [BOJ 13145 Masonry Bridge](https://www.acmicpc.net/problem/13145)
  * [BOJ 17442 삼분 그래프](https://www.acmicpc.net/problem/17442)
  * [BOJ 15308 비밀 요원](https://www.acmicpc.net/problem/15308)
  * [BOJ 18941 평면그래프와 게임](https://www.acmicpc.net/problem/18941)

### Dominator Tree

* 튜토리얼
  * (한글) [jinhan814](https://blog.naver.com/jinhan814/222636375208)
  * (한글) [koosaga](https://koosaga.com/201)
  * (한글) [mhy908](https://lunarhy.tistory.com/11) - DAG에서의 Dominator Tree
  * (영어) [Baba](https://codeforces.com/blog/entry/22811) - $O((V+E) \log V)$ 알고리즘이 궁금하다면...
* 연습 문제 - DAG
  * [BOJ 7777 병원](https://www.acmicpc.net/problem/7777)
  * [BOJ 19335 Increasing Costs](https://www.acmicpc.net/problem/19335)
* 연습 문제
  * [Library Checker - Dominator Tree](https://judge.yosupo.jp/problem/dominatortree)
  * [BOJ 20174 Ink Mix](https://www.acmicpc.net/problem/20174)
  * [BOJ 25424 School Road](https://www.acmicpc.net/problem/25424)

### Directed MST

* 튜토리얼
  * (한글) [gina0605](https://gina65.tistory.com/23) - $O(VE)$ 알고리즘
  * (한글) [koosaga](https://koosaga.com/265) - $O((V+E) \log E)$ 알고리즘
* 연습 문제
  * [Library Checker - Directed MST](https://judge.yosupo.jp/problem/directedmst)
  * [BOJ 16127 미생물 키우기](https://www.acmicpc.net/problem/16127)
  * [BOJ 19264 Hung Fu](https://www.acmicpc.net/problem/19264)
  * [BOJ 9582 Dictionary](https://www.acmicpc.net/problem/9582)

### Offline Incremental SCC, Offline Dynamic MST

* 튜토리얼 - SCC
  * (한글) [chootose](https://github.com/infossm/infossm.github.io/blob/master/_posts/2021-03-21-offline-incremental-SCC.md)
* 튜토리얼 - MST
  * (한글) [koosaga](https://koosaga.com/211)
* 연습 문제 - SCC
  * [BOJ 19028 Link Cut Diagraph](https://www.acmicpc.net/problem/19028)
  * [BOJ 8496 Godzilla](https://www.acmicpc.net/problem/8496)
* 연습 문제 - MST
  * [BOJ 10724 판게아 2](https://www.acmicpc.net/problem/10724)

### Chordal Graph

* 튜토리얼
  * (한글) [ainta](https://github.com/infossm/infossm.github.io/blob/master/_posts/2019-04-20-Finding%20perfect%20elimination%20ordering%20in%20choral%20graphs.md)
* 연습 문제
  * [Library Checker - Chordal Graph Recognition](https://judge.yosupo.jp/problem/chordal_graph_recognition)
  * [BOJ 16003 자석 장난감](https://www.acmicpc.net/problem/16003)
  * [BOJ 16365 Square Root](https://www.acmicpc.net/problem/16365)

### Treewidth, Tree Decomposition

* 튜토리얼
  * (한글) [koosaga](https://koosaga.com/295)
  * (영어) [Ignasi Sau](https://www.lirmm.fr/~sau/talks/tw-Ignasi-2021.pdf)
* 연습 문제 - 트리 분할
  * [BOJ 16183 Electronic Circuit](https://www.acmicpc.net/problem/16183) - 주어진 그래프가 Series-Parallel Graph인지 판별
  * [Library Checker - Tree Decomposition (Width 2)](https://judge.yosupo.jp/problem/tree_decomposition_width_2) - Series-Parallel Graph의 Tree Decomposition을 구하는 문제
  * [BOJ 26415 Ghost](https://www.acmicpc.net/problem/26415) - Halin Graph의 Tree Decomposition을 구하는 문제
* 연습 문제 - DP
  * [BOJ 22982 선인장의 독립집합](https://www.acmicpc.net/problem/22982)
  * [BOJ 17824 아폴로니안 네트워크](https://www.acmicpc.net/problem/17824)
  * [BOJ 19267 Kid's Nightmare](https://www.acmicpc.net/problem/19267)
* 연습 문제 - 최단 경로 쿼리
  * [BOJ 11738 Distance on Triangulation](https://www.acmicpc.net/problem/11738)
  * [BOJ 17366 %](https://www.acmicpc.net/problem/17366)
  * [BOJ 27814 Emacs++](https://www.acmicpc.net/problem/27814)
  * [BOJ 17697 Railway Trip](https://www.acmicpc.net/problem/17697)
  * [BOJ 24710 Station](https://www.acmicpc.net/problem/24710)
  * [BOJ 25407](https://www.acmicpc.net/problem/25407)

### General Graph Matching

* 튜토리얼
  * (한글) [koosaga](https://koosaga.com/258)
* 연습 문제 - 무가중치
  * [BOJ 15737 일반 그래프 매칭](https://www.acmicpc.net/problem/15737)
  * [BOJ 21086 Smol Vertex Cover](https://www.acmicpc.net/problem/21086)
  * [BOJ 16661 Bimatching](https://www.acmicpc.net/problem/16661)
  * [BOJ 18447 Angle Beats](https://www.acmicpc.net/problem/18447)
* 연습 문제 - 가중치
  * [BOJ 15741 일반 그래프 최대 가중치 매칭](https://www.acmicpc.net/problem/15741)
  * [BOJ 21639 Cooking](https://www.acmicpc.net/problem/21639)
  * [BOJ 18519 Planar Max Cut](https://www.acmicpc.net/problem/18519)

### Palindrome Tree (A.K.A. eerTree)

* 튜토리얼
  * (한글) [Karuna](https://algoshitpo.github.io/2020/03/23/eertree/)
  * (영어) [Alessio Piergiacomi](https://medium.com/@alessiopiergiacomi/eertree-or-palindromic-tree-82453e75025b)
* 연습 문제
  * [BOJ 10066 팰린드롬](https://www.acmicpc.net/problem/10066)
  * [BOJ 15893 가장 긴 공통부분 팰린드롬](https://www.acmicpc.net/problem/15893)
  * [BOJ 18285 Jaki Jovsi](https://www.acmicpc.net/problem/18285)

### Suffix Automaton, Suffix Tree

* 튜토리얼
  * (한글) [koosaga](https://koosaga.com/314)
* 연습 문제
  * [BOJ 11479 서로 다른 부분 문자열의 개수 2](https://www.acmicpc.net/problem/11479)
  * [BOJ 16907 서로 다른 부분 문자열 쿼리 2](https://www.acmicpc.net/problem/16907)
  * [BOJ 19515 Jong Hyok and String](https://www.acmicpc.net/problem/19515)
  * [BOJ 13541 K번째 부분 문자열](https://www.acmicpc.net/problem/13541)
  * [BOJ 26109 Longest Substring](https://www.acmicpc.net/problem/26109)
  * [BOJ 14436 서로 다른 부분 문자열 쿼리](https://www.acmicpc.net/problem/14436)
  * [BOJ 18544 Incomparable Pairs](https://www.acmicpc.net/problem/18544)
  * [BOJ 18349 천지창조](https://www.acmicpc.net/problem/18349)

### Run Enumerate

* 튜토리얼
  * (영어) [koosaga](https://codeforces.com/blog/entry/106725)
* 연습 문제
  * [Library Checker - Run Enumerate](https://judge.yosupo.jp/problem/runenumerate)
  * [BOJ 23495 Longest Lyndon Prefix](https://www.acmicpc.net/problem/23495)
  * [BOJ 25111 Repetitions](https://www.acmicpc.net/problem/25111)
  * [BOJ 19020 Decomposition](https://www.acmicpc.net/problem/19020)
  * [BOJ 16284 Lucid Strings](https://www.acmicpc.net/problem/16284)

### FFT, NTT

* 튜토리얼
  * (한글) [namnamseo](https://namnamseo.tistory.com/entry/FFT-in-competitive-programming)
  * (한글) [jhnah917](https://algoshitpo.github.io/2020/05/20/fft-ntt/) - 정확도 높은 FFT와 NTT
* 연습 문제
  * [Library Checker - Convolution](https://judge.yosupo.jp/problem/convolution_mod)
  * [Library Checker - Convolution (Mod 1,000,00,007)](https://judge.yosupo.jp/problem/convolution_mod_1000000007)
  * [BOJ 22289 큰 수 곱셈 (3)](https://www.acmicpc.net/problem/22289)
  * [BOJ 10531 Golf Bot](https://www.acmicpc.net/problem/10531)
  * [BOJ 1067 이동](https://www.acmicpc.net/problem/1067)
  * [BOJ 13279 곱의 합 쿼리](https://www.acmicpc.net/problem/13279)
  * [BOJ 13575 보석 가게](https://www.acmicpc.net/problem/13575)
  * [BOJ 11385 씽크스몰](https://www.acmicpc.net/problem/11385)
  * [BOJ 14882 다항식과 쿼리](https://www.acmicpc.net/problem/14882)

### Polynomial Division, Kitamasa

* 튜토리얼 - Polynomial Division
  * (한글) [ho94949](https://github.com/infossm/infossm.github.io/blob/master/_posts/2019-06-17-Multipoint-evaluation.md)
  * (한글) [hyperbolic](https://hyperbolic.tistory.com/4)
  * (한글) [cubelover](https://cubelover.tistory.com/22)
* 튜토리얼 - Kitamasa
  * (한글) [jhnah917](https://justicehui.github.io/hard-algorithm/2021/03/13/kitamasa/)
* 연습 문제
  * [Library Checker - Division of Polynomials](https://judge.yosupo.jp/problem/division_of_polynomials)
  * [BOJ 13758 RNG 2](https://www.acmicpc.net/problem/13758)

### FWHT

* 튜토리얼
  * (한글) [gina0605](https://gina65.tistory.com/30)
  * (영어) [upobir](https://codeforces.com/blog/entry/71899)
* 연습 문제
  * [BOJ 14878 부분 수열 XOR합](https://www.acmicpc.net/problem/14878)
  * [BOJ 25563 AND, OR, XOR](https://www.acmicpc.net/problem/25563)
  * [Library Checker - Subset Convolution](https://judge.yosupo.jp/problem/subset_convolution)

### Multipoint Evaluation

* 튜토리얼
  * (한글) [ho94949](https://github.com/infossm/infossm.github.io/blob/master/_posts/2019-06-17-Multipoint-evaluation.md)
  * (한글) [hyperbolic](https://hyperbolic.tistory.com/5)
* 연습 문제
  * [Library Checker - Multipoint Evaluation](https://judge.yosupo.jp/problem/multipoint_evaluation)
  * [BOJ 18168 Game with Polynomials 2](https://www.acmicpc.net/problem/18168)

### Polynomial Interpolation

* 튜토리얼
  * (한글) [hyperbolic](https://hyperbolic.tistory.com/5)
* 연습 문제
  * [Library Checker - Polynomial Interpolation](https://judge.yosupo.jp/problem/polynomial_interpolation)

### Generating Function

* 튜토리얼
  * (한글) [evenharder](https://github.com/infossm/infossm.github.io/blob/master/_posts/2019-10-19-generating-function.md)
  * (한글) [yclock - 1](https://github.com/infossm/infossm.github.io/blob/master/_posts/2021-04-18-generating-functions-1.md), [yclock - 2](https://github.com/infossm/infossm.github.io/blob/master/_posts/2021-05-17-generating-functions-2.md)
* 연습 문제
  * [BOJ 16725 다항 계수](https://www.acmicpc.net/problem/16725)
  * [BOJ 13542 우표 구매하기 (Hard)](https://www.acmicpc.net/problem/13542)
  * [BOJ 26037 지수 · 로그와 테일러 다항식(Large)](https://www.acmicpc.net/problem/26037)
  * [BOJ 18248 제야의 종](https://www.acmicpc.net/problem/18248)

### Mobius Function

* 튜토리얼
  * (한글) [rkm0959 - 1](https://rkm0959.tistory.com/186), [rkm0959 - 2](https://rkm0959.tistory.com/184)
  * (한글) [snowflake - 1](https://xy-plane.tistory.com/16), [snowflake - 2](https://xy-plane.tistory.com/17), [snowflake - 3](https://xy-plane.tistory.com/18), [snowflake - 4](https://xy-plane.tistory.com/19)
  * (한글) [ahgus89](https://ahgus89.github.io/algorithm/M%C3%B6bius-inversion/)
* 연습 문제
  * [BOJ 16409 Coprime Integers](https://www.acmicpc.net/problem/16409)
  * [BOJ 14860 GCD 곱](https://www.acmicpc.net/problem/14860)
  * [BOJ 11691 LCM(i, j)](https://www.acmicpc.net/problem/11691)
  * [BOJ 14861 LCM 더하기](https://www.acmicpc.net/problem/14861)

### Young Tableau Diagram, RSK Correspondence

* 튜토리얼
  * (영어) [mango_lassi](https://codeforces.com/blog/entry/98167)
  * (한글) [yclock](https://youngyojun.github.io/secmem/2021/09/19/young-tableaux/)
* 연습 문제
  * [BOJ 18594 Three Investigators](https://www.acmicpc.net/problem/18594)
  * [BOJ 18461 Disjoint LIS](https://www.acmicpc.net/problem/18461)

### Matroid

* 튜토리얼
  * (한글) [ainta - 1](https://github.com/infossm/infossm.github.io/blob/master/_posts/2019-05-08-introduction-to-matroid.md), [ainta - 2](https://github.com/infossm/infossm.github.io/blob/master/_posts/2019-06-17-Matroid-Intersection.md)
  * (영어) [ATSTNG](https://codeforces.com/blog/entry/69287)
  * (한글) [imeimi](https://imeimi.tistory.com/45)
* 연습 문제
  * [BOJ 3836 Coin Collecting](https://www.acmicpc.net/problem/3836)
  * [BOJ 16046 Rainbow Graph](https://www.acmicpc.net/problem/16046)
  * [BOJ 18890 Seollal](https://www.acmicpc.net/problem/18890)
  * [BOJ 21727 아즈텍의 섬](https://www.acmicpc.net/problem/21727)
  * [BOJ 23052 두 트리](https://www.acmicpc.net/problem/23052)

### LGV Theorem

* 튜토리얼
  * (영어) [miaowtin](https://codeforces.com/blog/entry/108395)
  * (중국어) [OI-Wiki](https://oi-wiki.org/graph/lgv/)
* 연습 문제
  * [BOJ 19514 Intersection is Not Allowed!](https://www.acmicpc.net/problem/19514)
  * [BOJ 21265 Ascending Matrix](https://www.acmicpc.net/problem/21265)

### Voronoi Diagram, Dulaunay Triangulation

* 연습 문제
  * [BOJ 15695 Panda Preserve](https://www.acmicpc.net/problem/15695)
  * [BOJ 21065 Friendship Circles](https://www.acmicpc.net/problem/21065)
  * [BOJ 5401 Escape from the Minefield](https://www.acmicpc.net/problem/5401)
  * [BOJ 18349 천지창조](https://www.acmicpc.net/problem/18349)

## 그들만의 웰노운 문제 유형

### 민코프스키 합 DP

* 튜토리얼
  * (한글) [arnold518](https://arnold518.tistory.com/72)
* 연습 문제
  * [BOJ 8987 수족관 3](https://www.acmicpc.net/problem/8987)
  * [BOJ 17674 특별관광도시](https://www.acmicpc.net/problem/17674)
  * [BOJ 18477 Jiry Matchings](https://www.acmicpc.net/problem/18477)

### Regions Trick

* 튜토리얼
  * (한글) [jhnah917](https://github.com/justiceHui/SSU-SCCC-Study/blob/master/2022-winter-adv/slide/01.pdf) - 쿼리 캐싱 파트
* 연습 문제
  * [BOJ 12857 홍준이는 문자열을 좋아해](https://www.acmicpc.net/problem/12857)
  * [BOJ 1762 평면그래프와 삼각형](https://www.acmicpc.net/problem/1762)
  * [BOJ 25952 Rectangles](https://www.acmicpc.net/problem/25952)
  * [BOJ 22316 Regions](https://www.acmicpc.net/problem/22316)
  * [BOJ 25504 최적 경로와 쿼리](https://www.acmicpc.net/problem/25504)
  * [BOJ 25505 공통 부분 문자열 쿼리](https://www.acmicpc.net/problem/25505)

### Bulldozer Trick

* 튜토리얼
  * (한글) [jhnah917](https://github.com/justiceHui/SSU-SCCC-Study/blob/master/2022-winter-adv/slide/05.pdf)
* 연습 문제
  * [BOJ 9484 최대삼각형, 최소삼각형](https://www.acmicpc.net/problem/9484)
  * [BOJ 16783 Bulldozer](https://www.acmicpc.net/problem/16783)
  * [BOJ 17973 Quadrilaterals](https://www.acmicpc.net/problem/17973)
  * [BOJ 17739 Constellation 2](https://www.acmicpc.net/problem/17739)
  * [BOJ 17625 고압선](https://www.acmicpc.net/problem/17625)

### 쿼리를 $\sqrt N$ 또는 $\sqrt Q$개씩 묶어서 처리하는 유형

* 튜토리얼
  * (한글) [jhnah917](https://github.com/justiceHui/SSU-SCCC-Study/blob/master/2022-winter-adv/slide/01.pdf) - 쿼리에 대한 버킷 파트
* 연습 문제
  * [BOJ 17635 다리](https://www.acmicpc.net/problem/17635)
  * [BOJ 5823 코끼리](https://www.acmicpc.net/problem/5823)
  * [BOJ 18254 쿼리와 쿼리](https://www.acmicpc.net/problem/18254)
  * [BOJ 16793 Collapse](https://www.acmicpc.net/problem/16793)

### 세그먼트 트리를 이용해 그래프의 간선 개수를 줄이는 유형

* 튜토리얼
  * (한글) [jhnah917](https://justicehui.github.io/tutorial/2020/09/05/graph-with-segment-tree/)
* 연습 문제
  * [BOJ 18193 비행기 타고 가요](https://www.acmicpc.net/problem/18193)
  * [ARC 069 F Flags](https://atcoder.jp/contests/arc069/tasks/arc069_d)
  * [BOJ 8274 Journeys](https://www.acmicpc.net/problem/8274)
  * [BOJ 18362 Desert](https://www.acmicpc.net/problem/18362)

### 볼록 다각형의 접선을 이용해 최적화하는 유형

* 튜토리얼
  * (한글) [jhnah917](https://github.com/justiceHui/SSU-SCCC-Study/blob/master/2022-autumn-adv/slide/05.pdf) - 볼록 다각형의 접선을 이용한 최적화 파트
* 연습 문제
  * [BOJ 15310 아티스트](https://www.acmicpc.net/problem/15310)
  * [BOJ 5257 timeismoney](https://www.acmicpc.net/problem/5257)
  * [BOJ 25009 뚫기](https://www.acmicpc.net/problem/25009)

### 트리 위에서 exchange argument

* 튜토리얼
* 연습 문제
  * [BOJ 9539 Escape](https://www.acmicpc.net/problem/9539)
  * [BOJ 18596 Monster Hunter](https://www.acmicpc.net/problem/18596)
  * [BOJ 17590 Prospecting](https://www.acmicpc.net/problem/17590)
  * [BOJ 1763 트리 색칠](https://www.acmicpc.net/problem/1763)
  * [AGC 023 F 01 on Tree](https://atcoder.jp/contests/agc023/tasks/agc023_f)

## 그들만의 이상한 최적화

### Fast I/O

* 튜토리얼
  * (한글) [cgiosy](https://cgiosy.github.io/posts/fast-io)
* 연습 문제
  * [BOJ 11921 0.1](https://www.acmicpc.net/problem/11921)
  * [BOJ 18702 Array Queries](https://www.acmicpc.net/problem/18702) - 수열과 쿼리 28 + Fast I/O

### Bitset을 이용한 최적화

* 튜토리얼
  * (영어) [Errichto](https://codeforces.com/blog/entry/73558)
* 연습 문제
  * [BOJ 20501 Facebook](https://www.acmicpc.net/problem/20501)
  * [BOJ 9423 레슬링 팀 선발](https://www.acmicpc.net/problem/9423)
  * [BOJ 9789 Friendship Graph](https://www.acmicpc.net/problem/9789) - $O(N^3/w)$
  * [BOJ 23373 Jack the Mole](https://www.acmicpc.net/problem/23373) - $O(N^3W/w)$
  * [BOJ 17184 Nautilus](https://www.acmicpc.net/problem/17184)
  * [BOJ 18439 LCS 6](https://www.acmicpc.net/problem/18439)

### SIMD

* 튜토리얼
  * (한글) [jhnah917](https://justicehui.github.io/hard-algorithm/2021/11/15/simd-in-ps/)
* 연습 문제
  * [BOJ 14438 수열과 쿼리 17](https://www.acmicpc.net/problem/14438) - $O(Q \log N)$ vs $O(NQ/8)$
  * [BOJ 3847 Comparing answers](https://www.acmicpc.net/problem/3847) - $O(N^2)$ vs $O(N^3/8)$
  * [BOJ 13925 수열과 쿼리 13](https://www.acmicpc.net/problem/13925) - $O(Q \log N)$ vs $O(NQ/8)$
  * [BOJ 23577 Trio](https://www.acmicpc.net/problem/23577) - $O(81N^2)$ vs $O(N^3/96)$ vs $O(20000N^2/512)$

### Barrett Reduction

* 튜토리얼
  * (영어) [Spheniscine](https://codeforces.com/blog/entry/75406)
* 연습 문제
  * [BOJ 17467 N! mod P (2)](https://www.acmicpc.net/problem/17467)

## 그들만의 이상한 밈

추가 예정
