<template>
    <el-form style="width: 60%" :model="ruleForm" :rules="rules" ref="ruleForm" label-width="100px" class="demo-ruleForm">



        <el-form-item label="公积金缴额" prop="name">
            <el-input v-model="ruleForm.fund"></el-input>
        </el-form-item>

        <el-form-item label="社保缴费" prop="security">
            <el-input v-model="ruleForm.security"></el-input>
        </el-form-item>

        <el-form-item>
            <el-button type="primary" @click="submitForm('ruleForm')">修改</el-button>
            <el-button @click="resetForm('ruleForm')">重置</el-button>
        </el-form-item>


    </el-form>
</template>

<script>
    export default {
        data() {
            return {
                ruleForm: {
                    fund: '',
                    security: '',
                    createBy: '',
                    createByRole: ''
                },
                rules: {
                    fund: [
                        { required: true, message: '公积金缴额不能为空', trigger: 'blur' }
                    ],
                    security:[
                        { required: true, message: '社保缴费不能为空', trigger: 'blur' }
                    ]
                }
            };
        },
        methods: {
            submitForm(formName) {
                const _this = this
                this.$refs[formName].validate((valid) => {
                    if (valid) {
                        this.ruleForm.createBy = localStorage.getItem("username");
                        axios.put('http://localhost:8181/dataManage/update',this.ruleForm).then(function(resp){
                            if(resp.data.code == 200){
                                _this.$alert('修改成功！', '消息', {
                                    confirmButtonText: '确定',
                                    callback: action => {
                                        _this.$router.push('/DataView')
                                    }
                                })
                            }
                        })
                    } else {
                        return false;
                    }
                });
            },
            resetForm(formName) {
                this.$refs[formName].resetFields();
            }
        },
        created() {
            const _this = this
            axios.get('http://localhost:8181/dataManage/findById/'+this.$route.query.id).then(function(resp){
                _this.ruleForm = resp.data
            })
        }
    }
</script>