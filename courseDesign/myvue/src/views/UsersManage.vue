<template>
    <div>
        <el-table
                :data="tableData"
                border
                style="width:80%">
            <el-table-column
                    fixed
                    prop="id"
                    label="编号"
                    width="150">
            </el-table-column>
            <el-table-column
                    prop="username"
                    label="用户名"
                    width="120">
            </el-table-column>
            <el-table-column
                    prop="role"
                    label="所属机构"
                    width="120">
            </el-table-column>
            <el-table-column
                    fixed="right"

                    label="操作"
                    width="200">
                <template slot-scope="scope">
                    <el-button type="primary"  @click="edit(scope.row)"  size="small" >修改</el-button>
                    <el-button  type="primary" @click="deleteBook(scope.row)"  size="small">删除</el-button>
                </template>
            </el-table-column>
        </el-table>

        <el-pagination
                background
                layout="prev, pager, next"
                :page-size="pageSize"
                :total="total"
                @current-change="page">
        </el-pagination>
    </div>
</template>

<script>
    export default {
        methods: {
            deleteBook(row){
                const _this = this
                axios.delete('http://localhost:8181/user/deleteById/'+row.id).then(function(resp){
                    _this.$alert('《'+row.name+'》删除成功！', '消息', {
                        confirmButtonText: '确定',
                        callback: action => {
                            window.location.reload()
                        }
                    })
                })
            },
            edit(row) {
                this.$router.push({
                    path: '/UserUpdate',
                    query:{
                        id:row.id
                    }
                })
            },
            page(currentPage){
                const _this = this

                var createBy = localStorage.getItem("username");
                axios.get('http://localhost:8181/user/findAll/'+(currentPage-1)+'/4/'+createBy).then(function(resp){
                    console.log(resp)
                    _this.tableData = resp.data.content
                    _this.pageSize = resp.data.size
                    _this.total = resp.data.totalElements
                })
            }
        },

        data() {
            return {
                pageSize:'1',
                total:'11',
                tableData: [{
                    id: 1,
                    name: 'admin',
                    author: '浪潮'
                }, {
                    id: 2,
                    name: 'loopy',
                    author: '政府机构'
                }, {
                    id: 3,
                    name: 'Lihua',
                    author: '政府机构'
                }]
            }
        },

        created() {
            const _this = this
            var createBy = localStorage.getItem("username");
            axios.get('http://localhost:8181/user/findAll/0/10/'+createBy).then(function(resp){
                console.log(resp)
                _this.tableData = resp.data.content
                _this.pageSize = resp.data.size
                _this.total = resp.data.totalElements
            })
        }
    }
</script>