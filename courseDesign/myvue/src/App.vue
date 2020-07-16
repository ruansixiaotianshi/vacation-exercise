<template>
  <div id="app">
    <el-container style="height: 500px; border: 1px solid #eee">



      <el-main>
        <router-view></router-view>
      </el-main>

    </el-container>
  </div>
</template>

<style>
  .el-header {
    background-color: #B3C0D1;
    color: #409EFF;
    line-height: 60px;
  }

  .el-aside {
    color: #409EFF;
  }
</style>

<script>
  export default {
    data() {
      const item = {
        date: '2016-05-02',
        name: '王小虎',
        address: '上海市普陀区金沙江路 1518 弄'
      };
      return {
        tableData: Array(20).fill(item)
      }
    }
  };
</script>
