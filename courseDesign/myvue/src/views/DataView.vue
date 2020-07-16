<template>
    
</template>

<script>
    export default {
        name: "Dataview"
    }
</script>
<template>
    <div>
        <el-table
                :data="tableData"
                border
                style="width: 90%">
            <el-table-column
                    fixed
                    prop="id"
                    label="编号"
                    width="100">
            </el-table-column>
            <el-table-column
                    v-if="user.role!='company'"
                    prop="fund"
                    label="公积金费用"
                    width="120">
            </el-table-column>
            <el-table-column
                    v-if="user.role!='company'"
                    prop="security"
                    label="社保费用"
                    width="120">
            </el-table-column>
            <el-table-column
                    v-if="user.role!='user'"
                    prop="fundEncode"
                    label="公积金费用-加密"
                    width="120"
                    show-overflow-tooltip
            >
            </el-table-column>
            <el-table-column
                    v-if="user.role!='user'"
                    prop="securityEncode"
                    label="社保费用-加密"
                    width="120"
                    show-overflow-tooltip
            >
            </el-table-column>

            <el-table-column
                    prop="result"
                    label="计算结果"
                    width="120">
            </el-table-column>
            <el-table-column
                    prop="createBy"
                    label="用户名"
                    width="120">
            </el-table-column>
            <el-table-column
                    prop="createByRole"
                    label="用户角色"
                    width="120">
            </el-table-column>

            <el-table-column
                    v-if="user.role!='company'"
                    fixed="right"
                    label="操作"
                    width="200"
                    >
                <template slot-scope="scope" >
                    <el-button type="primary" @click="edit(scope.row)"  size="mini" class="el-icon-edit">修改</el-button>
                    <el-button type="primary" @click="deleteBook(scope.row)"  size="mini" class="el-icon-delete">删除</el-button>
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
                axios.delete('http://localhost:8181/dataManage/deleteById/'+row.id).then(function(resp){
                    _this.$alert('删除成功！', '消息', {
                        confirmButtonText: '确定',
                        callback: action => {
                            window.location.reload()
                        }
                    })
                })
            },
            edit(row) {
                this.$router.push({
                    path: '/DataUpdate',
                    query:{
                        id:row.id
                    }
                })
            },
            page(currentPage){
                const _this = this;
                var createBy = localStorage.getItem("username");
                var role = localStorage.getItem("role");
                axios.get('http://localhost:8181/dataManage/findAll/'+(currentPage-1)+'/6/'+createBy).then(function(resp){
                    console.log(resp)
                    debugger
                    _this.tableData = resp.data.content
                    _this.pageSize = resp.data.size
                    _this.total = resp.data.totalElements
                })
            }
        },

        data() {
            return {
                pageSize:'',
                total:'',
                tableData: [{
                    id: '',
                    fund: '',
                    security: '',
                    fundEncode: '',
                    securityEncode: '',
                    result: '',
                    createBy: '',
                    createByRole:""
                }],
                user :{
                    username: '',
                    role:''
                }
            }
        },

        created() {
            this.user.username=localStorage.getItem("username");
            this.user.role=localStorage.getItem("role");
            const _this = this;
            var createBy = localStorage.getItem("username");
            axios.get('http://localhost:8181/dataManage/findAll/0/6/'+createBy).then(function(resp){
                console.log(resp)
                debugger
                _this.tableData = resp.data.content
                _this.pageSize = resp.data.size
                _this.total = resp.data.totalElements
            })
        }
    }
</script>
<style scoped>

</style>