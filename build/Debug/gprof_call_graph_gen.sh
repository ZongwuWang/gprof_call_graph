###
 # @Author: Wang Zongwu
 # @Date: 2022-01-09 18:16:38
 # @LastEditTime: 2022-01-09 18:21:01
 # @LastEditors: Wang Zongwu
 # @Description: Generate function call graph with gprof
 # @FilePath: /_posts/root/Documents/CPP_Proj/gprofDemo/build/Debug/gprof_call_graph_gen.sh
 # @Mail: wangzongwu@sjtu.edu.cn
 # Please ask for permission before quote the code.
### 
execute='./hello'
# Execute executable to generate gmon.out file
${execute}
# build soft link of gprof2dot.py
ln -s ~/Documents/sysScript/gprof2dot/gprof2dot.py
gprof ${execute} | python gprof2dot.py -n0 -e0 | dot -Tpng -o output.png
