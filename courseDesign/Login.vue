<template>
    <body id="poster">
    <!-- 数据绑定：model  ref引用对象-->
    <el-form  :model="loginForm" :rules="rules" class="login-container" label-position="left"
              label-width="0px" ref="loginFormRef" >
        <h3 class="login_title">系统登录</h3>
        <el-form-item  prop="username">
            <el-input type="text" prefix-icon="el-icon-date" v-model="loginForm.username"
                      auto-complete="off" placeholder="账号" round></el-input>
        </el-form-item>

        <el-form-item prop="password">
            <el-input type="password" prefix-icon="el-icon-goods" v-model="loginForm.password"
                      auto-complete="off" placeholder="密码" round></el-input>
        </el-form-item>


        <!-- 按钮区域 -->
        <el-row class="btns">
            <el-button type="primary" class="login_style" round @click="register">注册</el-button>
            <el-button type="primary" class="login_style" round v-on:click="login">登陆</el-button>

        </el-row>
        <el-row class="btns">

            <el-button type="primary" class="login_style" round v-on:click="yuQueAuth">语雀授权</el-button>

        </el-row>
    </el-form>
    </body>
</template>

<script>
    export default {
        name: 'Login',
        data () {
            return {
                loginForm: {
                    username: '',
                    password: ''
                },
                form: {
                    name: '',
                    region: '',
                    // date1: '',
                    // date2: '',
                    // delivery: false,
                    type: [],
                    resource: '',
                    desc: ''
                },
                //rule规则
                rules: {
                    username:[
                        { required: true, message: '请输入账号', trigger: 'blur' },
                        { min: 2, max: 25, message: '长度不合理', trigger: 'blur' }
                    ],
                    password:[
                        { required: true, message: '请输入密码', trigger: 'blur' },
                        { min: 3, max: 30, message: '长度不合理', trigger: 'blur' }
                    ],
                },
                responseResult: [],
                state:'',
                client_id:'',
                scope:'',
                response_type:''

            }
        },
        methods: {
            //登陆操作的函数
            login() {
                if (this.loginForm.username == null || this.loginForm.username == '') {
                    this.$message.error('用户名不能为空');
                    return;
                }
                if (this.loginForm.password == null || this.loginForm.password == '') {
                    this.$message.error('密码不能为空');
                    return;
                }
                this.$axios
                    .post('http://localhost:8181/login', {
                        username: this.loginForm.username,
                        password: this.loginForm.password
                    })
                    .then(successResponse => {
                        debugger
                        if (successResponse.data.code === 200) {
                            localStorage.setItem("username", successResponse.data.data.username);
                            localStorage.setItem("role", successResponse.data.data.role);
                            this.$router.replace({path: '/Usersmanage'})
                        } else {
                            alert('登录失败！')
                        }
                    })
                    .catch(failResponse => {
                    });
            },
            //     C:\Users\Administrator\AppData\Roaming\JetBrains\IntelliJIdea2020.1


            // },


            //注册
            register() {
                this.$router.push({
                    path: "/register"
                })
            }
        }
    }

               // const_this=this

                // this.$axios
                //     .get('http://localhost:8181/login',this.loginForm.username+'&'+ this.loginForm.password).then(function (resp) {
                //     debugger
                //         if (resp.data.code == '200') {
                //         _this.$router.push({
                //             path: "/DataManage"
                //         })
                //     } else {
                //         alert('账号或者密码错误')
                //     }
                //
                // })},
          //  yuQueAuth(){

//                 1. 点击语雀授权，携带 state、client_id、scope、response_type
//                 a. https://www.yuque.com/oauth2/authorize?client_id=FCEGPMmDcnjwDKJsTfoV&scope=group:read
//                          &redirect_uri=http://127.0.0.1:10240/user/oauth/yuque&state=123456&response_type=code
//                 2. 点击确认授权后语雀会重定向到 /user/oauth/yuque 接口，携带 code、state
//                 a. 接口会根据 code 换取 token
//                 b. 根据 token 换取用户信息
//                 c. 获取用户组信息，判断用户是否在用户组中
//                 3. 判断完后会重定向到前端 oauth，携带 id、state、status
//                 status=-1表示授权失败，status=0表示新用户id、status=1表示老用户并且有id
//                 4. 前端根据参数进行判断下面的操作逻辑
//                 a. status = -1 授权失败跳转到首页
//                 b. status = 0，让用户填写信息（新用户完善信息接口）
// c. status = 1，老用户直接跳转到管理页面（获取用户信息接口）
//                 this.state = '123456';
//                 debugger
//                 this.client_id = 'FCEGPMmDcnjwDKJsTfoV';
//                 this.scope = 'group:read';
//                 this.response_type = 'code';
//                 var url = 'https://www.yuque.com/oauth2/authorize?client_id=' + this.client_id + '&scope=' + this.scope +
//                     '&redirect_uri=http://127.0.0.1:10240/user/oauth/yuque&state=' + this.state + '&response_type=' + this.response_type + '';

            //         this.$axios
            //             .get(url).then(function (resp) {
            //             debugger
            //                 if (resp.status == '-1') {
            //                 _this.$router.push({
            //                     path: "/index"
            //                 })
            //             } else if (resp.status == '0') {
            //                     _this.$router.push({
            //                         path: "/Register"
            //                     })
            //                 }
            //                 else if(resp.status == '1') {
            //                 _this.$router.push({
            //                     path: "/DataManage"
            //                 })
            //             }
            //
            //         })},
            //
        //     }
        // }

</script>

<style>
    #poster {
        background:url("../assets/LoginPhoto.jpg") no-repeat;
        background-position: center;
        height: 100%;
        width: 100%;
        background-size: cover;
        position: fixed;
    }
    body{
        margin: 0px;
    }
    .login-container {
        border-radius: 15px;
        background-clip: padding-box;
        margin: 90px auto;
        margin-top: 15%;
        width: 350px;
        padding: 35px 35px 15px 35px;
        background: #fff;
        border: 1px solid #eaeaea;
        box-shadow: 0 0 25px #cac6c6;
    }
    .login_title {
        margin: 0px auto 40px auto;
        text-align: center;
        color: #505458;
    }
    .btns {
        text-align: center;
        padding-bottom: 15px;
    }
    .login_style{
        width: 45%;
    }

</style>
