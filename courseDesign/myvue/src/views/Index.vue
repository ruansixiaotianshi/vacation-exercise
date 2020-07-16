
<template>

    <div class="home-wrapper">

        <el-container style="height: 500px; border: 1px solid #eee">
            <el-header>
                <el-row type="flex" class="row-bg" justify="space-between">
                    <el-col :span="4">多方数据安全计算管理</el-col>
                    <el-col :span="4" class="header-font">系统管理</el-col>
                    <el-col :span="1" class="header-logout"><a href="#" @click.prevent="logout" id="logoutspan">退出</a></el-col>
                </el-row>
            </el-header>
            <el-container>
            <el-aside width="200px" style="background-color: rgb(238, 241, 246)">

                <el-menu router :default-openeds="['0', '1']">
<!--                    background-color="#545c64"&ndash;&gt;-->
<!--                                    text-color="#fff"-->
<!--                                    active-text-color="#ffd04b">-->
                    <el-submenu v-for="(item,index) in $router.options.routes" :index="index+''" v-if="item.show">
                        <template slot="title">{{item.name}}</template>
                        <el-menu-item v-for="(item2,index2) in item.children" :index="item2.path"
                                      :class="$route.path==item2.path?'is-active':''">{{item2.name}}</el-menu-item>
                    </el-submenu>
                </el-menu>

            </el-aside>

            <el-main>
                <router-view></router-view>
            </el-main>
            </el-container>
        </el-container>



    </div>

</template>



<script>
    import { constants } from 'crypto';
    export default {
        name: "Index",
        data(){
            return{

            }
        },
        methods:{
            logout(){//退出功能
                //弹出确认对话框
                //用户点击确认，跳回用户登录页面，清除token
                this.$confirm('确定要退出登录吗?', '提示', {
                    confirmButtonText: '确定',
                    cancelButtonText: '取消',
                    type: 'warning'
                }).then(() => {
                    this.$message({
                        type: 'success',
                        message: '退出成功!'
                    });
                    //确认退出，清除token
                    localStorage.clear();
                    //跳转登录页面(编程式导航)
                    this.$router.push('/login')

                }).catch(() => {
                    this.$message({
                        type: 'info',
                        message: '已取消退出'
                    });
                });

            }
        }
    }
</script>>


<!--<style lang="scss" scoped>-->
<!--    .dashboard {-->
<!--    .container {-->
<!--         margin: 30px;-->
<!--     }-->
<!--    .text {-->
<!--         font-size: 30px;-->
<!--         line-height: 46px;-->
<!--     }-->
<!--    }-->
<!--</style>-->

<!--<el-row class="tac">-->

<!--    <el-col :span="12">-->
<!--        <h5>自定义颜色</h5>-->
<!--        <el-menu-->
<!--                default-active="2"-->
<!--                class="el-menu-vertical-demo"-->
<!--                @open="handleOpen"-->
<!--                @close="handleClose"-->
<!--                background-color="#545c64"-->
<!--                text-color="#fff"-->
<!--                active-text-color="#ffd04b">-->
<!--            <el-submenu index="1">-->
<!--                <template slot="title">-->
<!--                    <i class="el-icon-location"></i>-->
<!--                    <span>导航一</span>-->
<!--                </template>-->
<!--                <el-menu-item-group>-->
<!--                    <template slot="title">分组一</template>-->
<!--                    <el-menu-item index="1-1">选项1</el-menu-item>-->
<!--                    <el-menu-item index="1-2">选项2</el-menu-item>-->
<!--                </el-menu-item-group>-->
<!--                <el-menu-item-group title="分组2">-->
<!--                    <el-menu-item index="1-3">选项3</el-menu-item>-->
<!--                </el-menu-item-group>-->
<!--                <el-submenu index="1-4">-->
<!--                    <template slot="title">选项4</template>-->
<!--                    <el-menu-item index="1-4-1">选项1</el-menu-item>-->
<!--                </el-submenu>-->
<!--            </el-submenu>-->
<!--            <el-menu-item index="2">-->
<!--                <i class="el-icon-menu"></i>-->
<!--                <span slot="title">导航二</span>-->
<!--            </el-menu-item>-->
<!--            <el-menu-item index="3" disabled>-->
<!--                <i class="el-icon-document"></i>-->
<!--                <span slot="title">导航三</span>-->
<!--            </el-menu-item>-->
<!--            <el-menu-item index="4">-->
<!--                <i class="el-icon-setting"></i>-->
<!--                <span slot="title">导航四</span>-->
<!--            </el-menu-item>-->
<!--        </el-menu>-->
<!--    </el-col>-->
<!--</el-row>-->
<!--<script>-->
<!--    export default {-->
<!--        methods: {-->
<!--            handleOpen(key, keyPath) {-->
<!--                console.log(key, keyPath);-->
<!--            },-->
<!--            handleClose(key, keyPath) {-->
<!--                console.log(key, keyPath);-->
<!--            }-->
<!--        }-->
<!--    }-->
<!--</script>-->