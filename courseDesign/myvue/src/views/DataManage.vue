<template>
    <el-form style="width: 60%" :model="ruleForm" :rules="rules" ref="ruleForm" label-width="100px" class="demo-ruleForm">

        <el-form-item label="公积金缴额" prop="name">
            <el-input v-model="ruleForm.fund"></el-input>
        </el-form-item>

        <el-form-item label="社保缴费" prop="security">
            <el-input v-model="ruleForm.security"></el-input>
        </el-form-item>

        <el-form-item>
            <el-button type="primary" @click="submitForm('ruleForm')">提交</el-button>
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
                    createBy: ''
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
                        axios.post('http://localhost:8181/dataManage/save',this.ruleForm).then(function(resp){
                            if(resp.data.code === 200){
                                _this.$alert('运算成功！', '消息', {
                                    confirmButtonText: '确定',
                                    callback: action => {
                                        _this.$router.push('/DataView')
                                    }
                                })
                            }else {
                                //运算失败
                                this.$message.error(resp.data.msg);
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
        }
    }
</script>

